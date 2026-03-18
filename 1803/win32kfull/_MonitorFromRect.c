/*
 * XREFs of _MonitorFromRect @ 0x1C0072BA0
 * Callers:
 *     GetNewMonitor @ 0x1C002D640 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     xxxSetWindowPlacement @ 0x1C0065970 (xxxSetWindowPlacement.c)
 *     _GetWindowPlacement @ 0x1C00666E0 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C0066AF0 (CkptUpdate.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     CitGetWindowInfo @ 0x1C00FCBE0 (CitGetWindowInfo.c)
 *     CreateSpb @ 0x1C0136078 (CreateSpb.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C019E220 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01AEDC4 (DetectNewMonitor.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01B0B28 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01BF838 (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C2948 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C01E4AE0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C0073584 (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(struct tagRECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // edi
  __int64 v6; // r13
  unsigned int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 DispInfo; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int16 v18; // r15
  __int128 *ScreenRectForDpi; // rax
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned int v25; // esi
  __int64 v26; // rdi
  unsigned int v27; // esi
  __int128 v28; // xmm0
  LONG right; // eax
  int v30; // ecx
  unsigned int v31; // ecx
  LONG bottom; // eax
  int v33; // edx
  LONG top; // eax
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  __int128 *MonitorRectForDpi; // rax
  LONG v40; // ecx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  LONG v44; // eax
  int v45; // edx
  LONG v46; // eax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  __int128 v49; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v50[16]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v51[16]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v52[16]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v53[16]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v54; // [rsp+70h] [rbp+7h] BYREF
  __int64 v55; // [rsp+78h] [rbp+Fh]

  v4 = 0;
  v5 = a3;
  v6 = 0LL;
  v7 = a2;
  DispInfo = GetDispInfo(a1, a2, a3, a4);
  if ( **(_DWORD **)DispInfo == 1 && v7 )
    return *(_QWORD *)(GetDispInfo(v10, v9, v11, v12) + 96);
  if ( (unsigned int)IsRectEmptyInl(a1) )
    return MonitorFromPoint(*(_QWORD *)&a1->left, v7, v5, v17);
  if ( v5 )
  {
    v18 = (v5 >> 8) & 0x1FF;
  }
  else
  {
    v18 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v16, v15) >> 8) & 0x1FF;
    if ( v18
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 448)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 448) + 8LL)
                     + 52LL) & 1) == 0) )
    {
      v18 = 0;
    }
  }
  ScreenRectForDpi = (__int128 *)GetScreenRectForDpi(v50, v18);
  v20 = *ScreenRectForDpi;
  v21 = *(_QWORD *)ScreenRectForDpi;
  v49 = v20;
  if ( a1->left <= (int)v21 && a1->top <= SHIDWORD(v21) && a1->right >= SDWORD2(v49) && a1->bottom >= SHIDWORD(v49) )
    return *(_QWORD *)(GetDispInfo(v10, v9, v11, v12) + 96);
  v22 = *(_QWORD *)(DispInfo + 104);
  if ( v22 )
  {
    do
    {
      v10 = *(unsigned int *)(*(_QWORD *)(v22 + 40) + 24LL);
      if ( (v10 & 1) != 0 )
      {
        v49 = *(_OWORD *)GetMonitorRectForDpi(v51, v22, v18);
        if ( (unsigned int)IntersectRect(&v54, &a1->left, (int *)&v49) )
        {
          v10 = v54 - *(_QWORD *)&a1->left;
          if ( v54 == *(_QWORD *)&a1->left )
            v10 = v55 - *(_QWORD *)&a1->right;
          if ( !v10 )
            return v22;
          v9 = (unsigned int)(v55 - v54);
          if ( (int)v9 * (HIDWORD(v55) - HIDWORD(v54)) > v4 )
          {
            v4 = v9 * (HIDWORD(v55) - HIDWORD(v54));
            v6 = v22;
          }
        }
      }
      v22 = *(_QWORD *)(v22 + 56);
    }
    while ( v22 );
    if ( v4 > 0 )
      return v6;
  }
  if ( v7 )
  {
    v25 = v7 - 1;
    if ( !v25 )
      return *(_QWORD *)(GetDispInfo(v10, v9, v11, v12) + 96);
    if ( v25 == 1 )
    {
      if ( (unsigned int)(a1->left + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->top + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->right + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->bottom + 0x8000) <= 0xFFFF )
      {
        v26 = *(_QWORD *)(DispInfo + 104);
        v27 = -1;
        while ( 1 )
        {
          if ( !v26 )
            return v6;
          if ( (*(_DWORD *)(*(_QWORD *)(v26 + 40) + 24LL) & 1) != 0 )
            break;
LABEL_55:
          v26 = *(_QWORD *)(v26 + 56);
        }
        v28 = *(_OWORD *)GetMonitorRectForDpi(v52, v26, v18);
        right = a1->right;
        v49 = v28;
        if ( right > (int)v28 )
        {
          if ( a1->left < SDWORD2(v28) )
          {
            v31 = 0;
            goto LABEL_45;
          }
          v30 = a1->left - DWORD2(v28);
        }
        else
        {
          v30 = v28 - right;
        }
        v31 = v30 + 1;
LABEL_45:
        if ( v31 < v27 )
        {
          bottom = a1->bottom;
          if ( bottom > SDWORD1(v28) )
          {
            top = a1->top;
            if ( top >= SHIDWORD(v28) )
              v33 = top - HIDWORD(v28) + 1;
            else
              v33 = 0;
          }
          else
          {
            v33 = DWORD1(v28) - bottom + 1;
          }
          v35 = v31 * v31;
          if ( v35 < v27 && v35 + v33 < v27 )
          {
            v36 = v33 * v33 + v35;
            if ( v36 < v27 )
            {
              v27 = v36;
              v6 = v26;
            }
          }
        }
        goto LABEL_55;
      }
      v37 = *(_QWORD *)(DispInfo + 104);
      v38 = -1LL;
      while ( 1 )
      {
        if ( !v37 )
          return v6;
        if ( (*(_DWORD *)(*(_QWORD *)(v37 + 40) + 24LL) & 1) != 0 )
          break;
LABEL_76:
        v37 = *(_QWORD *)(v37 + 56);
      }
      MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(v53, v37, v18);
      v40 = a1->right;
      v49 = *MonitorRectForDpi;
      if ( v40 > (int)v49 )
      {
        if ( a1->left < SDWORD2(v49) )
        {
          v42 = 0;
LABEL_66:
          v43 = v42;
          if ( v42 < v38 )
          {
            v44 = a1->bottom;
            if ( v44 > SDWORD1(v49) )
            {
              v46 = a1->top;
              v45 = v46 >= SHIDWORD(v49) ? v46 - HIDWORD(v49) + 1 : 0;
            }
            else
            {
              v45 = DWORD1(v49) - v44 + 1;
            }
            v47 = v43 * v43;
            if ( v47 < v38 && v45 + v47 < v38 )
            {
              v48 = v45 * (__int64)v45 + v47;
              if ( v48 < v38 )
              {
                v38 = v48;
                v6 = v37;
              }
            }
          }
          goto LABEL_76;
        }
        v41 = a1->left - DWORD2(v49);
      }
      else
      {
        v41 = v49 - v40;
      }
      v42 = v41 + 1;
      goto LABEL_66;
    }
  }
  return 0LL;
}
