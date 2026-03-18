/*
 * XREFs of NtUserfnDDEINIT @ 0x1C01F76C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01EB010 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01EB0AC (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 */

__int64 __fastcall NtUserfnDDEINIT(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 Prop; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  TOKEN_TYPE v18; // eax
  void *v19; // rcx
  __int64 v20; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD v27[3]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v28[3]; // [rsp+48h] [rbp-40h] BYREF

  v10 = 0LL;
  v11 = ValidateHwnd(a3);
  if ( v11 )
  {
    v27[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v27;
    v27[1] = v11;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    Prop = RealGetProp(*(_QWORD *)(v11 + 120), (unsigned __int16)atomDDEImp, 1LL);
    if ( !Prop )
    {
      v14 = *(_QWORD *)(v11 + 40);
      if ( *(char *)(v14 + 19) < 0 || *(char *)(v14 + 20) < 0 )
      {
LABEL_15:
        v16 = 87LL;
        goto LABEL_16;
      }
      v15 = Win32AllocPoolWithQuota(96LL, 1147433813LL);
      Prop = v15;
      if ( !v15 )
      {
LABEL_6:
        v16 = 8LL;
LABEL_16:
        UserSetLastError(v16, v12);
        goto LABEL_17;
      }
      *(struct _SECURITY_QUALITY_OF_SERVICE *)v15 = gqosDefault;
      if ( SeCreateClientSecurity(KeGetCurrentThread(), &gqosDefault, 0, (PSECURITY_CLIENT_CONTEXT)(v15 + 16)) < 0 )
      {
LABEL_8:
        Win32FreePool(Prop);
        goto LABEL_6;
      }
      v17 = (unsigned __int16)atomDDEImp;
      *(_DWORD *)(Prop + 88) = 0;
      if ( !(unsigned int)RealInternalSetProp(v11 + 120, v17, Prop, 1LL) )
      {
        v18 = SeTokenType(*(PACCESS_TOKEN *)(Prop + 32));
        v19 = *(void **)(Prop + 32);
        if ( v18 == TokenPrimary || v19 )
          ObfDereferenceObject(v19);
        goto LABEL_8;
      }
    }
    if ( (unsigned int)DDEImpIncRefInit((struct tagWND *)v11, (struct tagDDEIMP *)Prop, (struct _TL *)v28) == 1 )
    {
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
              a1,
              a2,
              a3,
              a4,
              a5);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
      *(_QWORD *)(ThreadWin32Thread + 16) = v28[0];
      DDEImpDecRefInitWorker(*(_QWORD *)v11, v22);
LABEL_17:
      ThreadUnlock1(v24, v23, v25);
      return v10;
    }
    goto LABEL_15;
  }
  return v10;
}
