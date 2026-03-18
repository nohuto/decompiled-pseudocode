/*
 * XREFs of NtUserfnDDEINIT @ 0x1C021F2C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     InternalSetProp @ 0x1C00B3498 (InternalSetProp.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C0210F60 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C021102C (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 Prop; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  TOKEN_TYPE v20; // eax
  void *v21; // rcx
  __int64 v22; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD v28[3]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v29[3]; // [rsp+48h] [rbp-30h] BYREF

  v10 = 0LL;
  v11 = ValidateHwnd(a3);
  if ( v11 )
  {
    v28[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v28;
    v28[1] = v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    Prop = GetProp(v11, (unsigned __int16)atomDDEImp, 1LL);
    if ( !Prop )
    {
      v16 = *(_QWORD *)(v11 + 40);
      if ( *(char *)(v16 + 19) < 0 || *(char *)(v16 + 20) < 0 )
      {
LABEL_15:
        v18 = 87LL;
        goto LABEL_16;
      }
      v17 = Win32AllocPoolWithQuota(96LL, 1147433813LL);
      Prop = v17;
      if ( !v17 )
      {
LABEL_6:
        v18 = 8LL;
LABEL_16:
        UserSetLastError(v18, v12, v14, v15);
        goto LABEL_17;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v17 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v17 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v19 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)InternalSetProp(v11, v19, Prop, 1u) )
      {
        v20 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 32));
        v21 = *(void **)(Prop + 32);
        if ( v20 == TokenPrimary || v21 )
          ObfDereferenceObject(v21);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v11, (struct tagDDEIMP *)Prop, (struct _TL *)v29) == 1 )
    {
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
              a1,
              a2,
              a3,
              a4,
              a5);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
      *(_QWORD *)(ThreadWin32Thread + 16) = v29[0];
      DDEImpDecRefInitWorker(*(_QWORD *)v11, v24);
LABEL_17:
      ThreadUnlock1(v26, v25);
      return v10;
    }
    goto LABEL_15;
  }
  return v10;
}
