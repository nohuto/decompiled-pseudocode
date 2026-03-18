/*
 * XREFs of _MonitorFromRect @ 0x1C00147D0
 * Callers:
 *     xxxSetWindowPlacement @ 0x1C0012ED8 (xxxSetWindowPlacement.c)
 *     CitGetWindowInfo @ 0x1C0013BB0 (CitGetWindowInfo.c)
 *     _GetWindowPlacement @ 0x1C00140C0 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C0014518 (CkptUpdate.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     CreateSpb @ 0x1C015E86C (CreateSpb.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D32D8 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01E6780 (DetectNewMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E85C8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F83B4 (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC9D4 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _MonitorFromPoint @ 0x1C00149A0 (_MonitorFromPoint.c)
 *     GetScreenRectForDpiContext @ 0x1C00348D0 (GetScreenRectForDpiContext.c)
 *     GetMonitorRectForDpiContext @ 0x1C00368A0 (GetMonitorRectForDpiContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(struct tagRECT *a1, unsigned int a2, unsigned int CurrentThreadDpiAwarenessContext)
{
  __int64 v6; // r13
  __int64 DispInfo; // r12
  __int128 *ScreenRectForDpiContext; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // r14d
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rdi
  unsigned int v17; // esi
  __int128 v18; // xmm0
  LONG right; // eax
  int v20; // ecx
  unsigned int v21; // ecx
  LONG bottom; // eax
  int v23; // edx
  LONG top; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  __int64 v27; // rdi
  unsigned __int64 v28; // rsi
  __int128 *MonitorRectForDpiContext; // rax
  LONG v30; // ecx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  LONG v34; // eax
  int v35; // edx
  LONG v36; // eax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  __int128 v39; // [rsp+20h] [rbp-59h] BYREF
  __int128 v40; // [rsp+30h] [rbp-49h]
  _BYTE v41[16]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v42[16]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v43[16]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v44[16]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v45; // [rsp+80h] [rbp+7h] BYREF
  __int64 v46; // [rsp+88h] [rbp+Fh]

  v45 = 0LL;
  v46 = 0LL;
  v6 = 0LL;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 96);
  if ( (unsigned int)IsRectEmptyInl(a1) )
    return MonitorFromPoint(*(_QWORD *)&a1->left, a2, CurrentThreadDpiAwarenessContext);
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
  ScreenRectForDpiContext = (__int128 *)GetScreenRectForDpiContext(v41, CurrentThreadDpiAwarenessContext);
  v10 = *ScreenRectForDpiContext;
  v11 = *(_QWORD *)ScreenRectForDpiContext;
  v40 = v10;
  if ( a1->left <= (int)v11 && a1->top <= SHIDWORD(v11) && a1->right >= SDWORD2(v40) && a1->bottom >= SHIDWORD(v40) )
    return *(_QWORD *)(GetDispInfo() + 96);
  v12 = *(_QWORD *)(DispInfo + 104);
  v13 = 0;
  if ( v12 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 24LL) & 1) != 0 )
      {
        v39 = *(_OWORD *)GetMonitorRectForDpiContext(v42, v12, CurrentThreadDpiAwarenessContext);
        if ( (unsigned int)IntersectRect(&v45, a1, &v39) )
        {
          v14 = v45 - *(_QWORD *)&a1->left;
          if ( v45 == *(_QWORD *)&a1->left )
            v14 = v46 - *(_QWORD *)&a1->right;
          if ( !v14 )
            return v12;
          if ( ((int)v46 - (int)v45) * (HIDWORD(v46) - HIDWORD(v45)) > v13 )
          {
            v13 = (v46 - v45) * (HIDWORD(v46) - HIDWORD(v45));
            v6 = v12;
          }
        }
      }
      v12 = *(_QWORD *)(v12 + 56);
    }
    while ( v12 );
    if ( v13 > 0 )
      return v6;
  }
  if ( a2 )
  {
    v15 = a2 - 1;
    if ( !v15 )
      return *(_QWORD *)(GetDispInfo() + 96);
    if ( v15 == 1 )
    {
      if ( (unsigned int)(a1->left + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->top + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->right + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->bottom + 0x8000) <= 0xFFFF )
      {
        v16 = *(_QWORD *)(DispInfo + 104);
        v17 = -1;
        while ( 1 )
        {
          if ( !v16 )
            return v6;
          if ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 24LL) & 1) != 0 )
            break;
LABEL_54:
          v16 = *(_QWORD *)(v16 + 56);
        }
        v18 = *(_OWORD *)GetMonitorRectForDpiContext(v43, v16, CurrentThreadDpiAwarenessContext);
        right = a1->right;
        v39 = v18;
        if ( right > (int)v18 )
        {
          if ( a1->left < SDWORD2(v18) )
          {
            v21 = 0;
            goto LABEL_44;
          }
          v20 = a1->left - DWORD2(v18);
        }
        else
        {
          v20 = v18 - right;
        }
        v21 = v20 + 1;
LABEL_44:
        if ( v21 < v17 )
        {
          bottom = a1->bottom;
          if ( bottom > SDWORD1(v18) )
          {
            top = a1->top;
            if ( top >= SHIDWORD(v18) )
              v23 = top - HIDWORD(v18) + 1;
            else
              v23 = 0;
          }
          else
          {
            v23 = DWORD1(v18) - bottom + 1;
          }
          v25 = v21 * v21;
          if ( v25 < v17 && v25 + v23 < v17 )
          {
            v26 = v23 * v23 + v25;
            if ( v26 < v17 )
            {
              v17 = v26;
              v6 = v16;
            }
          }
        }
        goto LABEL_54;
      }
      v27 = *(_QWORD *)(DispInfo + 104);
      v28 = -1LL;
      while ( 1 )
      {
        if ( !v27 )
          return v6;
        if ( (*(_DWORD *)(*(_QWORD *)(v27 + 40) + 24LL) & 1) != 0 )
          break;
LABEL_75:
        v27 = *(_QWORD *)(v27 + 56);
      }
      MonitorRectForDpiContext = (__int128 *)GetMonitorRectForDpiContext(v44, v27, CurrentThreadDpiAwarenessContext);
      v30 = a1->right;
      v39 = *MonitorRectForDpiContext;
      if ( v30 > (int)v39 )
      {
        if ( a1->left < SDWORD2(v39) )
        {
          v32 = 0;
LABEL_65:
          v33 = v32;
          if ( v32 < v28 )
          {
            v34 = a1->bottom;
            if ( v34 > SDWORD1(v39) )
            {
              v36 = a1->top;
              v35 = v36 >= SHIDWORD(v39) ? v36 - HIDWORD(v39) + 1 : 0;
            }
            else
            {
              v35 = DWORD1(v39) - v34 + 1;
            }
            v37 = v33 * v33;
            if ( v37 < v28 && v35 + v37 < v28 )
            {
              v38 = v35 * (__int64)v35 + v37;
              if ( v38 < v28 )
              {
                v28 = v38;
                v6 = v27;
              }
            }
          }
          goto LABEL_75;
        }
        v31 = a1->left - DWORD2(v39);
      }
      else
      {
        v31 = v39 - v30;
      }
      v32 = v31 + 1;
      goto LABEL_65;
    }
  }
  return 0LL;
}
