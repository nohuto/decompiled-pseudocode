/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01DCB88
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxSendPointerMessageWorker @ 0x1C01DBF34 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned __int64 a1, struct tagWND *a2)
{
  struct tagINPUTDEST *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v13[176]; // [rsp+50h] [rbp-C8h] BYREF

  v3 = CTouchProcessor::NotifyCaptureChangedIfCaptured(gpTouchProcessor, a1, (struct tagINPUTDEST *)v13);
  v5 = 0;
  if ( !v3 )
    return 1LL;
  v7 = *((_QWORD *)v3 + 9);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v12;
  v12[1] = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v9 = xxxSendPointerMessageWorker(v7, 588LL, a1, *(_QWORD *)v7, 0LL, 183);
  ThreadUnlock1(v11, v10);
  LOBYTE(v5) = v9 != 0;
  return v5;
}
