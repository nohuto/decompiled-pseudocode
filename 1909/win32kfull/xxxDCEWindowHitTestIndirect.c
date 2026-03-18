/*
 * XREFs of xxxDCEWindowHitTestIndirect @ 0x1C00699E0
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0069C40 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDCEWindowHitTest @ 0x1C00E51FC (xxxDCEWindowHitTest.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00447D0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0069C40 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(ULONG_PTR BugCheckParameter2, struct tagPOINT a2, __int64 a3)
{
  ULONG_PTR v4; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 CurrentProcessWin32Process; // rax
  HWND v13; // rdi
  __int64 v14; // rcx
  int v15; // r15d
  LONG x; // eax
  LONG v17; // ecx
  unsigned int v18; // r9d
  int v19; // r8d
  int v20; // edx
  ULONG_PTR v21; // rdi
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h]
  struct tagPOINT v26; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v27; // [rsp+78h] [rbp+10h] BYREF

  v27 = a2;
  v23 = 0LL;
  v4 = BugCheckParameter2;
  v24 = 0LL;
  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 18;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))IsThreadCrossSessionAttached)(
                        BugCheckParameter2,
                        a2,
                        a3) )
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
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v7);
          if ( CurrentProcessWin32Process )
            v6 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
        if ( (*(_DWORD *)(v11 + 328) & 8) != 0 && (v6 & 0xF) == 2 && (v6 & 0xF0) == 0x20 )
          v6 |= 0x20000000u;
      }
    }
  }
  v13 = 0LL;
  v14 = gptiCurrent;
  v23 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v23;
  v24 = 0LL;
  if ( v4 )
  {
    v15 = *(_DWORD *)(a3 + 32);
    do
    {
      x = v27.x;
      v26 = v27;
      v17 = v27.x;
      if ( (v15 & 4) != 0 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 288LL);
        if ( (((unsigned __int16)(v6 >> 8) ^ (unsigned __int16)(v18 >> 8)) & 0x1FF) != 0
          || ((v18 & 0xF) != 2 || (v18 & 0x20000000) == 0 ? (v19 = 0) : (v19 = 1),
              (v6 & 0xF) != 2 || (v6 & 0x20000000) == 0 ? (v20 = 0) : (v20 = 1),
              v19 != v20) )
        {
          LogicalToPhysicalDPIPoint(&v26, &v27, v6, 0LL);
          *(_DWORD *)(a3 + 32) &= ~4u;
          x = v27.x;
          v17 = v26.x;
        }
      }
      if ( !*(_QWORD *)(a3 + 56) || v17 != x || v26.y != v27.y )
        *(_QWORD *)(a3 + 56) = &v26;
      v21 = v24;
      v24 = v4;
      HMLockObject(v4);
      if ( v21 )
        HMUnlockObject(v21);
      v13 = xxxDCEWindowHitTest2Internal(v4, v26, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)a3);
      if ( v13 )
        break;
      *(_DWORD *)(a3 + 32) = v15;
      v4 = *(_QWORD *)(v4 + 88);
    }
    while ( v4 );
  }
  ThreadUnlock1(v14, v7, v8);
  return v13;
}
