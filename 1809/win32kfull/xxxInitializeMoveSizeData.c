/*
 * XREFs of xxxInitializeMoveSizeData @ 0x1C01EB504
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00CD2D8 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01E87DC (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00057F0 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     _MonitorFromPoint @ 0x1C007AE20 (_MonitorFromPoint.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GetCaptionHeight @ 0x1C00A7388 (GetCaptionHeight.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C01E4330 (-AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E4EFC (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01E85DC (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01E89B0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB304 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB3E4 (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB410 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     GetScreenRectForWindow @ 0x1C0241034 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct _MOVESIZEDATA *a2, int a3, int a4, int a5)
{
  int v9; // ecx
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
  unsigned int v22; // r15d
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
  unsigned int v45; // edx
  __int64 v46; // rdx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // edx
  __int64 v50; // rcx
  char v51; // cl
  int v52; // edx
  int v53; // edx
  int v54; // ecx
  __int64 v55; // r8
  int v56; // edx
  int v57; // eax
  __int64 v58; // rdx
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
  struct tagPOINT v71; // [rsp+20h] [rbp-60h]
  struct tagRECT v72; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v73[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v74; // [rsp+50h] [rbp-30h] BYREF
  __int128 v75; // [rsp+60h] [rbp-20h] BYREF

  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground || (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    v9 = 16;
  else
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
    v74 = v16;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)a2 + 88, (char *)a2 + 88, a1, *((_QWORD *)a1 + 10));
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
    v74 = *(struct tagRECT *)((char *)a2 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v74, &v74, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v19 = *((_QWORD *)a1 + 10);
  v20 = (int *)((char *)a2 + 120);
  v21 = (__int16)a4;
  v22 = SHIWORD(a4);
  if ( *(_QWORD *)(*(_QWORD *)(v19 + 40) + 168LL) )
  {
    v23 = *(_OWORD *)v20;
    v24 = __PAIR64__(v22, v21);
    v73[0] = __PAIR64__(v22, v21);
    v75 = v23;
    TransformRectBetweenCoordinateSpaces(&v75, &v75, v19, a1);
    TransformPointBetweenCoordinateSpaces(v73, v73, *((_QWORD *)a1 + 10), a1);
    v25 = GreRectInRegion(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 40LL) + 168LL), &v75);
    v26 = HIDWORD(v73[0]);
    v27 = LODWORD(v73[0]);
    *((_DWORD *)a2 + 49) = (v25 != 0 ? 0 : 0x40) | *((_DWORD *)a2 + 49) & 0xFFFFFFBF;
    v28 = ((unsigned int)GrePtInRegion(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 40LL) + 168LL), v27, v26) != 0
         ? 0
         : 0x200000) | *((_DWORD *)a2 + 49) & 0xFFDFFFFF;
  }
  else
  {
    v24 = __PAIR64__(v22, v21);
    *((_DWORD *)a2 + 49) = ((unsigned int)IntersectRect(&v72, v20, v13) == 0 ? 0x40 : 0) | *((_DWORD *)a2 + 49) & 0xFFFFFFBF;
    v29 = PtInRect(v13, __PAIR64__(v22, v21));
    v28 = v30 & 0xFFDFFFFF | (!v29 ? 0x200000 : 0);
  }
  *((_DWORD *)a2 + 49) = v28;
  if ( (v28 & 0x100000) != 0 )
  {
    v72 = v74;
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
    && **(_WORD **)(*((_QWORD *)a1 + 14) + 8LL) != *(_WORD *)(gpsi + 900LL) )
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
    && **(_WORD **)(*((_QWORD *)a1 + 14) + 8LL) != *(_WORD *)(gpsi + 900LL) )
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
        goto LABEL_53;
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
LABEL_53:
  v43 = *((_DWORD *)a2 + 49);
  if ( (v43 & 0xC00) == 0 )
  {
    v44 = MonitorFromPoint(v24, 2LL, 0);
    v45 = *((_DWORD *)a2 + 49);
    *((_QWORD *)a2 + 29) = v44;
    goto LABEL_87;
  }
  v46 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v46 + 233) & 3) != 0 || (*(_BYTE *)(v46 + 31) & 1) != 0 )
    v47 = 4096;
  else
    v47 = 0;
  v48 = v47 | v43 & 0xFFFFEFFF;
  *((_DWORD *)a2 + 49) = v48;
  if ( (v48 & 0x1000) != 0 )
  {
    *((_DWORD *)a2 + 61) = 2;
    *((_DWORD *)a2 + 49) = v48 | 0x40000;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v24,
    a2,
    (struct tagMONITOR **)a2 + 29,
    (struct _MOVESIZEDATA *)((char *)a2 + 240));
  v49 = *((_DWORD *)a2 + 49);
  if ( (v49 & 0x38000) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 && a3 == 9 )
  {
    v49 = v49 & 0xFFFC7FFF | 0x20000;
    *((_DWORD *)a2 + 49) = v49;
  }
  v50 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v50 + 31) & 1) != 0 || (v51 = *(_BYTE *)(v50 + 233), (v51 & 3) == 3) )
  {
    *v35 = 0;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
    {
      v54 = *v35;
      if ( (unsigned int)(a3 - 6) <= 2 )
        v54 = 3;
      *v35 = v54;
    }
    goto LABEL_86;
  }
  if ( (v51 & 1) == 0 )
  {
    if ( (v51 & 2) == 0 )
    {
      *v35 = 4;
      goto LABEL_86;
    }
    v53 = v49 & 0x38000;
    if ( v53 != 0x20000 )
    {
      if ( v53 )
        goto LABEL_80;
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_71;
      if ( (unsigned int)(a3 - 3) > 2 )
      {
LABEL_80:
        *v35 = 2;
        goto LABEL_86;
      }
    }
    goto LABEL_74;
  }
  v52 = v49 & 0x38000;
  if ( v52 == 0x20000 )
    goto LABEL_74;
  if ( v52 )
  {
LABEL_73:
    *v35 = 1;
    goto LABEL_86;
  }
  if ( (unsigned int)(a3 - 6) > 2 )
  {
    if ( (unsigned int)(a3 - 3) > 2 )
      goto LABEL_73;
LABEL_74:
    *v35 = 0;
    goto LABEL_86;
  }
LABEL_71:
  *v35 = 3;
LABEL_86:
  v45 = *((_DWORD *)a2 + 49) ^ ((unsigned __int8)*((_DWORD *)a2 + 49) ^ (unsigned __int8)(*((_DWORD *)a2 + 49) >> 5)) & 0x80;
  *((_DWORD *)a2 + 49) = v45;
LABEL_87:
  *((_DWORD *)a2 + 44) = a3;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_99;
    a3 = 9;
    *((_DWORD *)a2 + 44) = 9;
  }
  zzzSetCursor(*(struct tagCURSOR **)(*(_QWORD *)gasyscur + 4976LL));
  v56 = *((_DWORD *)a2 + 49);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
  {
    v56 |= 1u;
    *((_DWORD *)a2 + 49) = v56;
  }
  v57 = *((_DWORD *)a2 + 6) + *((_DWORD *)a2 + 8);
  *((_DWORD *)a2 + 49) = v56 | 2;
  v58 = (unsigned int)(v57 >> 31);
  *((_DWORD *)a2 + 47) = v21;
  *((_DWORD *)a2 + 48) = v22;
  v21 = v57 / 2;
  v71.x = v57 / 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || *((_DWORD *)a2 + 44) != 9 )
  {
    v22 = (*((_DWORD *)a2 + 7) + *((_DWORD *)a2 + 9)) / 2;
    v71.y = v22;
  }
  else
  {
    LODWORD(v58) = v57 % 2;
    v22 = (int)GetCaptionHeight((__int64)a1, v58, v55) / 2 + *((_DWORD *)a2 + 7) + 3;
    v71.y = v22;
  }
  zzzInternalSetCursorPos(v21, v22, 1, 0);
  xxxMS_FlushWigglies();
  v59 = *((_DWORD *)a2 + 49);
  if ( (v59 & 0x400) == 0 )
    *v35 = 4;
  v24 = (unsigned __int64)v71;
  v45 = v59 & 0xFFFFFF7F;
  *((_DWORD *)a2 + 49) = v45;
  *((_DWORD *)a2 + 71) = v21;
  *((_DWORD *)a2 + 72) = v22;
  *((_DWORD *)a2 + 73) = v21;
  *((_DWORD *)a2 + 74) = v22;
LABEL_99:
  v60 = *((_DWORD *)a2 + 31);
  *((_DWORD *)a2 + 72) -= v60;
  *((_DWORD *)a2 + 74) -= v60;
  *((_QWORD *)a2 + 27) = *((_QWORD *)a2 + 29);
  *((_DWORD *)a2 + 56) = *v35;
  *((_DWORD *)a2 + 49) = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(gdwPUDFlags >> 15)) & 0x20;
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
  *((_DWORD *)a2 + 45) = dword_1C02D9918[a3];
  *((_DWORD *)a2 + 46) = dword_1C02D98E8[a3];
  v68 = dword_1C02D9978[a3];
  if ( v68 != -1 )
    *((_DWORD *)a2 + 42) = *((_DWORD *)a2 + (__int16)v68 + 30) - v21;
  v69 = dword_1C02D9948[a3];
  if ( v69 != -1 )
    *((_DWORD *)a2 + 43) = *((_DWORD *)a2 + (__int16)v69 + 30) - v22;
  *(_QWORD *)((char *)a2 + 300) = v24;
  *((_DWORD *)a2 + 85) = a5;
  memset((char *)a2 + 248, 0, 0x20uLL);
  result = *((_DWORD *)a2 + 70) & 0xFFFFFFF4 | (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 234LL) >> 7) & 0xFFFFFFF5 | (2 * (a5 & 4 | (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) >> 7)));
  *((_DWORD *)a2 + 70) = result;
  return result;
}
