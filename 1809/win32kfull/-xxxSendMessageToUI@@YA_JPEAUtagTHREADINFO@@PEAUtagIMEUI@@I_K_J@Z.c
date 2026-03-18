/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01CFB7C
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01CFDAC (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // ebx
  ULONG64 v8; // rdx
  struct tagIMEUI *v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h]
  _QWORD v18[3]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v19[8]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v21; // [rsp+F0h] [rbp+28h]

  v21 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, v19);
    KeAttachProcess(*a1[53]);
  }
  v8 = MmUserProbeAddress;
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (struct tagIMEUI *)MmUserProbeAddress;
  LOBYTE(v8) = 1;
  BugCheckParameter2 = HMValidateHandleNoSecure(*((_QWORD *)v9 + 4), v8);
  if ( BugCheckParameter2 )
  {
    v11 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v11);
    if ( v7 )
      KeDetachProcess();
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
    v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v18;
    v18[1] = BugCheckParameter2;
    _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 8));
    _InterlockedIncrement(&glSendMessage);
    v21 = xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 0x282u, a4, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v14, v13);
    if ( v7 )
    {
      if ( ((_DWORD)a1[61] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)v19, v15);
        return v21;
      }
      KeAttachProcess(*a1[53]);
    }
    _InterlockedDecrement(v11);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v21;
}
