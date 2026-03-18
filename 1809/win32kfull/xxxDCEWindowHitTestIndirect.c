/*
 * XREFs of xxxDCEWindowHitTestIndirect @ 0x1C002B5A0
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C002B790 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDCEWindowHitTest @ 0x1C0069DCC (xxxDCEWindowHitTest.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B550 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C002B790 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(struct tagWND *a1, struct tagPOINT a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct tagWND *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 CurrentProcessWin32Process; // rax
  HWND v12; // rsi
  __int64 v13; // rcx
  int v14; // r15d
  LONG x; // eax
  LONG v16; // ecx
  struct tagWND *v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  struct tagWND *v20; // [rsp+28h] [rbp-40h]
  struct tagPOINT v21; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v22; // [rsp+78h] [rbp+10h] BYREF

  v22 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  v6 = 18;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))IsThreadCrossSessionAttached)(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v10 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v10 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v10 + 340) )
        {
          v6 = *(_DWORD *)(v10 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
          if ( CurrentProcessWin32Process )
            v6 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  v12 = 0LL;
  v13 = gptiCurrent;
  v19 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v19;
  v20 = 0LL;
  if ( v5 )
  {
    v14 = *(_DWORD *)(a3 + 32);
    do
    {
      x = v22.x;
      v21 = v22;
      v16 = v22.x;
      if ( (v14 & 4) != 0
        && (((unsigned __int16)(v6 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL) >> 8)) & 0x1FF) != 0 )
      {
        LogicalToPhysicalDPIPoint(&v21, &v22, v6, 0LL, v19);
        *(_DWORD *)(a3 + 32) &= ~4u;
        x = v22.x;
        v16 = v21.x;
      }
      if ( !*(_QWORD *)(a3 + 56) || v16 != x || v21.y != v22.y )
        *(_QWORD *)(a3 + 56) = &v21;
      v17 = v20;
      v20 = v5;
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
      if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 2, 0xFFFFFFFF) == 1 )
        HMUnlockObjectInternal();
      v12 = xxxDCEWindowHitTest2Internal(v5, v21, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)a3);
      if ( v12 )
        break;
      *(_DWORD *)(a3 + 32) = v14;
      v5 = (struct tagWND *)*((_QWORD *)v5 + 8);
    }
    while ( v5 );
  }
  ThreadUnlock1(v13, v7);
  return v12;
}
