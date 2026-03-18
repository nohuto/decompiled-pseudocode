/*
 * XREFs of xxxDCEWindowHitTest @ 0x1C00D62E0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowFromPoint @ 0x1C00D6160 (xxxWindowFromPoint.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01CA6C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01CB56C (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0139FCC (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 */

HWND __fastcall xxxDCEWindowHitTest(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  HWND v7; // rsi
  struct tagWND *v8; // rbx
  __int64 v9; // r8
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  LONG v15; // ecx
  struct tagWND *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  struct tagWND *v19; // [rsp+28h] [rbp-58h]
  int v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h]
  __int64 v23; // [rsp+58h] [rbp-28h]
  int v24; // [rsp+60h] [rbp-20h]
  int v25; // [rsp+64h] [rbp-1Ch]
  __int64 v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+70h] [rbp-10h]
  __int64 *v28; // [rsp+78h] [rbp-8h]

  v7 = 0LL;
  v23 = a6;
  v8 = a1;
  v24 = a7;
  v20 = a2;
  v21 = a3;
  v22 = a4;
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  v28 = 0LL;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2);
  v11 = gptiCurrent;
  v12 = *(_QWORD *)(gptiCurrent + 408LL);
  v18 = v12;
  *(_QWORD *)(gptiCurrent + 408LL) = &v18;
  v19 = 0LL;
  if ( v8 )
  {
    v13 = v24;
    do
    {
      v14 = a5;
      a6 = a5;
      v15 = a5;
      if ( (v13 & 4) != 0 )
      {
        v11 = CurrentThreadDpiAwarenessContext >> 8;
        v9 = *(_DWORD *)(*((_QWORD *)v8 + 5) + 288LL) >> 8;
        LOWORD(v9) = v11 ^ v9;
        if ( (v9 & 0x1FF) != 0 )
        {
          LogicalToPhysicalDPIPoint(&a6, &a5, CurrentThreadDpiAwarenessContext, 0LL);
          v24 &= ~4u;
          v14 = a5;
          v15 = a6;
        }
      }
      if ( !v28 || v15 != v14 || HIDWORD(a6) != HIDWORD(a5) )
        v28 = &a6;
      v16 = v19;
      v19 = v8;
      _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
      if ( v16 && _InterlockedExchangeAdd((volatile signed __int32 *)v16 + 2, 0xFFFFFFFF) == 1 )
        HMUnlockObjectInternal(v16, v11, v9);
      v7 = xxxDCEWindowHitTest2Internal(v8, (struct tagPOINT)a6, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)&v20);
      if ( v7 )
        break;
      v24 = v13;
      v8 = (struct tagWND *)*((_QWORD *)v8 + 8);
    }
    while ( v8 );
  }
  ThreadUnlock1(v12, v11, v9);
  return v7;
}
