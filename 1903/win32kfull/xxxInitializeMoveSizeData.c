/*
 * XREFs of xxxInitializeMoveSizeData @ 0x1C0201288
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0116898 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FE164 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0010414 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     _MonitorFromPoint @ 0x1C0091B40 (_MonitorFromPoint.c)
 *     GetCaptionHeight @ 0x1C0093074 (GetCaptionHeight.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C01F9BC4 (-AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FA7A0 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01FDF48 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01FE338 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212290 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212358 (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212384 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     GetScreenRectForWindow @ 0x1C0259DF0 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct _MOVESIZEDATA *a2, int a3, int a4, int a5)
{
  int v9; // ebx
  __int64 DesktopWindow; // rax
  __int64 v11; // rdx
  __int64 DispInfo; // rax
  int *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagRECT v16; // xmm0
  __int64 TopLevelWindow; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int *v20; // rdx
  unsigned int v21; // r12d
  int v22; // r15d
  __int128 v23; // xmm0
  unsigned __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // eax
  BOOL v29; // eax
  int v30; // r8d
  int v31; // ecx
  int v32; // ecx
  __int128 v33; // xmm0
  int v34; // eax
  int *v35; // r14
  _BYTE *v36; // rcx
  int v37; // ecx
  bool v38; // al
  int v39; // r9d
  _BYTE *v40; // rcx
  int v41; // eax
  unsigned int v42; // edx
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rdx
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // edx
  __int64 v52; // rcx
  char v53; // cl
  int v54; // edx
  int v55; // edx
  int v56; // ecx
  int v57; // edx
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // ecx
  int v62; // edx
  unsigned int v63; // ecx
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // edx
  int v68; // eax
  int v69; // eax
  __int64 result; // rax
  struct tagPOINT v71; // [rsp+30h] [rbp-41h]
  struct tagRECT v72; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v73[2]; // [rsp+50h] [rbp-21h] BYREF
  __int128 v74; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT v75; // [rsp+70h] [rbp-1h] BYREF

  v74 = 0uLL;
  v9 = 16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((_DWORD)a1, (_DWORD)a2, 1u, 0x10u, (__int64)&WPP_c0d2aea0028b3d709fe1f4aa428b688d_Traceguids, a1);
  if ( *(_QWORD *)(gptiCurrent + 424LL) != gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    v9 = 0;
  *((_DWORD *)a2 + 49) = v9 | *((_DWORD *)a2 + 49) & 0xFFFFFFEF;
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v11 == DesktopWindow )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x88) != 0 || *(_DWORD *)*gpDispInfo > 1u )
    {
      v13 = (int *)((char *)a2 + 88);
      *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)GetScreenRectForWindow(&v72, a1);
      v16 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    }
    else
    {
      DispInfo = GetDispInfo(gpDispInfo, v11);
      v13 = (int *)((char *)a2 + 88);
      *(_OWORD *)((char *)a2 + 88) = *GetMonitorWorkRectForWindow(&v72, *(_QWORD *)(DispInfo + 96), a1);
      v16 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v15, v14) + 96) + 40LL) + 44LL);
    }
    v75 = v16;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)a2 + 88, (char *)a2 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v18 )
      {
        v73[0] = 0LL;
        v73[1] = 0LL;
        if ( (unsigned int)GreGetRgnBox(v18, v73) )
          IntersectRect((_DWORD *)a2 + 22, (int *)a2 + 22, (int *)v73);
      }
    }
    v13 = (int *)((char *)a2 + 88);
    v75 = *(struct tagRECT *)((char *)a2 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v75, &v75, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v19 = *((_QWORD *)a1 + 13);
  v20 = (int *)((char *)a2 + 120);
  v21 = (__int16)a4;
  v22 = SHIWORD(a4);
  if ( *(_QWORD *)(*(_QWORD *)(v19 + 40) + 168LL) )
  {
    v23 = *(_OWORD *)v20;
    v24 = __PAIR64__(v22, v21);
    v73[0] = __PAIR64__(v22, v21);
    v74 = v23;
    TransformRectBetweenCoordinateSpaces(&v74, &v74, v19, a1);
    TransformPointBetweenCoordinateSpaces(v73, v73, *((_QWORD *)a1 + 13), a1);
    v25 = GreRectInRegion(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 168LL), &v74);
    v26 = HIDWORD(v73[0]);
    v27 = LODWORD(v73[0]);
    *((_DWORD *)a2 + 49) = (v25 != 0 ? 0 : 0x40) | *((_DWORD *)a2 + 49) & 0xFFFFFFBF;
    v28 = ((unsigned int)GrePtInRegion(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 168LL), v27, v26) != 0
         ? 0
         : 0x200000) | *((_DWORD *)a2 + 49) & 0xFFDFFFFF;
  }
  else
  {
    v24 = __PAIR64__(v22, v21);
    *((_DWORD *)a2 + 49) = ((unsigned int)IntersectRect(&v74, v20, v13) == 0 ? 0x40 : 0) | *((_DWORD *)a2 + 49) & 0xFFFFFFBF;
    v29 = PtInRect(v13, __PAIR64__(v22, v21));
    v28 = v30 & 0xFFDFFFFF | (!v29 ? 0x200000 : 0);
  }
  *((_DWORD *)a2 + 49) = v28;
  if ( (v28 & 0x100000) != 0 )
  {
    v72 = v75;
    CCursorClip::SetClip(gpCursorClip, &v72);
  }
  if ( (((a5 & 4) == 0) & (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) >> 5)) != 0 )
  {
    v31 = *(_DWORD *)(gpsi + 2124LL);
    *((_DWORD *)a2 + 28) = v31;
    *((_DWORD *)a2 + 26) = v31;
    v32 = *(_DWORD *)(gpsi + 2128LL);
    *((_DWORD *)a2 + 29) = v32;
    *((_DWORD *)a2 + 27) = v32;
  }
  else
  {
    xxxGetMinMaxTrackInfo((struct tagWND **)a2, a5 & 1);
  }
  v33 = *(_OWORD *)((char *)a2 + 120);
  v34 = *((_DWORD *)a2 + 49);
  *((_DWORD *)a2 + 61) = 0;
  v35 = (int *)((char *)a2 + 240);
  *((_DWORD *)a2 + 60) = 4;
  *((_DWORD *)a2 + 71) = v21;
  *((_DWORD *)a2 + 72) = v22;
  *((_DWORD *)a2 + 73) = v21;
  *((_DWORD *)a2 + 74) = v22;
  *((_DWORD *)a2 + 49) = v34 & 0x78FBFF7C | ~(a5 << 25) & 0x4000000;
  *(_OWORD *)((char *)a2 + 24) = v33;
  *(_OWORD *)((char *)a2 + 40) = v33;
  *(_OWORD *)((char *)a2 + 56) = v33;
  *(_OWORD *)((char *)a2 + 72) = v33;
  if ( SizeWithSnapAllowed(a1)
    && AreDockTargetsActive(a2)
    && (v36 = (_BYTE *)*((_QWORD *)a1 + 5), (v36[30] & 4) != 0)
    && (v36[24] & 0x40) == 0
    && (v36[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) != 0
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v37 = 1024;
  }
  else
  {
    v37 = 0;
  }
  *((_DWORD *)a2 + 49) = v37 | *((_DWORD *)a2 + 49) & 0xFFFFFBFF;
  v38 = MoveWithArrangementAllowed(a1);
  v39 = 2048;
  if ( v38
    && AreDockTargetsActive(a2)
    && (v40 = (_BYTE *)*((_QWORD *)a1 + 5), (v40[30] & 4) != 0)
    && (v40[24] & 0x40) == 0
    && (v40[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) != 0
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v41 = v39;
  }
  else
  {
    v41 = 0;
  }
  v42 = v41 | *((_DWORD *)a2 + 49) & 0xFFFFF7FF;
  *((_DWORD *)a2 + 49) = v42;
  if ( (v42 & 0xC00) != 0xC00 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 0 )
    {
      if ( !WindowArrangementAllowed(a1) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 )
        goto LABEL_54;
      v42 = *((_DWORD *)a2 + 49);
      v39 = 2048;
    }
    if ( (v42 & v39) == 0 )
    {
      v42 |= v39 | 0x800000;
      *((_DWORD *)a2 + 49) = v42;
    }
    if ( (v42 & 0x400) == 0 )
      *((_DWORD *)a2 + 49) = v42 | 0x400400;
  }
LABEL_54:
  v43 = *((_DWORD *)a2 + 49);
  if ( (v43 & 0xC00) == 0 )
  {
    v44 = MonitorFromPoint(v24, 2u, 0);
    v47 = *((unsigned int *)a2 + 49);
    *((_QWORD *)a2 + 29) = v44;
    goto LABEL_88;
  }
  v48 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v48 + 233) & 3) != 0 || (*(_BYTE *)(v48 + 31) & 1) != 0 )
    v49 = 4096;
  else
    v49 = 0;
  v50 = v49 | v43 & 0xFFFFEFFF;
  *((_DWORD *)a2 + 49) = v50;
  if ( (v50 & 0x1000) != 0 )
  {
    *((_DWORD *)a2 + 61) = 2;
    *((_DWORD *)a2 + 49) = v50 | 0x40000;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v24,
    a2,
    (struct tagMONITOR **)a2 + 29,
    (struct _MOVESIZEDATA *)((char *)a2 + 240));
  v45 = *((unsigned int *)a2 + 49);
  v51 = v45;
  v46 = 3LL;
  if ( (v45 & 0x38000) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 && a3 == 9 )
  {
    v51 = v45 & 0xFFFC7FFF | 0x20000;
    *((_DWORD *)a2 + 49) = v51;
  }
  v52 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v52 + 31) & 1) != 0 || (v53 = *(_BYTE *)(v52 + 233), (v53 & 3) == 3) )
  {
    *v35 = 0;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
    {
      v56 = *v35;
      if ( (unsigned int)(a3 - 6) <= 2 )
        v56 = 3;
      *v35 = v56;
    }
    goto LABEL_87;
  }
  if ( (v53 & 1) == 0 )
  {
    v45 = 2LL;
    if ( (v53 & 2) == 0 )
    {
      *v35 = 4;
      goto LABEL_87;
    }
    v55 = v51 & 0x38000;
    if ( v55 != 0x20000 )
    {
      if ( v55 )
        goto LABEL_81;
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_72;
      if ( (unsigned int)(a3 - 3) > 2 )
      {
LABEL_81:
        *v35 = 2;
        goto LABEL_87;
      }
    }
    goto LABEL_75;
  }
  v54 = v51 & 0x38000;
  if ( v54 == 0x20000 )
    goto LABEL_75;
  if ( v54 )
  {
LABEL_74:
    *v35 = 1;
    goto LABEL_87;
  }
  if ( (unsigned int)(a3 - 6) > 2 )
  {
    if ( (unsigned int)(a3 - 3) > 2 )
      goto LABEL_74;
LABEL_75:
    *v35 = 0;
    goto LABEL_87;
  }
LABEL_72:
  *v35 = 3;
LABEL_87:
  v47 = *((_DWORD *)a2 + 49) ^ ((unsigned __int8)*((_DWORD *)a2 + 49) ^ (unsigned __int8)(*((_DWORD *)a2 + 49) >> 5)) & 0x80u;
  *((_DWORD *)a2 + 49) = v47;
LABEL_88:
  *((_DWORD *)a2 + 44) = a3;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_100;
    a3 = 9;
    *((_DWORD *)a2 + 44) = 9;
  }
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL), v47, v45, v46);
  v57 = *((_DWORD *)a2 + 49);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    v57 |= 1u;
  v58 = *((_DWORD *)a2 + 6) + *((_DWORD *)a2 + 8);
  *((_DWORD *)a2 + 49) = v57 | 2;
  *((_DWORD *)a2 + 47) = v21;
  *((_DWORD *)a2 + 48) = v22;
  v21 = v58 / 2;
  v71.x = v58 / 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || *((_DWORD *)a2 + 44) != 9 )
  {
    v22 = (*((_DWORD *)a2 + 7) + *((_DWORD *)a2 + 9)) / 2;
    v71.y = v22;
  }
  else
  {
    v22 = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)a2 + 7) + 3;
    v71.y = v22;
  }
  v24 = (unsigned __int64)v71;
  zzzInternalSetCursorPos(v21, v71.y, 1, 0);
  xxxMS_FlushWigglies();
  v59 = *((_DWORD *)a2 + 49);
  if ( (v59 & 0x400) == 0 )
    *v35 = 4;
  LODWORD(v47) = v59 & 0xFFFFFF7F;
  *((_DWORD *)a2 + 71) = v21;
  *((_DWORD *)a2 + 49) = v47;
  *((_DWORD *)a2 + 72) = v22;
  *((_DWORD *)a2 + 73) = v21;
  *((_DWORD *)a2 + 74) = v22;
LABEL_100:
  v60 = *((_DWORD *)a2 + 31);
  *((_DWORD *)a2 + 72) -= v60;
  *((_DWORD *)a2 + 74) -= v60;
  *((_QWORD *)a2 + 27) = *((_QWORD *)a2 + 29);
  *((_DWORD *)a2 + 56) = *v35;
  *((_DWORD *)a2 + 49) = v47 ^ ((unsigned __int8)v47 ^ (unsigned __int8)(gdwPUDFlags >> 15)) & 0x20;
  v61 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 71) -= v61;
  *((_DWORD *)a2 + 73) -= v61;
  *((_QWORD *)a2 + 26) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v62 = *((_DWORD *)a2 + 49) ^ (*((_DWORD *)a2 + 49) ^ ~(*((_DWORD *)a2 + 49) << 23)) & 0x10000000;
  *((_DWORD *)a2 + 49) = v62;
  v63 = v62 & 0xFFFFDFFF | ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 1) << 13);
  *((_DWORD *)a2 + 49) = v63;
  v64 = v63 & 0xFFFFBFFF | ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 2) << 13);
  v65 = ((unsigned __int16)v64 ^ (unsigned __int16)(v64 >> 5)) & 0x100 ^ v64;
  v66 = (((unsigned __int16)v65 ^ (unsigned __int16)(v65 >> 5)) & 0x200 ^ v65) & 0xDFF7FFFF;
  *((_DWORD *)a2 + 49) = v66;
  if ( (v66 & 2) != 0 )
  {
    v67 = v66 & 0xFFFFF3FF;
    *((_DWORD *)a2 + 49) = v67;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
      *((_DWORD *)a2 + 49) = v67 | 0xC00C00;
  }
  *((_DWORD *)a2 + 45) = dword_1C02EC028[a3];
  *((_DWORD *)a2 + 46) = dword_1C02EBFF8[a3];
  v68 = dword_1C02EC088[a3];
  if ( v68 != -1 )
    *((_DWORD *)a2 + 42) = *((_DWORD *)a2 + (__int16)v68 + 30) - v21;
  v69 = dword_1C02EC058[a3];
  if ( v69 != -1 )
    *((_DWORD *)a2 + 43) = *((_DWORD *)a2 + (__int16)v69 + 30) - v22;
  *(_QWORD *)((char *)a2 + 300) = v24;
  *((_DWORD *)a2 + 85) = a5;
  memset((char *)a2 + 248, 0, 0x20uLL);
  result = *((_DWORD *)a2 + 70) & 0xFFFFFFF4 | (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 234LL) >> 7) & 0xFFFFFFF5 | (2 * (a5 & 4 | (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) >> 7)));
  *((_DWORD *)a2 + 70) = result;
  return result;
}
