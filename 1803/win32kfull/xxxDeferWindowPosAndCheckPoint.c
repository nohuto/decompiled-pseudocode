/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C005AEEC (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01A5AEC (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0034F94 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     GetMonitorWorkRectForDpi @ 0x1C0035AB4 (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0035B48 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C0058FF8 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C0059130 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     IsValidMonitor @ 0x1C0059790 (IsValidMonitor.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00721C4 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     FindOldMonitor @ 0x1C007223C (FindOldMonitor.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01A3A74 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     EvaluateArrangeState @ 0x1C01C56C8 (EvaluateArrangeState.c)
 *     MigrateRectMonitors @ 0x1C01C57E8 (MigrateRectMonitors.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01C6F94 (xxxEvaluateDestRectForMonitorMigration.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C022AF90 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

__int64 __fastcall xxxDeferWindowPosAndCheckPoint(
        __int64 a1,
        __int64 a2,
        struct tagMONITORRECTS *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        int a6,
        char a7)
{
  __int64 *v9; // rsi
  int v10; // r14d
  _DWORD *v11; // rbx
  int v12; // r15d
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  unsigned int DpiForSystem; // eax
  unsigned __int16 v17; // cx
  __int64 Prop; // rax
  struct tagRECT *v19; // rbx
  int OldMonitor; // eax
  __int64 v21; // rax
  struct tagMONITOR *NewMonitor; // r13
  __int64 v23; // r10
  _QWORD *v24; // rax
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rax
  struct tagMONITOR *v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // r8
  __int128 v34; // xmm7
  __int64 v35; // rax
  __int128 v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // r8
  __int128 v39; // xmm6
  __int64 v40; // rax
  __int64 v41; // rdx
  BOOL v42; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r9d
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v49; // r9
  int v51; // [rsp+58h] [rbp-B0h]
  _QWORD v53[3]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v54[16]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v55; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v56[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v57; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v58; // [rsp+C0h] [rbp-48h] BYREF
  __m256i v59; // [rsp+D0h] [rbp-38h]
  struct tagRECT *v60[2]; // [rsp+F0h] [rbp-18h]
  struct tagRECT v61; // [rsp+100h] [rbp-8h] BYREF
  __int128 v62; // [rsp+110h] [rbp+8h]
  _QWORD v63[44]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v64[72]; // [rsp+288h] [rbp+180h] BYREF
  _QWORD v65[77]; // [rsp+2D0h] [rbp+1C8h] BYREF

  v51 = 0;
  v60[0] = a4;
  v59.m256i_i64[2] = (__int64)a5;
  *(_QWORD *)&v58.left = 0LL;
  *(_QWORD *)&v58.right = 0LL;
  memset(v64, 0, sizeof(v64));
  memset(v65, 0, 0x260uLL);
  v65[5] = v64;
  v9 = (__int64 *)(a2 + 40);
  v10 = 1;
  if ( (dword_1C031D794 & 1) != 0 && (v11 = (_DWORD *)*v9, (*(_BYTE *)(*v9 + 233) & 3) != 0) )
  {
    v12 = 3;
    v51 = EvaluateArrangeState(a2);
    memset(v63, 0, 0x158uLL);
    v63[2] = a2;
    v13 = v11[22];
    v14 = (v11[24] - v13) / 2;
    LOWORD(v14) = v13 + v14;
    v59.m256i_i32[0] = v14;
    if ( v51 == 3 )
    {
      v15 = v11[23];
      DpiForSystem = GetDpiForSystem();
      v17 = v15 + GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    }
    else
    {
      v17 = *((_WORD *)v11 + 46) + 2;
    }
    HIDWORD(v63[24]) = HIDWORD(v63[24]) & 0xFFFC7FFF | 0x30000;
    xxxInitializeMoveSizeData(a2, v63, 9LL, v59.m256i_u16[0] | (v17 << 16), 11);
  }
  else if ( (*(_BYTE *)(*v9 + 20) & 0x40) != 0 )
  {
    v12 = 2;
  }
  else
  {
    v12 = 0;
  }
  Prop = RealGetProp(*(_QWORD *)(a2 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
  v19 = (struct tagRECT *)Prop;
  if ( !Prop )
    goto LABEL_39;
  if ( !a5 )
    goto LABEL_39;
  *(_DWORD *)(Prop + 48) &= ~0x20u;
  OldMonitor = FindOldMonitor(a2, a3, a5);
  if ( OldMonitor == -1 )
    goto LABEL_39;
  if ( v12 != 3 )
  {
    NormalizeRect((struct tagWND *)a2, a5, v19, a3, OldMonitor, v12);
    goto LABEL_39;
  }
  v59.m256i_i64[0] = 56LL * OldMonitor;
  v21 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v59.m256i_i64[0] + 48));
  NewMonitor = (struct tagMONITOR *)v21;
  if ( v21 && (unsigned int)IsValidMonitor(v21) )
    goto LABEL_18;
  NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a3 + v59.m256i_i64[0] + 8));
  if ( !NewMonitor )
  {
    NewMonitor = *(struct tagMONITOR **)(GetDispInfo() + 96);
LABEL_18:
    v23 = v59.m256i_i64[0];
  }
  if ( (a7 & 1) != 0 )
  {
    v24 = (_QWORD *)v63[29];
  }
  else
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v64, (struct tagMONITORRECTS *)((char *)a3 + v23 + 8));
    v24 = v65;
  }
  v59.m256i_i64[0] = (__int64)v24;
  if ( (unsigned int)MigrateRectMonitors(
                       a2,
                       v59.m256i_i32[4],
                       (_DWORD)v24,
                       (unsigned int)&v61,
                       (__int64)NewMonitor,
                       0LL,
                       (__int64)v63,
                       0) )
    *v19 = v61;
  if ( (*(_BYTE *)(*v9 + 31) & 0x20) != 0 )
  {
    v25 = ((unsigned int)v19[3].left >> 3) & 1;
    if ( v25 || (v19[3].left & 0x10) != 0 )
    {
      v26 = ((unsigned int)v19[3].left >> 4) & 1;
      if ( v25 && v26 )
      {
        v27 = 9;
      }
      else if ( v26 )
      {
        v27 = 11;
      }
      else
      {
        v27 = 9;
        if ( v25 )
          v27 = 13;
      }
      v59.m256i_i64[2] = (__int64)&v19[1];
      if ( (unsigned int)MigrateRectMonitors(
                           a2,
                           (int)v19 + 16,
                           v59.m256i_i32[0],
                           (unsigned int)&v61,
                           (__int64)NewMonitor,
                           0LL,
                           (__int64)v63,
                           v27) )
        *(struct tagRECT *)v59.m256i_i64[2] = v61;
      else
        v19[3].left &= 0xFFFFFFE7;
    }
  }
LABEL_39:
  v28 = FindOldMonitor(a2, a3, v60[0]);
  if ( v28 != -1 )
  {
    if ( v12 == 3 )
    {
      v29 = 56LL * v28;
      v30 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v29 + 48));
      v31 = (struct tagMONITOR *)v30;
      if ( !v30 || !(unsigned int)IsValidMonitor(v30) )
      {
        v31 = FindNewMonitor((struct tagRECT *)((char *)a3 + v29 + 8));
        if ( !v31 )
          v31 = *(struct tagMONITOR **)(GetDispInfo() + 96);
      }
      PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v64, (struct tagMONITORRECTS *)((char *)a3 + v29 + 8));
      v32 = v65;
      if ( (a7 & 1) != 0 )
        v32 = (_QWORD *)v63[29];
      v63[29] = v32;
      v33 = *(_DWORD *)(*v9 + 288) >> 8;
      LOWORD(v33) = v33 & 0x1FF;
      v34 = *(_OWORD *)GetMonitorRectForDpi(v54, v65, v33);
      v35 = *v9;
      *(_OWORD *)v59.m256i_i8 = v34;
      v36 = *GetMonitorWorkRectForDpi(&v55, (__int64)v65, (*(_DWORD *)(v35 + 288) >> 8) & 0x1FF);
      v37 = *v9;
      *(_OWORD *)v60 = v36;
      v38 = *(_DWORD *)(v37 + 288) >> 8;
      LOWORD(v38) = v38 & 0x1FF;
      v39 = *(_OWORD *)GetMonitorRectForDpi(v56, v31, v38);
      v40 = *v9;
      v62 = v39;
      *(_OWORD *)&v59.m256i_u64[2] = *GetMonitorWorkRectForDpi(
                                        &v57,
                                        (__int64)v31,
                                        (*(_DWORD *)(v40 + 288) >> 8) & 0x1FF);
      v42 = (_QWORD)v34 == (_QWORD)v39
         && __PAIR128__((unsigned __int64)v60[0], *((unsigned __int64 *)&v62 + 1)) == *(_OWORD *)&v59.m256i_u64[1]
         && v60[1] == (struct tagRECT *)v59.m256i_i64[3];
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41);
      v53[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v53;
      v53[1] = v31;
      if ( v31 )
        _InterlockedAdd((volatile signed __int32 *)v31 + 2, 1u);
      if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v51, (unsigned int)v63, a2, (_DWORD)v31, v42) )
      {
        a6 |= 0x100000u;
        v58 = *(struct tagRECT *)&v63[5];
      }
      else
      {
        v10 = 0;
      }
      ThreadUnlock1(v45, v44, v46);
    }
    else
    {
      if ( (unsigned int)_ShouldMaximizeWindow((struct tagWND *)a2) )
      {
        v12 = 1;
      }
      else if ( (*(_DWORD *)(*v9 + 232) & 0x8000) != 0 )
      {
        v12 = 2;
      }
      NormalizeRect((struct tagWND *)a2, &v58, v60[0], a3, v47, v12);
      if ( (*(_BYTE *)(*v9 + 21) & 8) == 0 )
        return _DeferWindowPos(
                 a1,
                 (_QWORD *)a2,
                 0LL,
                 v58.left,
                 v58.top,
                 v58.right - v58.left,
                 v58.bottom - v58.top,
                 a6,
                 0);
      WindowCompositedDpi = GetWindowCompositedDpi((const struct tagWND *)a2);
      *(_QWORD *)(*v9 + 168) = GetMonitorRegionForDpi(v49, WindowCompositedDpi);
    }
    if ( v10 )
      return _DeferWindowPos(
               a1,
               (_QWORD *)a2,
               0LL,
               v58.left,
               v58.top,
               v58.right - v58.left,
               v58.bottom - v58.top,
               a6,
               0);
  }
  return a1;
}
