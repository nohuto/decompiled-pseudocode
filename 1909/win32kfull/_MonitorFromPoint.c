/*
 * XREFs of _MonitorFromPoint @ 0x1C00149A0
 * Callers:
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C008A19C (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01E6CD0 (GetDPITransformationMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01F9C98 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C0229800 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022C520 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023F6F0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     GetMonitorRectForDpiContext @ 0x1C00368A0 (GetMonitorRectForDpiContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, unsigned int a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v6; // r15
  __int64 DispInfo; // rdi
  __int64 i; // rdi
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rbp
  int v16; // eax
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v21[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v23[16]; // [rsp+50h] [rbp-38h] BYREF
  int v24; // [rsp+94h] [rbp+Ch]

  v24 = HIDWORD(a1);
  v6 = 0LL;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 96);
  if ( !CurrentThreadDpiAwarenessContext )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) == 0) )
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
        v20 = *(_OWORD *)GetMonitorRectForDpiContext(v23, i, CurrentThreadDpiAwarenessContext);
        if ( (unsigned int)PtInRect(&v20, a1) )
          return i;
      }
    }
    if ( a2 )
      return *(_QWORD *)(GetDispInfo() + 96);
    return 0LL;
  }
  if ( a2 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v24 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 104);
    v15 = -1LL;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v20 = *(_OWORD *)GetMonitorRectForDpiContext(v22, i, CurrentThreadDpiAwarenessContext);
        if ( (int)a1 >= (int)v20 )
          v16 = (int)a1 >= SDWORD2(v20) ? a1 - DWORD2(v20) + 1 : 0;
        else
          v16 = v20 - a1;
        if ( v16 < v15 )
        {
          if ( v24 >= SDWORD1(v20) )
          {
            if ( v24 >= SHIDWORD(v20) )
            {
              v17 = v24 - HIDWORD(v20) + 1;
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
            v17 = DWORD1(v20) - v24;
          }
          v18 = v16 * (__int64)v16;
          if ( v18 < v15 && v17 + v18 < v15 )
          {
            v19 = v17 * (__int64)v17 + v18;
            if ( v19 < v15 )
            {
              v15 = v19;
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
    v10 = -1;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v20 = *(_OWORD *)GetMonitorRectForDpiContext(v21, i, CurrentThreadDpiAwarenessContext);
        if ( (int)a1 >= (int)v20 )
          v11 = (int)a1 >= SDWORD2(v20) ? a1 - DWORD2(v20) + 1 : 0;
        else
          v11 = v20 - a1;
        if ( v11 < v10 )
        {
          if ( v24 >= SDWORD1(v20) )
          {
            if ( v24 >= SHIDWORD(v20) )
            {
              v12 = v24 - HIDWORD(v20) + 1;
            }
            else
            {
              if ( !v11 )
                return i;
              v12 = 0;
            }
          }
          else
          {
            v12 = DWORD1(v20) - v24;
          }
          v13 = v11 * v11;
          if ( v13 < v10 && v13 + v12 < v10 )
          {
            v14 = v12 * v12 + v13;
            if ( v14 < v10 )
            {
              v10 = v14;
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
