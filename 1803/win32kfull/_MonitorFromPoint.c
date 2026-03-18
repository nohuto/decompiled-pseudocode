/*
 * XREFs of _MonitorFromPoint @ 0x1C00723A0
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     ?MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z @ 0x1C01A7CA8 (-MoveCursor@Feedback@@YAXAEBUtagPOINT@@@Z.c)
 *     GetDPITransformationMonitor @ 0x1C01AF3F0 (GetDPITransformationMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01C04C4 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 *     NtUserCalculatePopupWindowPosition @ 0x1C01EBDB0 (NtUserCalculatePopupWindowPosition.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01EE7E0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C01FF05C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromPoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  unsigned int v6; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 DispInfo; // r14
  unsigned __int16 v14; // r15
  __int64 i; // rdi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v17; // ebp
  unsigned int v18; // ecx
  int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned __int64 v22; // rbp
  int v23; // eax
  int v24; // edx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int128 v27; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v28[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-48h] BYREF
  int v31; // [rsp+A4h] [rbp+Ch]

  v31 = HIDWORD(a1);
  v4 = a3;
  v5 = 0LL;
  v6 = a2;
  DispInfo = GetDispInfo(a1, a2, a3, a4);
  if ( **(_DWORD **)DispInfo == 1 && v6 )
    return *(_QWORD *)(GetDispInfo(v9, v8, v10, v11) + 96);
  if ( v4 )
  {
    v14 = (v4 >> 8) & 0x1FF;
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v9, v8);
    v9 = 511LL;
    v14 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    if ( v14 )
    {
      if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8) + 448)
        || (v9 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8) + 448) + 8LL),
            (*(_DWORD *)(v9 + 52) & 1) == 0) )
      {
        v14 = 0;
      }
    }
  }
  if ( v6 <= 1 )
  {
    for ( i = *(_QWORD *)(DispInfo + 104); i; i = *(_QWORD *)(i + 56) )
    {
      v9 = *(unsigned int *)(*(_QWORD *)(i + 40) + 24LL);
      if ( (v9 & 1) != 0 )
      {
        v27 = *(_OWORD *)GetMonitorRectForDpi(v30, i, v14);
        if ( (unsigned int)PtInRect(&v27, a1) )
          return i;
      }
    }
    if ( v6 )
      return *(_QWORD *)(GetDispInfo(v9, v8, v10, v11) + 96);
    return 0LL;
  }
  if ( v6 != 2 )
    return 0LL;
  if ( (unsigned int)(a1 + 0x8000) > 0xFFFF || (unsigned int)(v31 + 0x8000) > 0xFFFF )
  {
    i = *(_QWORD *)(DispInfo + 104);
    v22 = -1LL;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v27 = *(_OWORD *)GetMonitorRectForDpi(v29, i, v14);
        if ( (int)a1 >= (int)v27 )
          v23 = (int)a1 >= SDWORD2(v27) ? a1 - DWORD2(v27) + 1 : 0;
        else
          v23 = v27 - a1;
        if ( v23 < v22 )
        {
          if ( v31 >= SDWORD1(v27) )
          {
            if ( v31 >= SHIDWORD(v27) )
            {
              v24 = v31 - HIDWORD(v27) + 1;
            }
            else
            {
              if ( !v23 )
                return i;
              v24 = 0;
            }
          }
          else
          {
            v24 = DWORD1(v27) - v31;
          }
          v25 = v23 * (__int64)v23;
          if ( v25 < v22 && v24 + v25 < v22 )
          {
            v26 = v24 * (__int64)v24 + v25;
            if ( v26 < v22 )
            {
              v22 = v26;
              v5 = i;
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
    v17 = -1;
    while ( i )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v27 = *(_OWORD *)GetMonitorRectForDpi(v28, i, v14);
        if ( (int)a1 >= (int)v27 )
          v18 = (int)a1 >= SDWORD2(v27) ? a1 - DWORD2(v27) + 1 : 0;
        else
          v18 = v27 - a1;
        if ( v18 < v17 )
        {
          if ( v31 >= SDWORD1(v27) )
          {
            if ( v31 >= SHIDWORD(v27) )
            {
              v19 = v31 - HIDWORD(v27) + 1;
            }
            else
            {
              if ( !v18 )
                return i;
              v19 = 0;
            }
          }
          else
          {
            v19 = DWORD1(v27) - v31;
          }
          v20 = v18 * v18;
          if ( v20 < v17 && v20 + v19 < v17 )
          {
            v21 = v19 * v19 + v20;
            if ( v21 < v17 )
            {
              v17 = v21;
              v5 = i;
            }
          }
        }
      }
      i = *(_QWORD *)(i + 56);
    }
  }
  return v5;
}
