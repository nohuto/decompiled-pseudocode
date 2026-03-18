/*
 * XREFs of xxxDCEWindowHitTestIndirect @ 0x1C00D68D0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0139FCC (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0139FCC (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(struct tagWND *a1, struct tagPOINT a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct tagWND *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 CurrentProcessWin32Process; // rax
  HWND v13; // rsi
  __int64 v14; // rcx
  int v15; // r15d
  LONG x; // eax
  LONG v17; // ecx
  struct tagWND *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  struct tagWND *v21; // [rsp+28h] [rbp-40h]
  struct tagPOINT v22; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v23; // [rsp+78h] [rbp+10h] BYREF

  v23 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v6 = 18;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))IsThreadCrossSessionAttached)(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v11 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v11 + 340) )
        {
          v6 = *(_DWORD *)(v11 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
          if ( CurrentProcessWin32Process )
            v6 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  v13 = 0LL;
  v14 = gptiCurrent;
  v20 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v20;
  v21 = 0LL;
  if ( v5 )
  {
    v15 = *(_DWORD *)(a3 + 32);
    do
    {
      x = v23.x;
      v22 = v23;
      v17 = v23.x;
      if ( (v15 & 4) != 0 )
      {
        v7 = v6 >> 8;
        v8 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) >> 8;
        LOWORD(v8) = v7 ^ v8;
        if ( (v8 & 0x1FF) != 0 )
        {
          LogicalToPhysicalDPIPoint(&v22, &v23, v6, 0LL);
          *(_DWORD *)(a3 + 32) &= ~4u;
          x = v23.x;
          v17 = v22.x;
        }
      }
      if ( !*(_QWORD *)(a3 + 56) || v17 != x || v22.y != v23.y )
        *(_QWORD *)(a3 + 56) = &v22;
      v18 = v21;
      v21 = v5;
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
      if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)v18 + 2, 0xFFFFFFFF) == 1 )
        HMUnlockObjectInternal(v18, v7, v8);
      v13 = xxxDCEWindowHitTest2Internal(v5, v22, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)a3);
      if ( v13 )
        break;
      *(_DWORD *)(a3 + 32) = v15;
      v5 = (struct tagWND *)*((_QWORD *)v5 + 8);
    }
    while ( v5 );
  }
  ThreadUnlock1(v14, v7, v8);
  return v13;
}
