/*
 * XREFs of _MonitorFromPoint @ 0x1C007AE20
 * Callers:
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01513D0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01D2240 (GetDPITransformationMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01E46AC (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C0211DE0 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0214D70 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C001CCF4 (GetMonitorRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DispInfo; // r14
  unsigned __int16 v11; // r15
  __int64 i; // rdi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 ThreadWin32Thread; // rax
  unsigned int v15; // ebp
  unsigned int v16; // ecx
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rbp
  int v21; // eax
  int v22; // edx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __m128i v25; // [rsp+20h] [rbp-78h] BYREF
  __m128i v26; // [rsp+30h] [rbp-68h] BYREF
  __m128i v27; // [rsp+40h] [rbp-58h] BYREF
  __m128i v28; // [rsp+50h] [rbp-48h] BYREF
  int v29; // [rsp+A4h] [rbp+Ch]

  v29 = HIDWORD(a1);
  v4 = 0LL;
  v5 = a2;
  DispInfo = GetDispInfo(a1, a2);
  if ( **(_DWORD **)DispInfo == 1 && v5 )
    return *(_QWORD *)(GetDispInfo(v8, v7) + 96);
  if ( a3 )
  {
    v11 = (a3 >> 8) & 0x1FF;
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v7);
    v8 = 511LL;
    v11 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    if ( v11 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
      if ( !*(_QWORD *)(ThreadWin32Thread + 456)
        || (v8 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7) + 456) + 8LL),
            (*(_DWORD *)(v8 + 64) & 1) == 0) )
      {
        v11 = 0;
      }
    }
  }
  if ( v5 <= 1 )
  {
    for ( i = *(_QWORD *)(DispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      v8 = *(unsigned int *)(*(_QWORD *)(i + 40) + 24LL);
      if ( (v8 & 1) != 0 )
      {
        v25 = *GetMonitorRectForDpi(&v28, i, v11);
        if ( PtInRect(&v25, a1) )
          return i;
      }
    }
    if ( v5 )
      return *(_QWORD *)(GetDispInfo(v8, v7) + 96);
    return 0LL;
  }
  if ( v5 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v29 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 104);
    v20 = -1LL;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v25 = *GetMonitorRectForDpi(&v27, i, v11);
        if ( (int)a1 >= v25.m128i_i32[0] )
          v21 = (int)a1 >= v25.m128i_i32[2] ? a1 - v25.m128i_i32[2] + 1 : 0;
        else
          v21 = v25.m128i_i32[0] - a1;
        if ( v21 < v20 )
        {
          if ( v29 >= v25.m128i_i32[1] )
          {
            if ( v29 >= v25.m128i_i32[3] )
            {
              v22 = v29 - v25.m128i_i32[3] + 1;
            }
            else
            {
              if ( !v21 )
                return i;
              v22 = 0;
            }
          }
          else
          {
            v22 = v25.m128i_i32[1] - v29;
          }
          v23 = v21 * (__int64)v21;
          if ( v23 < v20 && v22 + v23 < v20 )
          {
            v24 = v22 * (__int64)v22 + v23;
            if ( v24 < v20 )
            {
              v20 = v24;
              v4 = i;
            }
          }
        }
      }
      i = *(_QWORD *)(i + 56);
    }
  }
  else
  {
    i = *(_QWORD *)(DispInfo + 104);
    v15 = -1;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v25 = *GetMonitorRectForDpi(&v26, i, v11);
        if ( (int)a1 >= v25.m128i_i32[0] )
          v16 = (int)a1 >= v25.m128i_i32[2] ? a1 - v25.m128i_i32[2] + 1 : 0;
        else
          v16 = v25.m128i_i32[0] - a1;
        if ( v16 < v15 )
        {
          if ( v29 >= v25.m128i_i32[1] )
          {
            if ( v29 >= v25.m128i_i32[3] )
            {
              v17 = v29 - v25.m128i_i32[3] + 1;
            }
            else
            {
              if ( !v16 )
                return i;
              v17 = 0;
            }
          }
          else
          {
            v17 = v25.m128i_i32[1] - v29;
          }
          v18 = v16 * v16;
          if ( v18 < v15 && v18 + v17 < v15 )
          {
            v19 = v17 * v17 + v18;
            if ( v19 < v15 )
            {
              v15 = v19;
              v4 = i;
            }
          }
        }
      }
      i = *(_QWORD *)(i + 56);
    }
  }
  return v4;
}
