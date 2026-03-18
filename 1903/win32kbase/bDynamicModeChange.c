/*
 * XREFs of bDynamicModeChange @ 0x1C00572B0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0019670 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgShareLockEx @ 0x1C001BA50 (HmgShareLockEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003BFD0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003E23C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00542E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00571F4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C00581D0 (bDynamicProcessAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C0058340 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0058878 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C007AE90 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00A4BBC (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00A7160 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00A74C0 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0128BD0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0128C5C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(struct PDEV *a1, struct PDEV *a2, unsigned int a3)
{
  unsigned int v6; // r12d
  __int64 v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // r13d
  struct tagSIZE *v11; // rax
  struct tagSIZE v12; // rdi
  struct tagSIZE *v13; // rax
  struct SURFACE *v14; // r9
  struct SURFACE *v15; // rcx
  struct tagSIZE v16; // rbx
  __int64 cy; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 Objt; // rax
  __int64 v21; // r13
  bool v22; // zf
  struct SURFACE *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  struct SURFACE *v27; // rcx
  struct SURFACE *v28; // rdi
  struct SURFACE *v29; // r13
  struct SURFACE **v30; // rax
  __int64 v31; // r8
  struct SURFACE **v32; // rbx
  struct PDEV *v33; // rax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rax
  struct OBJECT *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // ecx
  int v44; // eax
  char *v45; // rax
  _OWORD *v46; // rdx
  __int64 v47; // r8
  _OWORD *v48; // rcx
  __int64 v49; // r9
  _OWORD *v50; // rax
  __int128 v51; // xmm1
  __int64 v52; // r9
  _OWORD *v53; // rcx
  _OWORD *v54; // rax
  __int128 v55; // xmm1
  _OWORD *v56; // rax
  __int64 v57; // rdx
  __int128 v58; // xmm1
  __int64 v59; // r9
  _OWORD *v60; // rax
  _OWORD *v61; // rdx
  _OWORD *v62; // rcx
  __int128 v63; // xmm1
  __int64 v64; // r9
  __int128 v65; // xmm1
  _OWORD *v66; // rdx
  _OWORD *v67; // rcx
  __int128 v68; // xmm1
  _OWORD *v69; // rax
  __int128 v70; // xmm1
  int *v71; // rbx
  volatile unsigned int *v72; // r11
  int v73; // ecx
  volatile unsigned int v74; // r10d
  int v75; // edi
  int v76; // edi
  int v77; // edi
  int v78; // edi
  int v79; // edi
  int v80; // edi
  int v81; // ecx
  volatile unsigned int v82; // ett
  int v83; // ett
  __int64 v84; // r8
  _OWORD *v85; // rcx
  __int64 v86; // r9
  _OWORD *v87; // rax
  _OWORD *v88; // rdx
  __int128 v89; // xmm1
  __int64 v90; // r9
  __int128 v91; // xmm1
  _OWORD *v92; // rdx
  _OWORD *v93; // rcx
  __int128 v94; // xmm1
  _OWORD *v95; // rax
  __int128 v96; // xmm1
  char v98; // al
  __int64 v99; // rax
  struct PDEV *v100; // r8
  struct PDEV *v101; // rdx
  struct PDEV *v102; // rcx
  __int64 v103; // r8
  struct PDEV **v104; // rcx
  unsigned int v105; // r8d
  unsigned int v106; // r8d
  unsigned int v107; // r8d
  unsigned int v108; // r8d
  unsigned int v109; // r8d
  unsigned int v110; // r8d
  unsigned int v111; // r8d
  int v112; // r10d
  struct SURFACE *v113; // [rsp+48h] [rbp-49h]
  struct SURFACE *v114; // [rsp+48h] [rbp-49h]
  __int64 v115; // [rsp+50h] [rbp-41h]
  int v116; // [rsp+58h] [rbp-39h]
  __int64 v117; // [rsp+60h] [rbp-31h]
  struct PDEV *v118; // [rsp+68h] [rbp-29h] BYREF
  struct PDEV *v119; // [rsp+70h] [rbp-21h] BYREF
  int v120; // [rsp+78h] [rbp-19h]
  int v121; // [rsp+7Ch] [rbp-15h]
  __int64 v122; // [rsp+80h] [rbp-11h]
  struct SURFACE *v123; // [rsp+88h] [rbp-9h]
  __int64 v124; // [rsp+90h] [rbp-1h]
  __int64 v125; // [rsp+98h] [rbp+7h]
  struct tagSIZE v126; // [rsp+A0h] [rbp+Fh]
  void *v127; // [rsp+A8h] [rbp+17h]
  __int64 v128; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v129; // [rsp+B8h] [rbp+27h] BYREF
  int v130; // [rsp+110h] [rbp+7Fh]

  v6 = 0;
  if ( !(unsigned int)bDynamicMatchEnoughForModeChange((HDEV)a1, (HDEV)a2) )
    return v6;
  v127 = PALLOCMEM2(0x840uLL, 0x706D7447u, 0);
  v7 = (__int64)v127;
  if ( !v127 )
    return v6;
  v8 = *((_DWORD *)a2 + 10) & 0x400;
  v118 = a1;
  v120 = v8;
  v9 = *((_DWORD *)a1 + 10) & 0x400;
  v119 = a2;
  v121 = v9;
  if ( (int)IsvDisableSynchronizeSupported() >= 0 )
  {
    vDisableSynchronize(a2);
    vDisableSynchronize(a1);
  }
  v116 = *((_DWORD *)a2 + 540) * *((_DWORD *)a2 + 541);
  v130 = *((_DWORD *)a1 + 540) * *((_DWORD *)a1 + 541);
  if ( !(unsigned int)bDynamicProcessAllDriverRealizations(a2, 0LL, 1LL)
    || !(unsigned int)bDynamicProcessAllDriverRealizations(a1, a2, a3) )
  {
    goto LABEL_92;
  }
  v10 = 1;
  v11 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v118, &v128);
  v123 = (struct SURFACE *)*((_QWORD *)a1 + 319);
  v12 = *v11;
  v124 = *((_QWORD *)a1 + 226);
  v122 = *((_QWORD *)a1 + 225);
  v13 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v119, &v129);
  v15 = (struct SURFACE *)*((_QWORD *)a2 + 319);
  v113 = v15;
  v16 = *v13;
  v125 = *((_QWORD *)a2 + 226);
  v117 = *((_QWORD *)a2 + 225);
  v126 = v16;
  if ( v16.cx < v12.cx || (cy = (unsigned int)v12.cy, v16.cy < v12.cy) )
  {
    v98 = bDynamicIntersectVisRect(v14, v16);
    v15 = v113;
    cy = (unsigned int)v12.cy;
    v10 = v98 & 1;
  }
  if ( v12.cx < v16.cx || (int)cy < v126.cy )
    v10 &= bDynamicIntersectVisRect(v15, v12);
  v18 = *((_QWORD *)a2 + 343);
  if ( v18 && v18 == *((_QWORD *)a1 + 343) && *((_QWORD *)a2 + 224) == *((_QWORD *)a1 + 224) )
  {
    if ( !v10 )
      goto LABEL_92;
    v10 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 343))(v122, v117);
  }
  if ( !v10 )
    goto LABEL_92;
  v19 = 0LL;
  while ( 1 )
  {
    LOBYTE(cy) = 1;
    Objt = HmgSafeNextObjt(v19, cy);
    v21 = Objt;
    if ( !Objt )
      break;
    v22 = (*(_DWORD *)(Objt + 36) & 0x2000) == 0;
    v19 = *(_QWORD *)Objt;
    v115 = v19;
    if ( v22 )
    {
      v23 = *(struct SURFACE **)(v21 + 496);
      if ( v23 == v123 )
      {
        DC::pSurface((DC *)v21, v113);
        *(struct tagSIZE *)(v21 + 512) = v16;
LABEL_26:
        *(_DWORD *)(v21 + 316) |= 0xFu;
        goto LABEL_18;
      }
      if ( v23 == v113 )
      {
        DC::pSurface((DC *)v21, v123);
        *(struct tagSIZE *)(v21 + 512) = v12;
        goto LABEL_26;
      }
LABEL_18:
      cy = *(unsigned int *)(v21 + 36);
      if ( (cy & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v21 + 496) + 112LL) & 0x200) != 0 )
        LODWORD(cy) = cy | 0x8000;
      else
        LODWORD(cy) = cy & 0xFFFF7FFF;
      v24 = *(_QWORD *)(v21 + 24);
      v25 = v122;
      *(_DWORD *)(v21 + 36) = cy;
      if ( v24 == v25 )
      {
        *(_QWORD *)(v21 + 24) = v117;
        *(_DWORD *)(v21 + 72) = *((_DWORD *)a2 + 456);
        v26 = *((_DWORD *)a2 + 532);
        goto LABEL_22;
      }
      v22 = v24 == v117;
      v19 = v115;
      if ( v22 )
      {
        *(_QWORD *)(v21 + 24) = v25;
        *(_DWORD *)(v21 + 72) = *((_DWORD *)a1 + 456);
        v26 = *((_DWORD *)a1 + 532);
LABEL_22:
        *(_DWORD *)(v21 + 76) = v26;
        v19 = v115;
      }
    }
  }
  v7 = (__int64)v127;
  v27 = 0LL;
  v28 = v113;
  v29 = v123;
  while ( 1 )
  {
    LOBYTE(cy) = 5;
    v30 = (struct SURFACE **)HmgSafeNextObjt(v27, cy);
    v32 = v30;
    if ( !v30 )
      break;
    v27 = *v30;
    v33 = v30[6];
    v114 = v27;
    if ( v33 == a1 )
    {
      v35 = *((_DWORD *)v32 + 28);
      if ( (v35 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v32 + 29) & 0x2001) == 0x2001 )
        {
          v99 = WdLogNewEntry5_WdAssertion(v27, 8193LL, v31);
          WdLogEvent5_WdAssertion(v99);
          v27 = v114;
          v32[6] = a2;
        }
        if ( v130 != v116 && *((_DWORD *)v32 + 24) == *((_DWORD *)v29 + 24) )
        {
          v100 = a2;
          v101 = a1;
          goto LABEL_105;
        }
      }
      else if ( (v35 & 0x300000) == 0x200000 )
      {
        v32[6] = a2;
      }
    }
    else if ( v33 == a2 )
    {
      v34 = *((_DWORD *)v32 + 28);
      if ( (v34 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v32 + 29) & 0x2001) == 0x2001 )
          v32[6] = a1;
        if ( v130 != v116 && *((_DWORD *)v32 + 24) == *((_DWORD *)v28 + 24) )
        {
          v100 = a1;
          v101 = a2;
LABEL_105:
          vDynamicSwitchPalettes((struct SURFACE *)v32, v101, v100);
          v27 = v114;
        }
      }
      else if ( (v34 & 0x300000) == 0x200000 )
      {
        v32[6] = a1;
      }
    }
  }
  v36 = 0LL;
  while ( 1 )
  {
    LOBYTE(cy) = 28;
    v37 = (__int64 *)HmgSafeNextObjt(v36, cy);
    if ( !v37 )
      break;
    v102 = (struct PDEV *)v37[5];
    v36 = *v37;
    if ( v102 == a1 )
    {
      v37[5] = (__int64)a2;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v119);
      v104 = &v118;
      goto LABEL_112;
    }
    if ( v102 == a2 )
    {
      v37[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v118);
      v104 = &v119;
LABEL_112:
      PDEVOBJ::vUnreferencePdev(v104, 0, v103);
    }
  }
  vChangeWndObjs(v29, (HDEV)a1, v28, (HDEV)a2);
  v38 = HmgShareLockEx(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16, 0);
  *(_QWORD *)(v7 + 976) = v7 + 544;
  v39 = (struct OBJECT *)v38;
  v40 = v125;
  *(_DWORD *)(v7 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
  v41 = *(_QWORD *)(v7 + 976);
  *(_DWORD *)(v7 + 120) = 0;
  *(_QWORD *)(v41 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush((int *)a1 + 386, v7, (__int64)v39, (__int64)ppalDefault, v40, (__int64)v28, 1u);
  EBRUSHOBJ::vInitBrush((int *)a2 + 386, v7, (__int64)v39, (__int64)ppalDefault, v124, (__int64)v29, 1u);
  HmgDecrementShareReferenceCountEx(v39, 0LL);
  *((_QWORD *)a2 + 226) = v124;
  *((_QWORD *)a2 + 225) = v122;
  v42 = v125;
  *((_QWORD *)a2 + 319) = v29;
  *((_QWORD *)a1 + 226) = v42;
  *((_QWORD *)a1 + 225) = v117;
  *((_QWORD *)a1 + 319) = v28;
  v43 = *((_DWORD *)v29 + 28);
  v44 = *((_DWORD *)v28 + 28);
  if ( (v43 & 0x10000000) != 0 )
  {
    *((_DWORD *)v28 + 28) = v44 | 0x10000000;
    if ( a1 != (struct PDEV *)-88LL
      && ((*((_DWORD *)a1 + 45) & 0x10000000) != 0 || (*((_DWORD *)a1 + 47) & 0x10000000) != 0) )
    {
      v45 = (char *)a2 + 88;
LABEL_51:
      if ( v45 )
      {
        *((_DWORD *)v45 + 23) |= 0x10000000u;
        *((_DWORD *)v45 + 25) |= 0x10000000u;
      }
    }
  }
  else if ( (v44 & 0x10000000) != 0 )
  {
    *((_DWORD *)v29 + 28) = v43 | 0x10000000;
    if ( a2 != (struct PDEV *)-88LL
      && ((*((_DWORD *)a2 + 45) & 0x10000000) != 0 || (*((_DWORD *)a2 + 47) & 0x10000000) != 0) )
    {
      v45 = (char *)a1 + 88;
      goto LABEL_51;
    }
  }
  v46 = (_OWORD *)((char *)a2 + 1824);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 224);
  v47 = 2LL;
  v48 = (_OWORD *)v7;
  *((_QWORD *)a2 + 224) = *((_QWORD *)a1 + 224);
  v49 = 2LL;
  *((_QWORD *)a1 + 224) = *(_QWORD *)v7;
  v50 = (_OWORD *)((char *)a2 + 1824);
  do
  {
    *v48 = *v50;
    v48[1] = v50[1];
    v48[2] = v50[2];
    v48[3] = v50[3];
    v48[4] = v50[4];
    v48[5] = v50[5];
    v48[6] = v50[6];
    v48 += 8;
    v51 = v50[7];
    v50 += 8;
    *(v48 - 1) = v51;
    --v49;
  }
  while ( v49 );
  v52 = 2LL;
  *v48 = *v50;
  v48[1] = v50[1];
  v48[2] = v50[2];
  *((_QWORD *)v48 + 6) = *((_QWORD *)v50 + 6);
  v53 = (_OWORD *)((char *)a1 + 1824);
  v54 = (_OWORD *)((char *)a1 + 1824);
  do
  {
    *v46 = *v54;
    v46[1] = v54[1];
    v46[2] = v54[2];
    v46[3] = v54[3];
    v46[4] = v54[4];
    v46[5] = v54[5];
    v46[6] = v54[6];
    v46 += 8;
    v55 = v54[7];
    v54 += 8;
    *(v46 - 1) = v55;
    --v52;
  }
  while ( v52 );
  *v46 = *v54;
  v46[1] = v54[1];
  v46[2] = v54[2];
  *((_QWORD *)v46 + 6) = *((_QWORD *)v54 + 6);
  v56 = (_OWORD *)v7;
  v57 = 2LL;
  do
  {
    *v53 = *v56;
    v53[1] = v56[1];
    v53[2] = v56[2];
    v53[3] = v56[3];
    v53[4] = v56[4];
    v53[5] = v56[5];
    v53[6] = v56[6];
    v53 += 8;
    v58 = v56[7];
    v56 += 8;
    *(v53 - 1) = v58;
    --v57;
  }
  while ( v57 );
  v59 = 2LL;
  *v53 = *v56;
  v53[1] = v56[1];
  v53[2] = v56[2];
  *((_QWORD *)v53 + 6) = *((_QWORD *)v56 + 6);
  v60 = (_OWORD *)((char *)a2 + 2136);
  v61 = (_OWORD *)((char *)a2 + 2136);
  v62 = (_OWORD *)v7;
  do
  {
    *v62 = *v61;
    v62[1] = v61[1];
    v62[2] = v61[2];
    v62[3] = v61[3];
    v62[4] = v61[4];
    v62[5] = v61[5];
    v62[6] = v61[6];
    v62 += 8;
    v63 = v61[7];
    v61 += 8;
    *(v62 - 1) = v63;
    --v59;
  }
  while ( v59 );
  v64 = 2LL;
  *v62 = *v61;
  v62[1] = v61[1];
  v62[2] = v61[2];
  v65 = v61[3];
  v66 = (_OWORD *)((char *)a1 + 2136);
  v62[3] = v65;
  v67 = (_OWORD *)((char *)a1 + 2136);
  do
  {
    *v60 = *v67;
    v60[1] = v67[1];
    v60[2] = v67[2];
    v60[3] = v67[3];
    v60[4] = v67[4];
    v60[5] = v67[5];
    v60[6] = v67[6];
    v60 += 8;
    v68 = v67[7];
    v67 += 8;
    *(v60 - 1) = v68;
    --v64;
  }
  while ( v64 );
  *v60 = *v67;
  v60[1] = v67[1];
  v60[2] = v67[2];
  v60[3] = v67[3];
  v69 = (_OWORD *)v7;
  do
  {
    *v66 = *v69;
    v66[1] = v69[1];
    v66[2] = v69[2];
    v66[3] = v69[3];
    v66[4] = v69[4];
    v66[5] = v69[5];
    v66[6] = v69[6];
    v66 += 8;
    v70 = v69[7];
    v69 += 8;
    *(v66 - 1) = v70;
    --v47;
  }
  while ( v47 );
  *v66 = *v69;
  v66[1] = v69[1];
  v66[2] = v69[2];
  v66[3] = v69[3];
  *(_OWORD *)v7 = *(_OWORD *)((char *)a2 + 2456);
  *(_OWORD *)(v7 + 16) = *(_OWORD *)((char *)a2 + 2472);
  *(_OWORD *)(v7 + 32) = *(_OWORD *)((char *)a2 + 2488);
  *(_OWORD *)(v7 + 48) = *(_OWORD *)((char *)a2 + 2504);
  *(_OWORD *)(v7 + 64) = *(_OWORD *)((char *)a2 + 2520);
  *(_OWORD *)(v7 + 80) = *(_OWORD *)((char *)a2 + 2536);
  *(_OWORD *)((char *)a2 + 2456) = *(_OWORD *)((char *)a1 + 2456);
  *(_OWORD *)((char *)a2 + 2472) = *(_OWORD *)((char *)a1 + 2472);
  *(_OWORD *)((char *)a2 + 2488) = *(_OWORD *)((char *)a1 + 2488);
  *(_OWORD *)((char *)a2 + 2504) = *(_OWORD *)((char *)a1 + 2504);
  *(_OWORD *)((char *)a2 + 2520) = *(_OWORD *)((char *)a1 + 2520);
  *(_OWORD *)((char *)a2 + 2536) = *(_OWORD *)((char *)a1 + 2536);
  *(_OWORD *)((char *)a1 + 2456) = *(_OWORD *)v7;
  *(_OWORD *)((char *)a1 + 2472) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)((char *)a1 + 2488) = *(_OWORD *)(v7 + 32);
  *(_OWORD *)((char *)a1 + 2504) = *(_OWORD *)(v7 + 48);
  *(_OWORD *)((char *)a1 + 2520) = *(_OWORD *)(v7 + 64);
  *(_OWORD *)((char *)a1 + 2536) = *(_OWORD *)(v7 + 80);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 320);
  *((_QWORD *)a2 + 320) = *((_QWORD *)a1 + 320);
  *((_QWORD *)a1 + 320) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 321);
  *((_QWORD *)a2 + 321) = *((_QWORD *)a1 + 321);
  *((_QWORD *)a1 + 321) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 322);
  *((_QWORD *)a2 + 322) = *((_QWORD *)a1 + 322);
  *((_QWORD *)a1 + 322) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 323);
  *((_QWORD *)a2 + 323) = *((_QWORD *)a1 + 323);
  *((_QWORD *)a1 + 323) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 324);
  *((_QWORD *)a2 + 324) = *((_QWORD *)a1 + 324);
  *((_QWORD *)a1 + 324) = *(_QWORD *)v7;
  *(_DWORD *)v7 = *((_DWORD *)a2 + 888);
  *((_DWORD *)a2 + 888) = *((_DWORD *)a1 + 888);
  *((_DWORD *)a1 + 888) = *(_DWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 325);
  v71 = (int *)((char *)a2 + 40);
  v72 = (volatile unsigned int *)((char *)a1 + 40);
  *((_QWORD *)a2 + 325) = *((_QWORD *)a1 + 325);
  *((_QWORD *)a1 + 325) = *(_QWORD *)v7;
  *(_DWORD *)v7 = *((_DWORD *)a2 + 652);
  *((_DWORD *)a2 + 652) = *((_DWORD *)a1 + 652);
  *((_DWORD *)a1 + 652) = *(_DWORD *)v7;
  *(_DWORD *)v7 = *((_DWORD *)a2 + 653);
  *((_DWORD *)a2 + 653) = *((_DWORD *)a1 + 653);
  *((_DWORD *)a1 + 653) = *(_DWORD *)v7;
  v73 = *((_DWORD *)a2 + 10);
  v74 = *((_DWORD *)a1 + 10);
  v75 = v74 & 0x20000;
  if ( (v74 & 0x20000) != (v73 & 0x20000) )
  {
    SETFLAG(v73 & 0x20000, (volatile unsigned int *)a1 + 10, 0x20000u);
    SETFLAG(v75, (volatile unsigned int *)a2 + 10, v105);
    v73 = *v71;
    v74 = *v72;
  }
  v76 = v74 & 0x1000000;
  if ( (v74 & 0x1000000) != (v73 & 0x1000000) )
  {
    SETFLAG(v73 & 0x1000000, v72, 0x1000000u);
    SETFLAG(v76, (volatile unsigned int *)a2 + 10, v106);
    v73 = *v71;
    v74 = *v72;
  }
  v77 = v74 & 0x20000000;
  if ( (v74 & 0x20000000) != (v73 & 0x20000000) )
  {
    SETFLAG(v73 & 0x20000000, v72, 0x20000000u);
    SETFLAG(v77, (volatile unsigned int *)a2 + 10, v107);
    v73 = *v71;
    v74 = *v72;
  }
  v78 = v74 & 0x2000000;
  if ( (v74 & 0x2000000) != (v73 & 0x2000000) )
  {
    SETFLAG(v73 & 0x2000000, v72, 0x2000000u);
    SETFLAG(v78, (volatile unsigned int *)a2 + 10, v108);
    v73 = *v71;
    v74 = *v72;
  }
  v79 = v74 & 0x8000000;
  if ( (v74 & 0x8000000) != (v73 & 0x8000000) )
  {
    SETFLAG(v73 & 0x8000000, v72, 0x8000000u);
    SETFLAG(v79, (volatile unsigned int *)a2 + 10, v109);
    v73 = *v71;
    v74 = *v72;
  }
  v80 = v74 & 0x4000000;
  if ( (v74 & 0x4000000) != (v73 & 0x4000000) )
  {
    SETFLAG(v73 & 0x4000000, v72, 0x4000000u);
    SETFLAG(v80, (volatile unsigned int *)a2 + 10, v110);
    v73 = *v71;
    v74 = *v72;
  }
  v81 = v73 & 0x40000000;
  if ( (v74 & 0x40000000) != v81 )
  {
    SETFLAG(v81, v72, 0x40000000u);
    SETFLAG(v112, (volatile unsigned int *)a2 + 10, v111);
  }
  _m_prefetchw((const void *)v72);
  do
    v82 = *v72;
  while ( v82 != _InterlockedCompareExchange((volatile signed __int32 *)v72, *v72 & 0xEFFFFFFF, *v72) );
  _m_prefetchw(v71);
  do
    v83 = *v71;
  while ( v83 != _InterlockedCompareExchange(v71, *v71 & 0xEFFFFFFF, *v71) );
  *((_QWORD *)a1 + 4) = 0LL;
  v84 = 6LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v85 = (_OWORD *)v7;
  v86 = 6LL;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 215);
  *((_QWORD *)a2 + 215) = *((_QWORD *)a1 + 215);
  *((_QWORD *)a1 + 215) = *(_QWORD *)v7;
  *(_OWORD *)v7 = *((_OWORD *)a2 + 91);
  *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 92);
  *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 93);
  *((_OWORD *)a2 + 91) = *((_OWORD *)a1 + 91);
  *((_OWORD *)a2 + 92) = *((_OWORD *)a1 + 92);
  *((_OWORD *)a2 + 93) = *((_OWORD *)a1 + 93);
  *((_OWORD *)a1 + 91) = *(_OWORD *)v7;
  *((_OWORD *)a1 + 92) = *(_OWORD *)(v7 + 16);
  *((_OWORD *)a1 + 93) = *(_OWORD *)(v7 + 32);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 179);
  *((_QWORD *)a2 + 179) = *((_QWORD *)a1 + 179);
  *((_QWORD *)a1 + 179) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 180);
  *((_QWORD *)a2 + 180) = *((_QWORD *)a1 + 180);
  *((_QWORD *)a1 + 180) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 181);
  *((_QWORD *)a2 + 181) = *((_QWORD *)a1 + 181);
  *((_QWORD *)a1 + 181) = *(_QWORD *)v7;
  v87 = (_OWORD *)((char *)a2 + 2688);
  v88 = (_OWORD *)((char *)a2 + 2688);
  do
  {
    *v85 = *v88;
    v85[1] = v88[1];
    v85[2] = v88[2];
    v85[3] = v88[3];
    v85[4] = v88[4];
    v85[5] = v88[5];
    v85[6] = v88[6];
    v85 += 8;
    v89 = v88[7];
    v88 += 8;
    *(v85 - 1) = v89;
    --v86;
  }
  while ( v86 );
  v90 = 6LL;
  *v85 = *v88;
  v85[1] = v88[1];
  v85[2] = v88[2];
  v91 = v88[3];
  v92 = (_OWORD *)((char *)a1 + 2688);
  v85[3] = v91;
  v93 = (_OWORD *)((char *)a1 + 2688);
  do
  {
    *v87 = *v93;
    v87[1] = v93[1];
    v87[2] = v93[2];
    v87[3] = v93[3];
    v87[4] = v93[4];
    v87[5] = v93[5];
    v87[6] = v93[6];
    v87 += 8;
    v94 = v93[7];
    v93 += 8;
    *(v87 - 1) = v94;
    --v90;
  }
  while ( v90 );
  *v87 = *v93;
  v87[1] = v93[1];
  v87[2] = v93[2];
  v87[3] = v93[3];
  v95 = (_OWORD *)v7;
  do
  {
    *v92 = *v95;
    v92[1] = v95[1];
    v92[2] = v95[2];
    v92[3] = v95[3];
    v92[4] = v95[4];
    v92[5] = v95[5];
    v92[6] = v95[6];
    v92 += 8;
    v96 = v95[7];
    v95 += 8;
    *(v92 - 1) = v96;
    --v84;
  }
  while ( v84 );
  *v92 = *v95;
  v92[1] = v95[1];
  v92[2] = v95[2];
  v92[3] = v95[3];
  *(_QWORD *)v7 = *((_QWORD *)a2 + 216);
  *((_QWORD *)a2 + 216) = *((_QWORD *)a1 + 216);
  *((_QWORD *)a1 + 216) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 217);
  *((_QWORD *)a2 + 217) = *((_QWORD *)a1 + 217);
  *((_QWORD *)a1 + 217) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 219);
  *((_QWORD *)a2 + 219) = *((_QWORD *)a1 + 219);
  *((_QWORD *)a1 + 219) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 220);
  *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
  *((_QWORD *)a1 + 220) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 221);
  *((_QWORD *)a2 + 221) = *((_QWORD *)a1 + 221);
  *((_QWORD *)a1 + 221) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 222);
  *((_QWORD *)a2 + 222) = *((_QWORD *)a1 + 222);
  *((_QWORD *)a1 + 222) = *(_QWORD *)v7;
  *(_DWORD *)v7 = *((_DWORD *)a2 + 661);
  *((_DWORD *)a2 + 661) = *((_DWORD *)a1 + 661);
  *((_DWORD *)a1 + 661) = *(_DWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 331);
  *((_QWORD *)a2 + 331) = *((_QWORD *)a1 + 331);
  *((_QWORD *)a1 + 331) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 332);
  *((_QWORD *)a2 + 332) = *((_QWORD *)a1 + 332);
  *((_QWORD *)a1 + 332) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 334);
  *((_QWORD *)a2 + 334) = *((_QWORD *)a1 + 334);
  *((_QWORD *)a1 + 334) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 335);
  *((_QWORD *)a2 + 335) = *((_QWORD *)a1 + 335);
  *((_QWORD *)a1 + 335) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 333);
  *((_QWORD *)a2 + 333) = *((_QWORD *)a1 + 333);
  *((_QWORD *)a1 + 333) = *(_QWORD *)v7;
  (*((void (__fastcall **)(_QWORD, struct PDEV *))a2 + 337))(*((_QWORD *)a2 + 225), a2);
  (*((void (__fastcall **)(_QWORD, struct PDEV *))a1 + 337))(*((_QWORD *)a1 + 225), a1);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v118, v120);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v119, v121);
  vResetSurfacePalette((HDEV)a1);
  vResetSurfacePalette((HDEV)a2);
  if ( (int)IsvSpDynamicModeChangeSupported() >= 0 )
    vSpDynamicModeChange(a1, a2);
  ++gcModeChanges;
  v6 = 1;
LABEL_92:
  Win32FreePool(v7);
  vEnableSynchronize(a2);
  vEnableSynchronize(a1);
  return v6;
}
