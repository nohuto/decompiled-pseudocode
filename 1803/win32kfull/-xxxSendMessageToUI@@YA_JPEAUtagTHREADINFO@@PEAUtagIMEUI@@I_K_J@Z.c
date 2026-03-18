/*
 * XREFs of ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01AC954
 * Callers:
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01ACB64 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 */

__int64 __fastcall xxxSendMessageToUI(PRKPROCESS **a1, struct tagIMEUI *a2, __int64 a3, HWND a4)
{
  int v7; // ebx
  ULONG64 v8; // rdx
  struct tagIMEUI *v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-78h]
  _QWORD v19[3]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v20[64]; // [rsp+88h] [rbp-40h] BYREF
  __int64 v22; // [rsp+F0h] [rbp+28h]

  v22 = 0LL;
  v7 = 0;
  if ( a1 != (PRKPROCESS **)gptiCurrent )
  {
    v7 = 1;
    LockW32Thread((__int64)a1, (__int64)v20);
    KeAttachProcess(*a1[52]);
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
    v19[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v19;
    v19[1] = BugCheckParameter2;
    _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 8));
    _InterlockedIncrement(&glSendMessage);
    v22 = xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 0x282u, a4, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v14, v13, v15);
    if ( v7 )
    {
      if ( ((_DWORD)a1[60] & 1) != 0 )
      {
LABEL_14:
        PopAndFreeW32ThreadLock((__int64)v20, v16);
        return v22;
      }
      KeAttachProcess(*a1[52]);
    }
    _InterlockedDecrement(v11);
  }
  if ( v7 )
  {
    KeDetachProcess();
    goto LABEL_14;
  }
  return v22;
}
