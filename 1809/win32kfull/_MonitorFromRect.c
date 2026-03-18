/*
 * XREFs of _MonitorFromRect @ 0x1C007A8E0
 * Callers:
 *     xxxCheckFullScreen @ 0x1C001CD74 (xxxCheckFullScreen.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C004259C (GetNewMonitor.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     _GetWindowPlacement @ 0x1C00B6B80 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C00B6F94 (CkptUpdate.c)
 *     xxxSetWindowPlacement @ 0x1C00B87BC (xxxSetWindowPlacement.c)
 *     CitGetWindowInfo @ 0x1C011CE10 (CitGetWindowInfo.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C0155FC8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     CreateSpb @ 0x1C0157150 (CreateSpb.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01BF748 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     DetectNewMonitor @ 0x1C01D1CDC (DetectNewMonitor.c)
 *     xxxSetInternalWindowPos @ 0x1C01E2320 (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E7350 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C001CCF4 (GetMonitorRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C007ABA4 (GetScreenRectForDpi.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall MonitorFromRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  int v3; // r14d
  __int64 v5; // r13
  __int64 DispInfo; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 v12; // r15
  __m128i *ScreenRectForDpi; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // rdi
  unsigned int v22; // esi
  __m128i v23; // xmm0
  LONG right; // eax
  int v25; // ecx
  unsigned int v26; // ecx
  LONG bottom; // eax
  int v28; // edx
  LONG top; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // rdi
  unsigned __int64 v33; // rsi
  __m128i *MonitorRectForDpi; // rax
  LONG v35; // ecx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  LONG v39; // eax
  int v40; // edx
  LONG v41; // eax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  __m128i v44; // [rsp+20h] [rbp-49h] BYREF
  char v45[16]; // [rsp+30h] [rbp-39h] BYREF
  __m128i v46; // [rsp+40h] [rbp-29h] BYREF
  __m128i v47; // [rsp+50h] [rbp-19h] BYREF
  __m128i v48; // [rsp+60h] [rbp-9h] BYREF
  __int64 v49; // [rsp+70h] [rbp+7h] BYREF
  __int64 v50; // [rsp+78h] [rbp+Fh]

  v3 = 0;
  v5 = 0LL;
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 && a2 )
    return *(_QWORD *)(GetDispInfo() + 96);
  if ( (unsigned int)IsRectEmptyInl(a1) )
    return MonitorFromPoint(*(_QWORD *)&a1->left, a2, a3);
  if ( a3 )
  {
    v12 = (a3 >> 8) & 0x1FF;
  }
  else
  {
    v12 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v11, v10) >> 8) & 0x1FF;
    if ( v12
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 456)
       || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 456) + 8LL)
                     + 64LL) & 1) == 0) )
    {
      v12 = 0;
    }
  }
  ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(v45, v12);
  v14 = *ScreenRectForDpi;
  v15 = ScreenRectForDpi->m128i_i64[0];
  v44 = v14;
  if ( a1->left <= (int)v15
    && a1->top <= SHIDWORD(v15)
    && a1->right >= v44.m128i_i32[2]
    && a1->bottom >= v44.m128i_i32[3] )
  {
    return *(_QWORD *)(GetDispInfo() + 96);
  }
  v16 = *(_QWORD *)(DispInfo + 104);
  if ( v16 )
  {
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 24LL) & 1) != 0 )
      {
        v44 = *GetMonitorRectForDpi(&v46, v16, v12);
        if ( (unsigned int)IntersectRect(&v49, &a1->left, v44.m128i_i32) )
        {
          v17 = v49 - *(_QWORD *)&a1->left;
          if ( v49 == *(_QWORD *)&a1->left )
            v17 = v50 - *(_QWORD *)&a1->right;
          if ( !v17 )
            return v16;
          if ( ((int)v50 - (int)v49) * (HIDWORD(v50) - HIDWORD(v49)) > v3 )
          {
            v3 = (v50 - v49) * (HIDWORD(v50) - HIDWORD(v49));
            v5 = v16;
          }
        }
      }
      v16 = *(_QWORD *)(v16 + 56);
    }
    while ( v16 );
    if ( v3 > 0 )
      return v5;
  }
  if ( a2 )
  {
    v20 = a2 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
        return 0LL;
      if ( (unsigned int)(a1->left + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->top + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->right + 0x8000) <= 0xFFFF
        && (unsigned int)(a1->bottom + 0x8000) <= 0xFFFF )
      {
        v21 = *(_QWORD *)(DispInfo + 104);
        v22 = -1;
        while ( 1 )
        {
          if ( !v21 )
            return v5;
          if ( (*(_DWORD *)(*(_QWORD *)(v21 + 40) + 24LL) & 1) != 0 )
            break;
LABEL_55:
          v21 = *(_QWORD *)(v21 + 56);
        }
        v23 = *GetMonitorRectForDpi(&v47, v21, v12);
        right = a1->right;
        v44 = v23;
        if ( right > v23.m128i_i32[0] )
        {
          if ( a1->left < v23.m128i_i32[2] )
          {
            v26 = 0;
            goto LABEL_45;
          }
          v25 = a1->left - v23.m128i_i32[2];
        }
        else
        {
          v25 = v23.m128i_i32[0] - right;
        }
        v26 = v25 + 1;
LABEL_45:
        if ( v26 < v22 )
        {
          bottom = a1->bottom;
          if ( bottom > v23.m128i_i32[1] )
          {
            top = a1->top;
            if ( top >= v23.m128i_i32[3] )
              v28 = top - v23.m128i_i32[3] + 1;
            else
              v28 = 0;
          }
          else
          {
            v28 = v23.m128i_i32[1] - bottom + 1;
          }
          v30 = v26 * v26;
          if ( v30 < v22 && v30 + v28 < v22 )
          {
            v31 = v28 * v28 + v30;
            if ( v31 < v22 )
            {
              v22 = v31;
              v5 = v21;
            }
          }
        }
        goto LABEL_55;
      }
      v32 = *(_QWORD *)(DispInfo + 104);
      v33 = -1LL;
      while ( 1 )
      {
        if ( !v32 )
          return v5;
        if ( (*(_DWORD *)(*(_QWORD *)(v32 + 40) + 24LL) & 1) != 0 )
          break;
LABEL_76:
        v32 = *(_QWORD *)(v32 + 56);
      }
      MonitorRectForDpi = GetMonitorRectForDpi(&v48, v32, v12);
      v35 = a1->right;
      v44 = *MonitorRectForDpi;
      if ( v35 > v44.m128i_i32[0] )
      {
        if ( a1->left < v44.m128i_i32[2] )
        {
          v37 = 0;
LABEL_66:
          v38 = v37;
          if ( v37 < v33 )
          {
            v39 = a1->bottom;
            if ( v39 > v44.m128i_i32[1] )
            {
              v41 = a1->top;
              v40 = v41 >= v44.m128i_i32[3] ? v41 - v44.m128i_i32[3] + 1 : 0;
            }
            else
            {
              v40 = v44.m128i_i32[1] - v39 + 1;
            }
            v42 = v38 * v38;
            if ( v42 < v33 && v40 + v42 < v33 )
            {
              v43 = v40 * (__int64)v40 + v42;
              if ( v43 < v33 )
              {
                v33 = v43;
                v5 = v32;
              }
            }
          }
          goto LABEL_76;
        }
        v36 = a1->left - v44.m128i_i32[2];
      }
      else
      {
        v36 = v44.m128i_i32[0] - v35;
      }
      v37 = v36 + 1;
      goto LABEL_66;
    }
    return *(_QWORD *)(GetDispInfo() + 96);
  }
  return 0LL;
}
