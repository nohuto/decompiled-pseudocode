/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01F2628
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F1A28 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned __int64 a1, struct tagWND *a2)
{
  struct tagINPUTDEST *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // edi
  __int64 *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-B0h]
  __int64 v16; // [rsp+40h] [rbp-A8h]
  _BYTE v17[128]; // [rsp+50h] [rbp-98h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  memset(v17, 0, 0x78uLL);
  v3 = CTouchProcessor::NotifyCaptureChangedIfCaptured(gpTouchProcessor, a1, (struct tagINPUTDEST *)v17);
  v6 = 0;
  if ( !v3 )
    return 1LL;
  v8 = (__int64 *)*((_QWORD *)v3 + 10);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
  v14 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
  v15 = v8;
  if ( v8 )
    HMLockObject(v8);
  v10 = xxxSendPointerMessageWorker((__int64)v8, 588LL, a1, *v8, 0LL, 183);
  ThreadUnlock1(v12, v11, v13);
  LOBYTE(v6) = v10 != 0;
  return v6;
}
