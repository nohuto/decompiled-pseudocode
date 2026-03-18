/*
 * XREFs of xxxDCEWindowHitTestIndirect @ 0x1C00C8310
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00C8570 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDCEWindowHitTest @ 0x1C010AC5C (xxxDCEWindowHitTest.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00A3A00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00C8570 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(ULONG_PTR BugCheckParameter2, struct tagPOINT a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 CurrentProcessWin32Process; // rax
  HWND v14; // rdi
  __int64 v15; // rcx
  int v16; // r15d
  LONG x; // eax
  LONG v18; // ecx
  unsigned int v19; // r9d
  int v20; // r8d
  int v21; // edx
  ULONG_PTR v22; // rdi
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR v25; // [rsp+28h] [rbp-40h]
  __int64 v26; // [rsp+30h] [rbp-38h]
  struct tagPOINT v27; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v28; // [rsp+78h] [rbp+10h] BYREF

  v28 = a2;
  v24 = 0LL;
  v5 = BugCheckParameter2;
  v25 = 0LL;
  v26 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 18;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))IsThreadCrossSessionAttached)(
                        BugCheckParameter2,
                        a2,
                        a3,
                        a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v12 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v12 + 360) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v12 + 340) )
        {
          v7 = *(_DWORD *)(v12 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v8);
          if ( CurrentProcessWin32Process )
            v7 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
        if ( (*(_DWORD *)(v12 + 328) & 8) != 0 && (v7 & 0xF) == 2 && (v7 & 0xF0) == 0x20 )
          v7 |= 0x20000000u;
      }
    }
  }
  v14 = 0LL;
  v15 = gptiCurrent;
  v24 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v24;
  v25 = 0LL;
  if ( v5 )
  {
    v16 = *(_DWORD *)(a3 + 32);
    do
    {
      x = v28.x;
      v27 = v28;
      v18 = v28.x;
      if ( (v16 & 4) != 0 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 288LL);
        if ( (((unsigned __int16)(v7 >> 8) ^ (unsigned __int16)(v19 >> 8)) & 0x1FF) != 0
          || ((v19 & 0xF) != 2 || (v19 & 0x20000000) == 0 ? (v20 = 0) : (v20 = 1),
              (v7 & 0xF) != 2 || (v7 & 0x20000000) == 0 ? (v21 = 0) : (v21 = 1),
              v20 != v21) )
        {
          LogicalToPhysicalDPIPoint(&v27, &v28, v7, 0LL);
          *(_DWORD *)(a3 + 32) &= ~4u;
          x = v28.x;
          v18 = v27.x;
        }
      }
      if ( !*(_QWORD *)(a3 + 56) || v18 != x || v27.y != v28.y )
        *(_QWORD *)(a3 + 56) = &v27;
      v22 = v25;
      v25 = v5;
      HMLockObject(v5);
      if ( v22 )
        HMUnlockObject(v22);
      v14 = xxxDCEWindowHitTest2Internal(v5, v27, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)a3);
      if ( v14 )
        break;
      *(_DWORD *)(a3 + 32) = v16;
      v5 = *(_QWORD *)(v5 + 88);
    }
    while ( v5 );
  }
  ThreadUnlock1(v15, v8, v9);
  return v14;
}
