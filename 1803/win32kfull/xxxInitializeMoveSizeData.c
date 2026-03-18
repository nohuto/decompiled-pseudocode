/*
 * XREFs of xxxInitializeMoveSizeData @ 0x1C01C7264
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C005B1BC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01C336C (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 * Callees:
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     GetCaptionHeight @ 0x1C00F6358 (GetCaptionHeight.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C01C01F8 (-AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C0CAC (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01C316C (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C01C3548 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     MoveWithArrangementAllowed @ 0x1C01D6744 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01D6774 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C01D688C (WindowArrangementAllowed.c)
 *     GetScreenRectForWindow @ 0x1C022B0E8 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxInitializeMoveSizeData(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  int v7; // r13d
  int v9; // r8d
  __int64 DesktopWindow; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14; // r14
  __int64 DispInfo; // rax
  int *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 TopLevelWindow; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int *v24; // rdx
  unsigned int v25; // ebx
  unsigned int v26; // r15d
  __int128 v27; // xmm0
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned int v32; // eax
  BOOL v33; // eax
  int v34; // r8d
  int v35; // ecx
  int v36; // ecx
  __int128 v37; // xmm0
  int v38; // eax
  unsigned int v39; // r12d
  int *v40; // r14
  _BYTE *v41; // rcx
  int v42; // ecx
  int v43; // eax
  __int64 v44; // r9
  _BYTE *v45; // rcx
  int v46; // eax
  unsigned int v47; // edx
  int v48; // ecx
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rdx
  int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // edx
  __int64 v55; // rcx
  char v56; // cl
  int v57; // edx
  int v58; // edx
  int v59; // ecx
  int v60; // eax
  int v61; // eax
  int v62; // edx
  int v63; // eax
  int v64; // ecx
  int v65; // edx
  unsigned int v66; // ecx
  unsigned int v67; // edx
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned int v70; // edx
  int v71; // eax
  int v72; // eax
  __int64 result; // rax
  int v75; // [rsp+20h] [rbp-60h]
  unsigned __int64 v76; // [rsp+28h] [rbp-58h]
  struct tagPOINT v77; // [rsp+28h] [rbp-58h]
  struct tagRECT v78; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v79[2]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v80; // [rsp+50h] [rbp-30h] BYREF
  __int128 v81; // [rsp+60h] [rbp-20h] BYREF

  v7 = a3;
  v9 = 0;
  if ( *(_QWORD *)(gptiCurrent + 424LL) == gpqForeground )
    v9 = 16;
  *(_DWORD *)(a2 + 196) = *(_DWORD *)(a2 + 196) & 0xFFFFFFEF | v9;
  *(_OWORD *)(a2 + 120) = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  *(_OWORD *)(a2 + 136) = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v11 == DesktopWindow )
  {
    v14 = a4;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 24LL) & 0x88) != 0 || *(_DWORD *)*gpDispInfo > 1u )
    {
      v16 = (int *)(a2 + 88);
      *(_OWORD *)(a2 + 88) = *(_OWORD *)GetScreenRectForWindow(&v78, a1);
      v80 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    }
    else
    {
      DispInfo = GetDispInfo(gpDispInfo, v11, v12, v13);
      v16 = (int *)(a2 + 88);
      *(_OWORD *)(a2 + 88) = *GetMonitorWorkRectForWindow(&v78, *(_QWORD *)(DispInfo + 96), (const struct tagWND *)a1);
      v80 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v18, v17, v19, v20) + 96) + 40LL) + 44LL);
    }
  }
  else
  {
    *(_OWORD *)(a2 + 88) = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces(a2 + 88, a2 + 88, a1, *(_QWORD *)(a1 + 80));
    TopLevelWindow = GetTopLevelWindow(a1);
    v14 = a4;
    if ( TopLevelWindow )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v22 )
      {
        v79[0] = 0LL;
        v79[1] = 0LL;
        if ( (unsigned int)GreGetRgnBox(v22, v79) )
          IntersectRect((_DWORD *)(a2 + 88), (int *)(a2 + 88), (int *)v79);
      }
    }
    v16 = (int *)(a2 + 88);
    v80 = *(struct tagRECT *)(a2 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v14 = a4;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2 )
        LogicalToPhysicalDPIRect(&v80, &v80, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 0LL);
    }
    v7 = a3;
  }
  v23 = *(_QWORD *)(a1 + 80);
  v24 = (int *)(a2 + 120);
  v25 = HIWORD(a4);
  v75 = v14;
  LODWORD(v76) = v14;
  v26 = (__int16)v25;
  HIDWORD(v76) = (__int16)v25;
  if ( *(_QWORD *)(*(_QWORD *)(v23 + 40) + 168LL) )
  {
    v27 = *(_OWORD *)v24;
    v28 = v76;
    v79[0] = v76;
    v81 = v27;
    TransformRectBetweenCoordinateSpaces(&v81, &v81, v23, a1);
    TransformPointBetweenCoordinateSpaces(v79, v79, *(_QWORD *)(a1 + 80), a1);
    v29 = GreRectInRegion(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL) + 168LL), &v81);
    v30 = HIDWORD(v79[0]);
    v31 = LODWORD(v79[0]);
    *(_DWORD *)(a2 + 196) = (v29 != 0 ? 0 : 0x40) | *(_DWORD *)(a2 + 196) & 0xFFFFFFBF;
    v32 = ((unsigned int)GrePtInRegion(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL) + 168LL), v31, v30) != 0
         ? 0
         : 0x200000) | *(_DWORD *)(a2 + 196) & 0xFFDFFFFF;
  }
  else
  {
    v28 = v76;
    *(_DWORD *)(a2 + 196) = ((unsigned int)IntersectRect(&v78, v24, v16) == 0 ? 0x40 : 0) | *(_DWORD *)(a2 + 196) & 0xFFFFFFBF;
    v33 = PtInRect(v16, v76);
    v32 = v34 & 0xFFDFFFFF | (!v33 ? 0x200000 : 0);
  }
  *(_DWORD *)(a2 + 196) = v32;
  if ( (v32 & 0x100000) != 0 )
  {
    v78 = v80;
    CCursorClip::SetClip(gpCursorClip, &v78);
  }
  if ( (((a5 & 4) == 0) & (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) >> 5)) != 0 )
  {
    v35 = *(_DWORD *)(gpsi + 2124LL);
    *(_DWORD *)(a2 + 112) = v35;
    *(_DWORD *)(a2 + 104) = v35;
    v36 = *(_DWORD *)(gpsi + 2128LL);
    *(_DWORD *)(a2 + 116) = v36;
    *(_DWORD *)(a2 + 108) = v36;
  }
  else
  {
    xxxGetMinMaxTrackInfo((struct tagWND **)a2, a5 & 1);
  }
  v37 = *(_OWORD *)(a2 + 120);
  v38 = *(_DWORD *)(a2 + 196);
  v39 = v14;
  v40 = (int *)(a2 + 240);
  *(_DWORD *)(a2 + 244) = 0;
  *(_DWORD *)(a2 + 240) = 4;
  *(_DWORD *)(a2 + 284) = v75;
  *(_DWORD *)(a2 + 288) = v26;
  *(_DWORD *)(a2 + 292) = v75;
  *(_DWORD *)(a2 + 296) = v26;
  *(_DWORD *)(a2 + 196) = v38 & 0x78FBFF7C | ~(a5 << 25) & 0x4000000;
  *(_OWORD *)(a2 + 24) = v37;
  *(_OWORD *)(a2 + 40) = v37;
  *(_OWORD *)(a2 + 56) = v37;
  *(_OWORD *)(a2 + 72) = v37;
  if ( (unsigned int)SizeWithSnapAllowed(a1)
    && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
    && (v41 = *(_BYTE **)(a1 + 40), (v41[30] & 4) != 0)
    && (v41[24] & 0x40) == 0
    && (v41[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL) + 30LL) & 1) != 0
    && **(_WORD **)(*(_QWORD *)(a1 + 112) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v42 = 1024;
  }
  else
  {
    v42 = 0;
  }
  *(_DWORD *)(a2 + 196) = v42 | *(_DWORD *)(a2 + 196) & 0xFFFFFBFF;
  v43 = MoveWithArrangementAllowed(a1);
  v44 = 2048LL;
  if ( v43
    && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
    && (v45 = *(_BYTE **)(a1 + 40), (v45[30] & 4) != 0)
    && (v45[24] & 0x40) == 0
    && (v45[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL) + 30LL) & 1) != 0
    && **(_WORD **)(*(_QWORD *)(a1 + 112) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v46 = v44;
  }
  else
  {
    v46 = 0;
  }
  v47 = v46 | *(_DWORD *)(a2 + 196) & 0xFFFFF7FF;
  *(_DWORD *)(a2 + 196) = v47;
  if ( (v47 & 0xC00) != 0xC00 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 3) == 0 )
    {
      if ( !(unsigned int)WindowArrangementAllowed(a1) || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) == 0 )
        goto LABEL_51;
      v47 = *(_DWORD *)(a2 + 196);
      v44 = 2048LL;
    }
    if ( (v47 & (unsigned int)v44) == 0 )
    {
      v47 |= v44 | 0x800000;
      *(_DWORD *)(a2 + 196) = v47;
    }
    if ( (v47 & 0x400) == 0 )
      *(_DWORD *)(a2 + 196) = v47 | 0x400400;
  }
LABEL_51:
  v48 = *(_DWORD *)(a2 + 196);
  if ( (v48 & 0xC00) == 0 )
  {
    v49 = MonitorFromPoint(v28, 2LL, 0LL, v44);
    v50 = *(_DWORD *)(a2 + 196);
    *(_QWORD *)(a2 + 232) = v49;
    goto LABEL_85;
  }
  v51 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v51 + 233) & 3) != 0 || (*(_BYTE *)(v51 + 31) & 1) != 0 )
    v52 = 4096;
  else
    v52 = 0;
  v53 = v52 | v48 & 0xFFFFEFFF;
  *(_DWORD *)(a2 + 196) = v53;
  if ( (v53 & 0x1000) != 0 )
  {
    *(_DWORD *)(a2 + 244) = 2;
    *(_DWORD *)(a2 + 196) = v53 | 0x40000;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v28,
    (const struct _MOVESIZEDATA *const)a2,
    (struct tagMONITOR **)(a2 + 232),
    (enum eTHRESHOLD_MARGIN_DIRECTION *)(a2 + 240));
  v54 = *(_DWORD *)(a2 + 196);
  if ( (v54 & 0x38000) == 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 3) != 0 && v7 == 9 )
  {
    v54 = v54 & 0xFFFC7FFF | 0x20000;
    *(_DWORD *)(a2 + 196) = v54;
  }
  v55 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v55 + 31) & 1) != 0 || (v56 = *(_BYTE *)(v55 + 233), (v56 & 3) == 3) )
  {
    *v40 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 3) == 3 )
    {
      v59 = *v40;
      if ( (unsigned int)(v7 - 6) <= 2 )
        v59 = 3;
      *v40 = v59;
    }
    goto LABEL_84;
  }
  if ( (v56 & 1) == 0 )
  {
    if ( (v56 & 2) == 0 )
    {
      *v40 = 4;
      goto LABEL_84;
    }
    v58 = (v54 >> 15) & 7;
    if ( v58 != 4 )
    {
      if ( v58 )
        goto LABEL_78;
      if ( (unsigned int)(v7 - 6) <= 2 )
        goto LABEL_69;
      if ( (unsigned int)(v7 - 3) > 2 )
      {
LABEL_78:
        *v40 = 2;
        goto LABEL_84;
      }
    }
LABEL_71:
    *v40 = 0;
    goto LABEL_84;
  }
  v57 = (v54 >> 15) & 7;
  if ( v57 == 4 )
    goto LABEL_71;
  if ( v57 )
    goto LABEL_72;
  if ( (unsigned int)(v7 - 6) > 2 )
  {
    if ( (unsigned int)(v7 - 3) <= 2 )
      goto LABEL_71;
LABEL_72:
    *v40 = 1;
    goto LABEL_84;
  }
LABEL_69:
  *v40 = 3;
LABEL_84:
  v50 = *(_DWORD *)(a2 + 196) ^ ((unsigned __int8)*(_DWORD *)(a2 + 196) ^ (unsigned __int8)(*(_DWORD *)(a2 + 196) >> 5)) & 0x80;
  *(_DWORD *)(a2 + 196) = v50;
LABEL_85:
  *(_DWORD *)(a2 + 176) = v7;
  if ( v7 )
  {
    if ( v7 != 10 )
      goto LABEL_97;
    v7 = 9;
    *(_DWORD *)(a2 + 176) = 9;
  }
  zzzSetCursor(*(_QWORD *)&gasyscur[76]);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) == 0 )
    *(_DWORD *)(a2 + 196) |= 1u;
  v60 = *(_DWORD *)(a2 + 196) | 2;
  *(_DWORD *)(a2 + 188) = v75;
  *(_DWORD *)(a2 + 196) = v60;
  v61 = *(_DWORD *)(a2 + 24) + *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 192) = v26;
  v39 = v61 / 2;
  v77.x = v61 / 2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 || *(_DWORD *)(a2 + 176) != 9 )
  {
    v26 = (*(_DWORD *)(a2 + 28) + *(_DWORD *)(a2 + 36)) / 2;
    v77.y = v26;
  }
  else
  {
    v26 = (int)GetCaptionHeight(a1) / 2 + *(_DWORD *)(a2 + 28) + 3;
    v77.y = v26;
  }
  zzzInternalSetCursorPos(v39, v26, 1, 0);
  xxxMS_FlushWigglies();
  v62 = *(_DWORD *)(a2 + 196);
  if ( (v62 & 0x400) == 0 )
    *v40 = 4;
  v28 = (__int64)v77;
  v50 = v62 & 0xFFFFFF7F;
  *(_DWORD *)(a2 + 196) = v50;
  *(_DWORD *)(a2 + 284) = v39;
  *(_DWORD *)(a2 + 288) = v26;
  *(_DWORD *)(a2 + 292) = v39;
  *(_DWORD *)(a2 + 296) = v26;
LABEL_97:
  v63 = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a2 + 288) -= v63;
  *(_DWORD *)(a2 + 296) -= v63;
  *(_QWORD *)(a2 + 216) = *(_QWORD *)(a2 + 232);
  *(_DWORD *)(a2 + 224) = *v40;
  *(_DWORD *)(a2 + 196) = v50 ^ ((unsigned __int8)v50 ^ (unsigned __int8)(gdwPUDFlags >> 15)) & 0x20;
  v64 = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(a2 + 284) -= v64;
  *(_DWORD *)(a2 + 292) -= v64;
  *(_QWORD *)(a2 + 208) = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL));
  v65 = *(_DWORD *)(a2 + 196) ^ (*(_DWORD *)(a2 + 196) ^ ~(*(_DWORD *)(a2 + 196) << 23)) & 0x10000000;
  *(_DWORD *)(a2 + 196) = v65;
  v66 = v65 & 0xFFFFDFFF | ((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 1) << 13);
  *(_DWORD *)(a2 + 196) = v66;
  v67 = v66 & 0xFFFFBFFF | ((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 2) << 13);
  v68 = ((unsigned __int16)v67 ^ (unsigned __int16)(v67 >> 5)) & 0x100 ^ v67;
  v69 = (((unsigned __int16)v68 ^ (unsigned __int16)(v68 >> 5)) & 0x200 ^ v68) & 0xDFF7FFFF;
  *(_DWORD *)(a2 + 196) = v69;
  if ( (v69 & 2) != 0 )
  {
    v70 = v69 & 0xFFFFF3FF;
    *(_DWORD *)(a2 + 196) = v70;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 3) != 0 )
      *(_DWORD *)(a2 + 196) = v70 | 0xC00C00;
  }
  *(_DWORD *)(a2 + 180) = dword_1C02E62D8[v7];
  *(_DWORD *)(a2 + 184) = dword_1C02E62A8[v7];
  v71 = dword_1C02E6338[v7];
  if ( v71 != -1 )
    *(_DWORD *)(a2 + 168) = *(_DWORD *)(a2 + 4LL * (__int16)v71 + 120) - v39;
  v72 = dword_1C02E6308[v7];
  if ( v72 != -1 )
    *(_DWORD *)(a2 + 172) = *(_DWORD *)(a2 + 4LL * (__int16)v72 + 120) - v26;
  *(_QWORD *)(a2 + 300) = v28;
  *(_DWORD *)(a2 + 340) = a5;
  memset((void *)(a2 + 248), 0, 0x20uLL);
  result = *(_DWORD *)(a2 + 280) & 0xFFFFFFF4 | (*(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 234LL) >> 7) & 0xFFFFFFF5 | (2 * (a5 & 4 | (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) >> 7)));
  *(_DWORD *)(a2 + 280) = result;
  return result;
}
