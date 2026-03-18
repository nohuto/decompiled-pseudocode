/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E4688
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E48D8 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, unsigned __int64 a4)
{
  int v7; // ebx
  ULONG64 v8; // rdx
  struct tagIMEUI *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  volatile signed __int32 *v12; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *BugCheckParameter2; // [rsp+50h] [rbp-78h]
  __int64 v21; // [rsp+70h] [rbp-58h] BYREF
  __int64 *v22; // [rsp+78h] [rbp-50h]
  __int64 v23; // [rsp+80h] [rbp-48h]
  _QWORD v24[8]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+28h]

  v26 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v24, 0, 24);
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, v24, a3);
    KeAttachProcess(*a1[52]);
  }
  v8 = MmUserProbeAddress;
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (struct tagIMEUI *)MmUserProbeAddress;
  LOBYTE(v8) = 1;
  BugCheckParameter2 = (__int64 *)HMValidateHandleNoSecure(*((_QWORD *)v9 + 4), v8, a3);
  if ( BugCheckParameter2 )
  {
    v12 = (volatile signed __int32 *)((char *)a2 + 40);
    _InterlockedIncrement(v12);
    if ( v7 )
      KeDetachProcess();
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
    v21 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
    v22 = BugCheckParameter2;
    HMLockObject(BugCheckParameter2);
    _InterlockedIncrement(&glSendMessage);
    v26 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x282u, a4, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v15, v14, v16);
    if ( v7 )
    {
      if ( ((_DWORD)a1[60] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)v24, v17, v18);
        return v26;
      }
      KeAttachProcess(*a1[52]);
    }
    _InterlockedDecrement(v12);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v26;
}
