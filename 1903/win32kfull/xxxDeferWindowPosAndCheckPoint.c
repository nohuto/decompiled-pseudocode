/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C0116898
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C008FAC0 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01DAD10 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C0091874 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     FindOldMonitor @ 0x1C0091908 (FindOldMonitor.c)
 *     GetMonitorRectForDpi @ 0x1C0091AB8 (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0093A70 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetMonitorWorkRectForDpi @ 0x1C0097130 (GetMonitorWorkRectForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C00CAF18 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C0116AFC (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     IsValidMonitor @ 0x1C0116FC4 (IsValidMonitor.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C01170EC (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D9004 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01FA1E8 (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01FACA4 (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C01FDA70 (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     xxxInitializeMoveSizeData @ 0x1C0201288 (xxxInitializeMoveSizeData.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0259CCC (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
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
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // r10d
  int v24; // eax
  __int64 v25; // rdx
  unsigned int DpiForSystem; // eax
  __int64 v27; // rax
  struct tagMONITOR *NewMonitor; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagMONITOR *v31; // r10
  struct tagMONITOR *v32; // rax
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // r15
  __int64 v37; // rax
  struct tagMONITOR *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int128 v42; // xmm7
  __int64 v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int128 v46; // xmm6
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  char *v51; // rcx
  signed __int64 v52; // rax
  int v53; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v59; // r9
  unsigned int v60; // [rsp+58h] [rbp-B0h]
  __int64 v62; // [rsp+68h] [rbp-A0h] BYREF
  struct tagMONITOR *v63; // [rsp+70h] [rbp-98h]
  __int64 v64; // [rsp+78h] [rbp-90h]
  __int64 v65; // [rsp+80h] [rbp-88h] BYREF
  __m128i v66; // [rsp+90h] [rbp-78h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v68; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v69; // [rsp+C0h] [rbp-48h] BYREF
  struct tagMONITOR *v70[2]; // [rsp+D0h] [rbp-38h]
  struct tagRECT *v71[2]; // [rsp+E0h] [rbp-28h]
  struct tagRECT v72; // [rsp+F0h] [rbp-18h] BYREF
  struct tagRECT *v73[2]; // [rsp+100h] [rbp-8h]
  __int128 v74; // [rsp+110h] [rbp+8h]
  _QWORD v75[44]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v76[88]; // [rsp+288h] [rbp+180h] BYREF
  _QWORD v77[43]; // [rsp+2E0h] [rbp+1D8h] BYREF

  v71[0] = a5;
  v73[0] = a4;
  memset(v75, 0, 0x158uLL);
  v60 = 0;
  *(_QWORD *)&v72.left = 0LL;
  *(_QWORD *)&v72.right = 0LL;
  *(_QWORD *)&v69.left = 0LL;
  *(_QWORD *)&v69.right = 0LL;
  memset(v76, 0, sizeof(v76));
  memset(v77, 0, 0x150uLL);
  v77[5] = v76;
  v9 = (char *)a2 + 40;
  v10 = 1;
  if ( (dword_1C03223BC & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v9 + 233LL) & 3) != 0 )
  {
    v11 = 3;
    v19 = EvaluateArrangeState(a2);
    v21 = v19;
    v60 = v19;
    v75[2] = a2;
    v22 = *(unsigned int *)(v20 + 88);
    v25 = (unsigned int)((*(_DWORD *)(v20 + 96) - (int)v22) >> 31);
    LODWORD(v25) = (*(_DWORD *)(v20 + 96) - (int)v22) % v23;
    v24 = (*(_DWORD *)(v20 + 96) - (int)v22) / v23;
    LOWORD(v24) = v22 + v24;
    LODWORD(v70[0]) = v24;
    if ( (_DWORD)v21 == 3 )
    {
      DpiForSystem = GetDpiForSystem(v22, v25, v20, v21);
      GetDpiDependentMetric(2LL, DpiForSystem);
    }
    HIDWORD(v75[24]) = HIDWORD(v75[24]) & 0xFFFC7FFF | 0x30000;
    xxxInitializeMoveSizeData(a2, (struct _MOVESIZEDATA *)v75, 11);
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
  v70[0] = (struct tagMONITOR *)(48LL * OldMonitor);
  v27 = ValidateHmonitor(*(_QWORD *)((char *)v70[0] + (unsigned __int64)a3 + 48));
  NewMonitor = (struct tagMONITOR *)v27;
  if ( !v27 || !(unsigned int)IsValidMonitor(v27) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a3 + (unsigned __int64)v70[0] + 8));
    if ( NewMonitor )
      goto LABEL_28;
    NewMonitor = *(struct tagMONITOR **)(GetDispInfo(v30, v29) + 96);
  }
  v31 = v70[0];
LABEL_28:
  if ( (a7 & 1) != 0 )
  {
    v32 = (struct tagMONITOR *)v75[29];
  }
  else
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v76, (struct tagMONITORPOS *)((char *)a3 + (_QWORD)v31 + 8));
    v32 = (struct tagMONITOR *)v77;
  }
  v70[0] = v32;
  if ( MigrateRectMonitors(a2, v71[0], v32, &v72, NewMonitor, 0LL, (struct _MOVESIZEDATA *)v75, 0) )
    *v13 = v72;
  if ( (*(_BYTE *)(*(_QWORD *)v9 + 31LL) & 0x20) != 0 )
  {
    v33 = v13[3].left & 8;
    if ( v33 || (v13[3].left & 0x10) != 0 )
    {
      v34 = ((unsigned int)v13[3].left >> 4) & 1;
      if ( v33 )
      {
        if ( v34 )
        {
          v35 = 9;
          goto LABEL_43;
        }
      }
      else if ( v34 )
      {
        v35 = 11;
LABEL_43:
        v71[0] = v13 + 1;
        if ( MigrateRectMonitors(a2, v13 + 1, v70[0], &v72, NewMonitor, 0LL, (struct _MOVESIZEDATA *)v75, v35) )
          *v71[0] = v72;
        else
          v13[3].left &= 0xFFFFFFE7;
        goto LABEL_6;
      }
      v35 = 9;
      if ( v33 )
        v35 = 13;
      goto LABEL_43;
    }
  }
LABEL_6:
  v14 = v73[0];
  v15 = FindOldMonitor((__int64)a2, a3, (__int128 *)&v73[0]->left);
  if ( v15 != -1 )
  {
    if ( v11 == 3 )
    {
      v36 = 48LL * v15;
      v37 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v36 + 48));
      v38 = (struct tagMONITOR *)v37;
      if ( !v37 || !(unsigned int)IsValidMonitor(v37) )
      {
        v38 = FindNewMonitor((struct tagRECT *)((char *)a3 + v36 + 8));
        if ( !v38 )
          v38 = *(struct tagMONITOR **)(GetDispInfo(v40, v39) + 96);
      }
      PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v76, (struct tagMONITORRECTS *)((char *)a3 + v36 + 8));
      v41 = v77;
      if ( (a7 & 1) != 0 )
        v41 = (_QWORD *)v75[29];
      v75[29] = v41;
      v42 = *(_OWORD *)GetMonitorRectForDpi(&v65, (__int64)v77, (*(_DWORD *)(*(_QWORD *)v9 + 288LL) >> 8) & 0x1FF);
      v43 = *(_QWORD *)v9;
      *(_OWORD *)v70 = v42;
      v44 = *GetMonitorWorkRectForDpi(&v66, (__int64)v77, (*(_DWORD *)(v43 + 288) >> 8) & 0x1FF);
      v45 = *(_QWORD *)v9;
      *(__m128i *)v73 = v44;
      v46 = *(_OWORD *)GetMonitorRectForDpi(&v67, (__int64)v38, (*(_DWORD *)(v45 + 288) >> 8) & 0x1FF);
      v47 = *(_QWORD *)v9;
      v74 = v46;
      *(__m128i *)v71 = *GetMonitorWorkRectForDpi(&v68, (__int64)v38, (*(_DWORD *)(v47 + 288) >> 8) & 0x1FF);
      v51 = (char *)(v42 - v46);
      if ( (_QWORD)v42 == (_QWORD)v46 )
        v51 = (char *)v70[1] - *((_QWORD *)&v74 + 1);
      if ( v51 )
        goto LABEL_59;
      v52 = (char *)v73[0] - (char *)v71[0];
      if ( v73[0] == v71[0] )
        v52 = (char *)v73[1] - (char *)v71[1];
      if ( v52 )
LABEL_59:
        v53 = 0;
      else
        v53 = 1;
      v62 = 0LL;
      v63 = 0LL;
      v64 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50);
      v62 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v62;
      v63 = v38;
      if ( v38 )
        HMLockObject(v38);
      if ( (unsigned __int8)xxxEvaluateDestRectForMonitorMigration(v60, v75, a2, v38, v53) )
      {
        a6 |= 0x100000u;
        v69 = *(struct tagRECT *)&v75[5];
      }
      else
      {
        v10 = 0;
      }
      ThreadUnlock1(v56, v55, v57);
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
      NormalizeRect(a2, &v69, v14, a3, v16, v11);
      if ( (*(_BYTE *)(*(_QWORD *)v9 + 21LL) & 8) == 0 )
        return _DeferWindowPos(a1, a2, 0LL, v69.left, v69.top, v69.right - v69.left, v69.bottom - v69.top, a6, 0);
      WindowCompositedDpi = GetWindowCompositedDpi(a2);
      *(_QWORD *)(*(_QWORD *)v9 + 168LL) = GetMonitorRegionForDpi(v59, WindowCompositedDpi);
    }
    if ( v10 )
      return _DeferWindowPos(a1, a2, 0LL, v69.left, v69.top, v69.right - v69.left, v69.bottom - v69.top, a6, 0);
  }
  return a1;
}
