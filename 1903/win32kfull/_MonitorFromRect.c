/*
 * XREFs of _MonitorFromRect @ 0x1C0091E40
 * Callers:
 *     _GetWindowPlacement @ 0x1C0090900 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C0090D58 (CkptUpdate.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0091D38 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxCheckFullScreen @ 0x1C0096CF8 (xxxCheckFullScreen.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C00CA150 (GetNewMonitor.c)
 *     xxxSetWindowPlacement @ 0x1C0122AB8 (xxxSetWindowPlacement.c)
 *     CitGetWindowInfo @ 0x1C0123110 (CitGetWindowInfo.c)
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D3468 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01E6900 (DetectNewMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F8664 (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FCC84 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0222504 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _MonitorFromPoint @ 0x1C0091B40 (_MonitorFromPoint.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetScreenRectForDpiContext @ 0x1C0093BA8 (GetScreenRectForDpiContext.c)
 *     GetMonitorRectForDpiContext @ 0x1C0095B68 (GetMonitorRectForDpiContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // esi
  __int64 v22; // rdi
  unsigned int v23; // esi
  __int128 v24; // xmm0
  LONG right; // eax
  int v26; // ecx
  unsigned int v27; // ecx
  LONG bottom; // eax
  int v29; // edx
  LONG top; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  __int64 v33; // rdi
  unsigned __int64 v34; // rsi
  __int128 *MonitorRectForDpiContext; // rax
  LONG v36; // ecx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  LONG v40; // eax
  int v41; // edx
  LONG v42; // eax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  __int128 v45; // [rsp+20h] [rbp-59h] BYREF
  __int128 v46; // [rsp+30h] [rbp-49h]
  _BYTE v47[16]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v48[16]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v49[16]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v50[16]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v51; // [rsp+80h] [rbp+7h] BYREF
  __int64 v52; // [rsp+88h] [rbp+Fh]

  v51 = 0LL;
  v52 = 0LL;
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
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17) + 448)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20)
                                               + 448)
                                   + 8LL)
                     + 64LL) & 1) == 0) )
    {
      CurrentThreadDpiAwarenessContext = 18;
    }
  }
  ScreenRectForDpiContext = (__int128 *)GetScreenRectForDpiContext(v47, CurrentThreadDpiAwarenessContext);
  v10 = *ScreenRectForDpiContext;
  v11 = *(_QWORD *)ScreenRectForDpiContext;
  v46 = v10;
  if ( a1->left <= (int)v11 && a1->top <= SHIDWORD(v11) && a1->right >= SDWORD2(v46) && a1->bottom >= SHIDWORD(v46) )
    return *(_QWORD *)(GetDispInfo() + 96);
  v12 = *(_QWORD *)(DispInfo + 104);
  v13 = 0;
  if ( v12 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 24LL) & 1) != 0 )
      {
        v45 = *(_OWORD *)GetMonitorRectForDpiContext(v48, v12, CurrentThreadDpiAwarenessContext);
        if ( (unsigned int)IntersectRect(&v51, a1, &v45) )
        {
          v14 = v51 - *(_QWORD *)&a1->left;
          if ( v51 == *(_QWORD *)&a1->left )
            v14 = v52 - *(_QWORD *)&a1->right;
          if ( !v14 )
            return v12;
          if ( ((int)v52 - (int)v51) * (HIDWORD(v52) - HIDWORD(v51)) > v13 )
          {
            v13 = (v52 - v51) * (HIDWORD(v52) - HIDWORD(v51));
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
    v21 = a2 - 1;
    if ( !v21 )
      return *(_QWORD *)(GetDispInfo() + 96);
    if ( v21 == 1 )
    {
      if ( (unsigned int)(a1->left + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->top + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->right + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->bottom + 0x8000) <= 0xFFFF )
      {
        v22 = *(_QWORD *)(DispInfo + 104);
        v23 = -1;
        while ( 1 )
        {
          if ( !v22 )
            return v6;
          if ( (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 24LL) & 1) != 0 )
            break;
LABEL_54:
          v22 = *(_QWORD *)(v22 + 56);
        }
        v24 = *(_OWORD *)GetMonitorRectForDpiContext(v49, v22, CurrentThreadDpiAwarenessContext);
        right = a1->right;
        v45 = v24;
        if ( right > (int)v24 )
        {
          if ( a1->left < SDWORD2(v24) )
          {
            v27 = 0;
            goto LABEL_44;
          }
          v26 = a1->left - DWORD2(v24);
        }
        else
        {
          v26 = v24 - right;
        }
        v27 = v26 + 1;
LABEL_44:
        if ( v27 < v23 )
        {
          bottom = a1->bottom;
          if ( bottom > SDWORD1(v24) )
          {
            top = a1->top;
            if ( top >= SHIDWORD(v24) )
              v29 = top - HIDWORD(v24) + 1;
            else
              v29 = 0;
          }
          else
          {
            v29 = DWORD1(v24) - bottom + 1;
          }
          v31 = v27 * v27;
          if ( v31 < v23 && v31 + v29 < v23 )
          {
            v32 = v29 * v29 + v31;
            if ( v32 < v23 )
            {
              v23 = v32;
              v6 = v22;
            }
          }
        }
        goto LABEL_54;
      }
      v33 = *(_QWORD *)(DispInfo + 104);
      v34 = -1LL;
      while ( 1 )
      {
        if ( !v33 )
          return v6;
        if ( (*(_DWORD *)(*(_QWORD *)(v33 + 40) + 24LL) & 1) != 0 )
          break;
LABEL_75:
        v33 = *(_QWORD *)(v33 + 56);
      }
      MonitorRectForDpiContext = (__int128 *)GetMonitorRectForDpiContext(v50, v33, CurrentThreadDpiAwarenessContext);
      v36 = a1->right;
      v45 = *MonitorRectForDpiContext;
      if ( v36 > (int)v45 )
      {
        if ( a1->left < SDWORD2(v45) )
        {
          v38 = 0;
LABEL_65:
          v39 = v38;
          if ( v38 < v34 )
          {
            v40 = a1->bottom;
            if ( v40 > SDWORD1(v45) )
            {
              v42 = a1->top;
              v41 = v42 >= SHIDWORD(v45) ? v42 - HIDWORD(v45) + 1 : 0;
            }
            else
            {
              v41 = DWORD1(v45) - v40 + 1;
            }
            v43 = v39 * v39;
            if ( v43 < v34 && v41 + v43 < v34 )
            {
              v44 = v41 * (__int64)v41 + v43;
              if ( v44 < v34 )
              {
                v34 = v44;
                v6 = v33;
              }
            }
          }
          goto LABEL_75;
        }
        v37 = a1->left - DWORD2(v45);
      }
      else
      {
        v37 = v45 - v36;
      }
      v38 = v37 + 1;
      goto LABEL_65;
    }
  }
  return 0LL;
}
