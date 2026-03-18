/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C01300C8
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C012E644 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01DAB90 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0034798 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetMonitorWorkRectForDpi @ 0x1C0037E60 (GetMonitorWorkRectForDpi.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006C5E8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     FindOldMonitor @ 0x1C012EA18 (FindOldMonitor.c)
 *     GetMonitorRectForDpi @ 0x1C012EBC8 (GetMonitorRectForDpi.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C012EC44 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C013032C (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     IsValidMonitor @ 0x1C01307F4 (IsValidMonitor.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C01333F4 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D8E84 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01F9F38 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01FA9F4 (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C01FD7C0 (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025958C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
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
  int v11; // r15d
  __int64 Prop; // rax
  struct tagRECT *v13; // rbx
  struct tagRECT *v14; // rbx
  int v15; // eax
  int v16; // r9d
  int OldMonitor; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // r10d
  int v22; // eax
  __int64 v23; // rdx
  unsigned int DpiForSystem; // eax
  __int64 v25; // rax
  struct tagMONITOR *NewMonitor; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct tagMONITOR *v29; // r10
  struct tagMONITOR *v30; // rax
  int v31; // ecx
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r15
  __int64 v35; // rax
  struct tagMONITOR *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __m128i v40; // xmm7
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  __m128i v44; // xmm6
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  char *v48; // rcx
  signed __int64 v49; // rax
  int v50; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v56; // r9
  unsigned int v57; // [rsp+58h] [rbp-B0h]
  __int64 v59; // [rsp+68h] [rbp-A0h] BYREF
  struct tagMONITOR *v60; // [rsp+70h] [rbp-98h]
  __int64 v61; // [rsp+78h] [rbp-90h]
  __m128i v62; // [rsp+80h] [rbp-88h] BYREF
  __m128i v63; // [rsp+90h] [rbp-78h] BYREF
  __m128i v64; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v65; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v66; // [rsp+C0h] [rbp-48h] BYREF
  struct tagMONITOR *v67[2]; // [rsp+D0h] [rbp-38h]
  struct tagRECT *v68[2]; // [rsp+E0h] [rbp-28h]
  struct tagRECT v69; // [rsp+F0h] [rbp-18h] BYREF
  struct tagRECT *v70[2]; // [rsp+100h] [rbp-8h]
  __m128i v71; // [rsp+110h] [rbp+8h]
  _QWORD v72[44]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v73[88]; // [rsp+288h] [rbp+180h] BYREF
  _QWORD v74[43]; // [rsp+2E0h] [rbp+1D8h] BYREF

  v68[0] = a5;
  v70[0] = a4;
  memset(v72, 0, 0x158uLL);
  v57 = 0;
  *(_QWORD *)&v69.left = 0LL;
  *(_QWORD *)&v69.right = 0LL;
  *(_QWORD *)&v66.left = 0LL;
  *(_QWORD *)&v66.right = 0LL;
  memset(v73, 0, sizeof(v73));
  memset(v74, 0, 0x150uLL);
  v74[5] = v73;
  v9 = (char *)a2 + 40;
  v10 = 1;
  if ( (dword_1C03203BC & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v9 + 233LL) & 3) != 0 )
  {
    v11 = 3;
    v57 = EvaluateArrangeState(a2);
    v72[2] = a2;
    v20 = *(unsigned int *)(v19 + 88);
    v23 = (unsigned int)((*(_DWORD *)(v19 + 96) - (int)v20) >> 31);
    LODWORD(v23) = (*(_DWORD *)(v19 + 96) - (int)v20) % v21;
    v22 = (*(_DWORD *)(v19 + 96) - (int)v20) / v21;
    LOWORD(v22) = v20 + v22;
    LODWORD(v67[0]) = v22;
    if ( v57 == 3 )
    {
      DpiForSystem = GetDpiForSystem(v20, v23, v19);
      GetDpiDependentMetric(2LL, DpiForSystem);
    }
    HIDWORD(v72[24]) = HIDWORD(v72[24]) & 0xFFFC7FFF | 0x30000;
    xxxInitializeMoveSizeData(a2, (struct _MOVESIZEDATA *)v72, 11);
  }
  else if ( (*(_BYTE *)(*(_QWORD *)v9 + 20LL) & 0x40) != 0 )
  {
    v11 = 2;
  }
  else
  {
    v11 = 0;
  }
  Prop = GetProp((__int64)a2, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
  v13 = (struct tagRECT *)Prop;
  if ( !Prop )
    goto LABEL_6;
  if ( !a5 )
    goto LABEL_6;
  *(_DWORD *)(Prop + 48) &= ~0x20u;
  OldMonitor = FindOldMonitor((__int64)a2, a3, (__int128 *)&a5->left);
  if ( OldMonitor == -1 )
    goto LABEL_6;
  if ( v11 != 3 )
  {
    NormalizeRect(a2, a5, v13, a3, OldMonitor, v11);
    goto LABEL_6;
  }
  v67[0] = (struct tagMONITOR *)(48LL * OldMonitor);
  v25 = ValidateHmonitor(*(_QWORD *)((char *)v67[0] + (unsigned __int64)a3 + 48));
  NewMonitor = (struct tagMONITOR *)v25;
  if ( !v25 || !(unsigned int)IsValidMonitor(v25) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a3 + (unsigned __int64)v67[0] + 8));
    if ( NewMonitor )
      goto LABEL_28;
    NewMonitor = *(struct tagMONITOR **)(GetDispInfo(v28, v27) + 96);
  }
  v29 = v67[0];
LABEL_28:
  if ( (a7 & 1) != 0 )
  {
    v30 = (struct tagMONITOR *)v72[29];
  }
  else
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v73, (struct tagMONITORPOS *)((char *)a3 + (_QWORD)v29 + 8));
    v30 = (struct tagMONITOR *)v74;
  }
  v67[0] = v30;
  if ( MigrateRectMonitors(a2, v68[0], v30, &v69, NewMonitor, 0LL, (struct _MOVESIZEDATA *)v72, 0) )
    *v13 = v69;
  if ( (*(_BYTE *)(*(_QWORD *)v9 + 31LL) & 0x20) != 0 )
  {
    v31 = v13[3].left & 8;
    if ( v31 || (v13[3].left & 0x10) != 0 )
    {
      v32 = ((unsigned int)v13[3].left >> 4) & 1;
      if ( v31 )
      {
        if ( v32 )
        {
          v33 = 9;
          goto LABEL_43;
        }
      }
      else if ( v32 )
      {
        v33 = 11;
LABEL_43:
        v68[0] = v13 + 1;
        if ( MigrateRectMonitors(a2, v13 + 1, v67[0], &v69, NewMonitor, 0LL, (struct _MOVESIZEDATA *)v72, v33) )
          *v68[0] = v69;
        else
          v13[3].left &= 0xFFFFFFE7;
        goto LABEL_6;
      }
      v33 = 9;
      if ( v31 )
        v33 = 13;
      goto LABEL_43;
    }
  }
LABEL_6:
  v14 = v70[0];
  v15 = FindOldMonitor((__int64)a2, a3, (__int128 *)&v70[0]->left);
  if ( v15 != -1 )
  {
    if ( v11 == 3 )
    {
      v34 = 48LL * v15;
      v35 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v34 + 48));
      v36 = (struct tagMONITOR *)v35;
      if ( !v35 || !(unsigned int)IsValidMonitor(v35) )
      {
        v36 = FindNewMonitor((struct tagRECT *)((char *)a3 + v34 + 8));
        if ( !v36 )
          v36 = *(struct tagMONITOR **)(GetDispInfo(v38, v37) + 96);
      }
      PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v73, (struct tagMONITORRECTS *)((char *)a3 + v34 + 8));
      v39 = v74;
      if ( (a7 & 1) != 0 )
        v39 = (_QWORD *)v72[29];
      v72[29] = v39;
      v40 = *GetMonitorRectForDpi(&v62, (__int64)v74, (*(_DWORD *)(*(_QWORD *)v9 + 288LL) >> 8) & 0x1FF);
      v41 = *(_QWORD *)v9;
      *(__m128i *)v67 = v40;
      v42 = *GetMonitorWorkRectForDpi(&v63, (__int64)v74, (*(_DWORD *)(v41 + 288) >> 8) & 0x1FF);
      v43 = *(_QWORD *)v9;
      *(__m128i *)v70 = v42;
      v44 = *GetMonitorRectForDpi(&v64, (__int64)v36, (*(_DWORD *)(v43 + 288) >> 8) & 0x1FF);
      v45 = *(_QWORD *)v9;
      v71 = v44;
      *(__m128i *)v68 = *GetMonitorWorkRectForDpi(&v65, (__int64)v36, (*(_DWORD *)(v45 + 288) >> 8) & 0x1FF);
      v48 = (char *)(v40.m128i_i64[0] - v44.m128i_i64[0]);
      if ( v40.m128i_i64[0] == v44.m128i_i64[0] )
        v48 = (char *)v67[1] - v71.m128i_i64[1];
      if ( v48 )
        goto LABEL_59;
      v49 = (char *)v70[0] - (char *)v68[0];
      if ( v70[0] == v68[0] )
        v49 = (char *)v70[1] - (char *)v68[1];
      if ( v49 )
LABEL_59:
        v50 = 0;
      else
        v50 = 1;
      v59 = 0LL;
      v60 = 0LL;
      v61 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47);
      v59 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v59;
      v60 = v36;
      if ( v36 )
        HMLockObject(v36);
      if ( (unsigned __int8)xxxEvaluateDestRectForMonitorMigration(v57, v72, a2, v36, v50) )
      {
        a6 |= 0x100000u;
        v66 = *(struct tagRECT *)&v72[5];
      }
      else
      {
        v10 = 0;
      }
      ThreadUnlock1(v53, v52, v54);
    }
    else
    {
      if ( (unsigned int)_ShouldMaximizeWindow(a2) )
      {
        v11 = 1;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v9 + 232LL) & 0x8000) != 0 )
      {
        v11 = 2;
      }
      NormalizeRect(a2, &v66, v14, a3, v16, v11);
      if ( (*(_BYTE *)(*(_QWORD *)v9 + 21LL) & 8) == 0 )
        return _DeferWindowPos(a1, a2, 0LL, v66.left, v66.top, v66.right - v66.left, v66.bottom - v66.top, a6, 0);
      WindowCompositedDpi = GetWindowCompositedDpi(a2);
      *(_QWORD *)(*(_QWORD *)v9 + 168LL) = GetMonitorRegionForDpi(v56, WindowCompositedDpi);
    }
    if ( v10 )
      return _DeferWindowPos(a1, a2, 0LL, v66.left, v66.top, v66.right - v66.left, v66.bottom - v66.top, a6, 0);
  }
  return a1;
}
