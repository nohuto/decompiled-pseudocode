/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F27A8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F1BA8 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned __int64 a1, struct tagWND *a2)
{
  struct tagINPUTDEST *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  __int64 *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-B0h]
  __int64 v17; // [rsp+40h] [rbp-A8h]
  _BYTE v18[128]; // [rsp+50h] [rbp-98h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset(v18, 0, 0x78uLL);
  v3 = CTouchProcessor::NotifyCaptureChangedIfCaptured(gpTouchProcessor, a1, (struct tagINPUTDEST *)v18);
  v7 = 0;
  if ( !v3 )
    return 1LL;
  v9 = (__int64 *)*((_QWORD *)v3 + 10);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v15 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
  v16 = v9;
  if ( v9 )
    HMLockObject(v9);
  v11 = xxxSendPointerMessageWorker((__int64)v9, 588LL, a1, *v9, 0LL, 183);
  ThreadUnlock1(v13, v12, v14);
  LOBYTE(v7) = v11 != 0;
  return v7;
}
