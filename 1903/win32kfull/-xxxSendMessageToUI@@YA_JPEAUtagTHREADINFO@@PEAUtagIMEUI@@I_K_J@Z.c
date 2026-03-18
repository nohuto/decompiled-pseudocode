/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E4808
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E4A58 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, HWND a4)
{
  int v7; // ebx
  ULONG64 v8; // rdx
  struct tagIMEUI *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int32 *v13; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *BugCheckParameter2; // [rsp+50h] [rbp-78h]
  __int64 v23; // [rsp+70h] [rbp-58h] BYREF
  __int64 *v24; // [rsp+78h] [rbp-50h]
  __int64 v25; // [rsp+80h] [rbp-48h]
  _QWORD v26[8]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v28; // [rsp+F0h] [rbp+28h]

  v28 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  memset(v26, 0, 24);
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, v26, a3, (__int64)a4);
    KeAttachProcess(*a1[52]);
  }
  v8 = MmUserProbeAddress;
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (struct tagIMEUI *)MmUserProbeAddress;
  LOBYTE(v8) = 1;
  BugCheckParameter2 = (__int64 *)HMValidateHandleNoSecure(*((_QWORD *)v9 + 4), v8, a3, (__int64)a4);
  if ( BugCheckParameter2 )
  {
    v13 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v13);
    if ( v7 )
      KeDetachProcess();
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
    v23 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
    v24 = BugCheckParameter2;
    HMLockObject(BugCheckParameter2);
    _InterlockedIncrement(&glSendMessage);
    v28 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x282u, a4, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v16, v15, v17);
    if ( v7 )
    {
      if ( ((_DWORD)a1[60] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)v26, v18, v19, v20);
        return v28;
      }
      KeAttachProcess(*a1[52]);
    }
    _InterlockedDecrement(v13);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v28;
}
