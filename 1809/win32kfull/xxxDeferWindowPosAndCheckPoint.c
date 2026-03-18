/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00CD908 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01C7928 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C001CCF4 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1C001D140 (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C001D1D4 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0071F34 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     FindOldMonitor @ 0x1C00CDC10 (FindOldMonitor.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00CDDB4 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C00CF334 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     IsValidMonitor @ 0x1C00CF9CC (IsValidMonitor.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C00CFAF4 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01C5C70 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01E4950 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01E53B0 (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C01E810C (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0240F0C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

__int64 __fastcall xxxDeferWindowPosAndCheckPoint(
        __int64 a1,
        struct tagWND *a2,
        struct tagMONITORRECTS *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        int a6,
        char a7)
{
  char *v9; // rsi
  int v10; // r14d
  __int64 v11; // rbx
  int v12; // r15d
  unsigned int DpiForSystem; // eax
  __int64 v14; // r8
  __int64 Prop; // rax
  struct tagRECT *v16; // rbx
  int OldMonitor; // eax
  __int64 v18; // rax
  struct tagMONITOR *NewMonitor; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r10
  struct tagMONITOR *v23; // rax
  int v24; // ecx
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // r15
  __int64 v29; // rax
  struct tagMONITOR *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __m128i v34; // xmm7
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rax
  __m128i v38; // xmm6
  __int64 v39; // rax
  __int64 v40; // rdx
  BOOL v41; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // r9d
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v47; // r9
  unsigned int v49; // [rsp+58h] [rbp-B0h]
  _QWORD v51[3]; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v52; // [rsp+80h] [rbp-88h] BYREF
  __m128i v53; // [rsp+90h] [rbp-78h] BYREF
  __m128i v54; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v55; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v56; // [rsp+C0h] [rbp-48h] BYREF
  __m256i v57; // [rsp+D0h] [rbp-38h]
  struct tagRECT *v58[2]; // [rsp+F0h] [rbp-18h]
  struct tagRECT v59; // [rsp+100h] [rbp-8h] BYREF
  __m128i v60; // [rsp+110h] [rbp+8h]
  _QWORD v61[44]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v62[72]; // [rsp+288h] [rbp+180h] BYREF
  _QWORD v63[41]; // [rsp+2D0h] [rbp+1C8h] BYREF

  v49 = 0;
  v58[0] = a4;
  v57.m256i_i64[2] = (__int64)a5;
  *(_QWORD *)&v56.left = 0LL;
  *(_QWORD *)&v56.right = 0LL;
  memset(v62, 0, sizeof(v62));
  memset(v63, 0, sizeof(v63));
  v63[5] = v62;
  v9 = (char *)a2 + 40;
  v10 = 1;
  if ( (dword_1C030D4B4 & 1) != 0 && (v11 = *(_QWORD *)v9, (*(_BYTE *)(*(_QWORD *)v9 + 233LL) & 3) != 0) )
  {
    v12 = 3;
    v49 = EvaluateArrangeState(a2);
    memset(v61, 0, 0x158uLL);
    v61[2] = a2;
    v57.m256i_i32[0] = (*(_DWORD *)(v11 + 96) - *(_DWORD *)(v11 + 88)) / 2;
    if ( v49 == 3 )
    {
      DpiForSystem = GetDpiForSystem();
      GetDpiDependentMetric(2LL, DpiForSystem, v14);
    }
    HIDWORD(v61[24]) = HIDWORD(v61[24]) & 0xFFFC7FFF | 0x30000;
    xxxInitializeMoveSizeData(a2, (struct _MOVESIZEDATA *)v61, 11);
  }
  else if ( (*(_BYTE *)(*(_QWORD *)v9 + 20LL) & 0x40) != 0 )
  {
    v12 = 2;
  }
  else
  {
    v12 = 0;
  }
  Prop = GetProp((__int64)a2, (unsigned __int16)atomCheckpointProp, 1LL);
  v16 = (struct tagRECT *)Prop;
  if ( !Prop )
    goto LABEL_38;
  if ( !a5 )
    goto LABEL_38;
  *(_DWORD *)(Prop + 48) &= ~0x20u;
  OldMonitor = FindOldMonitor(a2, a3, a5);
  if ( OldMonitor == -1 )
    goto LABEL_38;
  if ( v12 != 3 )
  {
    NormalizeRect(a2, a5, v16, a3, OldMonitor, v12);
    goto LABEL_38;
  }
  v57.m256i_i64[0] = 48LL * OldMonitor;
  v18 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v57.m256i_i64[0] + 48));
  NewMonitor = (struct tagMONITOR *)v18;
  if ( !v18 || !(unsigned int)IsValidMonitor(v18) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a3 + v57.m256i_i64[0] + 8));
    if ( NewMonitor )
      goto LABEL_18;
    NewMonitor = *(struct tagMONITOR **)(GetDispInfo(v21, v20) + 96);
  }
  v22 = v57.m256i_i64[0];
LABEL_18:
  if ( (a7 & 1) != 0 )
  {
    v23 = (struct tagMONITOR *)v61[29];
  }
  else
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v62, (struct tagMONITORRECTS *)((char *)a3 + v22 + 8));
    v23 = (struct tagMONITOR *)v63;
  }
  v57.m256i_i64[0] = (__int64)v23;
  if ( MigrateRectMonitors(
         a2,
         (struct tagRECT *)v57.m256i_i64[2],
         v23,
         &v59,
         NewMonitor,
         0LL,
         (struct _MOVESIZEDATA *)v61,
         0) )
  {
    *v16 = v59;
  }
  if ( (*(_BYTE *)(*(_QWORD *)v9 + 31LL) & 0x20) != 0 )
  {
    v24 = v16[3].left & 8;
    if ( v24 || (v16[3].left & 0x10) != 0 )
    {
      v25 = ((unsigned int)v16[3].left >> 4) & 1;
      if ( v24 )
      {
        if ( !v25 )
          goto LABEL_28;
        v26 = 9;
      }
      else
      {
        if ( !v25 )
        {
LABEL_28:
          v26 = 9;
          if ( v24 )
            v26 = 13;
          goto LABEL_34;
        }
        v26 = 11;
      }
LABEL_34:
      v57.m256i_i64[2] = (__int64)&v16[1];
      if ( MigrateRectMonitors(
             a2,
             v16 + 1,
             (struct tagMONITOR *)v57.m256i_i64[0],
             &v59,
             NewMonitor,
             0LL,
             (struct _MOVESIZEDATA *)v61,
             v26) )
      {
        *(struct tagRECT *)v57.m256i_i64[2] = v59;
      }
      else
      {
        v16[3].left &= 0xFFFFFFE7;
      }
    }
  }
