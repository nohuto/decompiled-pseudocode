/*
 * XREFs of NtUserfnDDEINIT @ 0x1C0237010
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C02288B0 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C0228980 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 Prop; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  TOKEN_TYPE v21; // eax
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h]
  __int64 v34; // [rsp+40h] [rbp-38h]
  _QWORD v35[3]; // [rsp+48h] [rbp-30h] BYREF

  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  v10 = ValidateHwnd(a3);
  v11 = 0LL;
  v12 = (unsigned __int64 *)v10;
  if ( v10 )
  {
    v32 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v32;
    v33 = v10;
    HMLockObject(v10);
    Prop = GetProp((__int64)v12, (unsigned __int16)atomDDEImp, 1LL);
    if ( !Prop )
    {
      v17 = v12[5];
      if ( *(char *)(v17 + 19) < 0 || *(char *)(v17 + 20) < 0 )
      {
LABEL_15:
        v19 = 87LL;
        goto LABEL_16;
      }
      v18 = Win32AllocPoolWithQuota(96LL, 1147433813LL);
      Prop = v18;
      if ( !v18 )
      {
LABEL_6:
        v19 = 8LL;
LABEL_16:
        UserSetLastError(v19, v13, v15, v16);
        goto LABEL_17;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v18 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v18 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v20 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)InternalSetProp((__int64)v12, v20, Prop, 1u) )
      {
        v21 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 32));
        v22 = *(void **)(Prop + 32);
        if ( v21 == TokenPrimary || v22 )
          ObfDereferenceObject(v22);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v12, (struct tagDDEIMP *)Prop, (struct _TL *)v35) == 1 )
    {
      v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
              a1,
              a2,
              a3,
              a4,
              a5);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24);
      *(_QWORD *)(ThreadWin32Thread + 16) = v35[0];
      DDEImpDecRefInitWorker(*v12, v26, v27);
LABEL_17:
      ThreadUnlock1(v29, v28, v30);
      return v11;
    }
    goto LABEL_15;
  }
  return v11;
}
