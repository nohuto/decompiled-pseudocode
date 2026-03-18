/*
 * XREFs of _MonitorFromPoint @ 0x1C0091B40
 * Callers:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00457CC (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     GetDPITransformationMonitor @ 0x1C01E6E50 (GetDPITransformationMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01F9F48 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C0201288 (xxxInitializeMoveSizeData.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C0229E20 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022CB40 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023FD10 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetMonitorRectForDpiContext @ 0x1C0095B68 (GetMonitorRectForDpiContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v6; // r15
  __int64 DispInfo; // rdi
  __int64 i; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rbp
  int v22; // eax
  int v23; // edx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int128 v26; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v27[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v28[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v29[16]; // [rsp+50h] [rbp-38h] BYREF
  int v30; // [rsp+94h] [rbp+Ch]

  v30 = HIDWORD(a1);
  v6 = 0LL;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 96);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 448)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15)
                                               + 448)
                                   + 8LL)
                     + 64LL) & 1) == 0) )
    {
      CurrentThreadDpiAwarenessContext = 18;
    }
  }
  if ( a2 <= 1 )
  {
    for ( i = *(_QWORD *)(DispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v26 = *(_OWORD *)GetMonitorRectForDpiContext(v29, i, CurrentThreadDpiAwarenessContext);
        if ( PtInRect(&v26, a1) )
          return i;
      }
    }
    if ( a2 )
      return *(_QWORD *)(GetDispInfo() + 96);
    return 0LL;
  }
  if ( a2 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v30 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 104);
    v21 = -1LL;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v26 = *(_OWORD *)GetMonitorRectForDpiContext(v28, i, CurrentThreadDpiAwarenessContext);
        if ( (int)a1 >= (int)v26 )
          v22 = (int)a1 >= SDWORD2(v26) ? a1 - DWORD2(v26) + 1 : 0;
        else
          v22 = v26 - a1;
        if ( v22 < v21 )
        {
          if ( v30 >= SDWORD1(v26) )
          {
            if ( v30 >= SHIDWORD(v26) )
            {
              v23 = v30 - HIDWORD(v26) + 1;
            }
            else
            {
              if ( !v22 )
                return i;
              v23 = 0;
            }
          }
          else
          {
            v23 = DWORD1(v26) - v30;
          }
          v24 = v22 * (__int64)v22;
          if ( v24 < v21 && v23 + v24 < v21 )
          {
            v25 = v23 * (__int64)v23 + v24;
            if ( v25 < v21 )
            {
              v21 = v25;
              v6 = i;
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
    v16 = -1;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v26 = *(_OWORD *)GetMonitorRectForDpiContext(v27, i, CurrentThreadDpiAwarenessContext);
        if ( (int)a1 >= (int)v26 )
          v17 = (int)a1 >= SDWORD2(v26) ? a1 - DWORD2(v26) + 1 : 0;
        else
          v17 = v26 - a1;
        if ( v17 < v16 )
        {
          if ( v30 >= SDWORD1(v26) )
          {
            if ( v30 >= SHIDWORD(v26) )
            {
              v18 = v30 - HIDWORD(v26) + 1;
            }
            else
            {
              if ( !v17 )
                return i;
              v18 = 0;
            }
          }
          else
          {
            v18 = DWORD1(v26) - v30;
          }
          v19 = v17 * v17;
          if ( v19 < v16 && v19 + v18 < v16 )
          {
            v20 = v18 * v18 + v19;
            if ( v20 < v16 )
            {
              v16 = v20;
              v6 = i;
            }
          }
        }
      }
      i = *(_QWORD *)(i + 56);
    }
  }
  return v6;
}