LABEL_38:
  v27 = FindOldMonitor(a2, a3, v58[0]);
  if ( v27 != -1 )
  {
    if ( v12 == 3 )
    {
      v28 = 48LL * v27;
      v29 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v28 + 48));
      v30 = (struct tagMONITOR *)v29;
      if ( !v29 || !(unsigned int)IsValidMonitor(v29) )
      {
        v30 = FindNewMonitor((struct tagRECT *)((char *)a3 + v28 + 8));
        if ( !v30 )
          v30 = *(struct tagMONITOR **)(GetDispInfo(v32, v31) + 96);
      }
      PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v62, (struct tagMONITORRECTS *)((char *)a3 + v28 + 8));
      v33 = v63;
      if ( (a7 & 1) != 0 )
        v33 = (_QWORD *)v61[29];
      v61[29] = v33;
      v34 = *GetMonitorRectForDpi(&v52, (__int64)v63, (*(_DWORD *)(*(_QWORD *)v9 + 288LL) >> 8) & 0x1FF);
      v35 = *(_QWORD *)v9;
      *(__m128i *)v57.m256i_i8 = v34;
      v36 = *GetMonitorWorkRectForDpi(&v53, (__int64)v63, (*(_DWORD *)(v35 + 288) >> 8) & 0x1FF);
      v37 = *(_QWORD *)v9;
      *(__m128i *)v58 = v36;
      v38 = *GetMonitorRectForDpi(&v54, (__int64)v30, (*(_DWORD *)(v37 + 288) >> 8) & 0x1FF);
      v39 = *(_QWORD *)v9;
      v60 = v38;
      *(__m128i *)&v57.m256i_u64[2] = *GetMonitorWorkRectForDpi(
                                         &v55,
                                         (__int64)v30,
                                         (*(_DWORD *)(v39 + 288) >> 8) & 0x1FF);
      v41 = v34.m128i_i64[0] == v38.m128i_i64[0]
         && __PAIR128__((unsigned __int64)v58[0], v60.m128i_u64[1]) == *(_OWORD *)&v57.m256i_u64[1]
         && v58[1] == (struct tagRECT *)v57.m256i_i64[3];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40);
      v51[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v51;
      v51[1] = v30;
      if ( v30 )
        _InterlockedAdd((volatile signed __int32 *)v30 + 2, 1u);
      if ( (unsigned __int8)xxxEvaluateDestRectForMonitorMigration(v49, v61, a2, v30, v41) )
      {
        a6 |= 0x100000u;
        v56 = *(struct tagRECT *)&v61[5];
      }
      else
      {
        v10 = 0;
      }
      ThreadUnlock1(v44, v43);
    }
    else
    {
      if ( (unsigned int)_ShouldMaximizeWindow(a2) )
      {
        v12 = 1;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v9 + 232LL) & 0x8000) != 0 )
      {
        v12 = 2;
      }
      NormalizeRect(a2, &v56, v58[0], a3, v45, v12);
      if ( (*(_BYTE *)(*(_QWORD *)v9 + 21LL) & 8) == 0 )
        return _DeferWindowPos(a1, a2, 0LL, v56.left, v56.top, v56.right - v56.left, v56.bottom - v56.top, a6, 0);
      WindowCompositedDpi = GetWindowCompositedDpi(a2);
      *(_QWORD *)(*(_QWORD *)v9 + 168LL) = GetMonitorRegionForDpi(v47, WindowCompositedDpi);
    }
    if ( v10 )
      return _DeferWindowPos(a1, a2, 0LL, v56.left, v56.top, v56.right - v56.left, v56.bottom - v56.top, a6, 0);
  }
  return a1;
}
