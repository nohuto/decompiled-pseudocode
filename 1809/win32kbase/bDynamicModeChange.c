/*
 * XREFs of bDynamicModeChange @ 0x1C00FF45C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00137F0 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C001381C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HmgSafeNextObjt @ 0x1C001FB50 (HmgSafeNextObjt.c)
 *     HmgShareLock @ 0x1C0022B50 (HmgShareLock.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C003DF70 (bDynamicProcessAllDriverRealizations.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003E228 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C003E2C4 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003F3D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C005D300 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C0090748 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00933B0 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C0093750 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00AB9D8 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00ABA2C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00FF1B0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00FF2A0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, int a3)
{
  unsigned int v6; // r13d
  __int64 v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // r12d
  struct tagSIZE *v11; // rax
  struct tagSIZE v12; // rbx
  struct tagSIZE *v13; // rax
  struct SURFACE *v14; // r9
  int v15; // r11d
  struct SURFACE *v16; // r8
  struct tagSIZE v17; // rdi
  unsigned __int64 v18; // rcx
  int v19; // eax
  LONG v20; // edx
  LONG v21; // r10d
  char v22; // al
  __int64 v23; // r8
  __int64 Objt; // r12
  __int64 v25; // r8
  struct SURFACE *v26; // rcx
  int v27; // edx
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r8
  struct SURFACE *v35; // rdi
  int v36; // r12d
  HDEV v37; // rax
  int v38; // eax
  __int64 v39; // rax
  HDEV v40; // r8
  HDEV v41; // rdx
  int v42; // eax
  unsigned int v43; // ecx
  HDEV v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r8
  HDEV *v47; // rcx
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  struct SURFACE *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rax
  int v56; // ecx
  int v57; // eax
  HDEV v58; // rax
  HDEV v59; // rdx
  __int64 v60; // r8
  _OWORD *v61; // rcx
  __int64 v62; // r9
  HDEV v63; // rax
  __int128 v64; // xmm1
  __int64 v65; // r9
  HDEV v66; // rcx
  HDEV v67; // rax
  __int128 v68; // xmm1
  _OWORD *v69; // rax
  __int64 v70; // rdx
  __int128 v71; // xmm1
  __int64 v72; // r9
  HDEV v73; // rax
  HDEV v74; // rdx
  _OWORD *v75; // rcx
  __int128 v76; // xmm1
  __int64 v77; // r9
  __int128 v78; // xmm1
  HDEV v79; // rdx
  HDEV v80; // rcx
  __int128 v81; // xmm1
  _OWORD *v82; // rax
  __int128 v83; // xmm1
  HDEV v84; // rbx
  HDEV v85; // r11
  signed __int32 v86; // ecx
  volatile unsigned int v87; // r10d
  int v88; // edi
  int v89; // r8d
  int v90; // edi
  int v91; // r8d
  int v92; // edi
  int v93; // r8d
  int v94; // edi
  int v95; // r8d
  int v96; // edi
  int v97; // r8d
  int v98; // edi
  int v99; // r8d
  int v100; // ecx
  int v101; // r8d
  int v102; // r10d
  volatile unsigned int v103; // ett
  signed __int32 v104; // ett
  __int64 v105; // r8
  _OWORD *v106; // rcx
  __int64 v107; // r9
  HDEV v108; // rax
  HDEV v109; // rdx
  __int128 v110; // xmm1
  __int64 v111; // r9
  __int128 v112; // xmm1
  HDEV v113; // rdx
  HDEV v114; // rcx
  __int128 v115; // xmm1
  _OWORD *v116; // rax
  __int128 v117; // xmm1
  LONG v119; // [rsp+48h] [rbp-79h]
  int v120; // [rsp+4Ch] [rbp-75h]
  struct SURFACE *v121; // [rsp+50h] [rbp-71h]
  __int64 v122; // [rsp+58h] [rbp-69h]
  HDEV v123; // [rsp+60h] [rbp-61h] BYREF
  HDEV v124; // [rsp+68h] [rbp-59h] BYREF
  int v125; // [rsp+70h] [rbp-51h]
  int v126; // [rsp+74h] [rbp-4Dh]
  int v127; // [rsp+78h] [rbp-49h]
  struct SURFACE *v128; // [rsp+80h] [rbp-41h]
  __int64 v129; // [rsp+88h] [rbp-39h]
  unsigned __int64 v130; // [rsp+90h] [rbp-31h]
  unsigned __int64 v131; // [rsp+98h] [rbp-29h]
  void *v132; // [rsp+A0h] [rbp-21h]
  __int64 v133; // [rsp+A8h] [rbp-19h]
  __int64 v134; // [rsp+B0h] [rbp-11h]
  __int64 v135; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v136; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v137[6]; // [rsp+C8h] [rbp+7h] BYREF
  LONG cx; // [rsp+140h] [rbp+7Fh]
  __int64 v139; // [rsp+140h] [rbp+7Fh]
  __int64 v140; // [rsp+140h] [rbp+7Fh]

  v6 = 0;
  if ( (unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
  {
    v132 = PALLOCMEM2(0x868uLL, 1886221383LL, 0);
    v7 = (__int64)v132;
    if ( v132 )
    {
      v8 = (_DWORD)a2[10] & 0x400;
      v123 = a1;
      v126 = v8;
      v9 = (_DWORD)a1[10] & 0x400;
      v124 = a2;
      v127 = v9;
      if ( (int)IsvDisableSynchronizeSupported() >= 0 )
      {
        vDisableSynchronize(a2);
        vDisableSynchronize(a1);
      }
      v125 = *((_DWORD *)a2 + 540) * *((_DWORD *)a2 + 541);
      v120 = *((_DWORD *)a1 + 540) * *((_DWORD *)a1 + 541);
      if ( (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a2, 0LL, 1)
        && (unsigned int)bDynamicProcessAllDriverRealizations((__int64)a1, (__int64)a2, a3) )
      {
        v10 = 1;
        v11 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v123, &v135);
        v128 = (struct SURFACE *)*((_QWORD *)a1 + 319);
        v12 = *v11;
        v134 = *((_QWORD *)a1 + 226);
        v129 = *((_QWORD *)a1 + 225);
        v13 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v124, &v136);
        v16 = (struct SURFACE *)*((_QWORD *)a2 + 319);
        v121 = v16;
        cx = v12.cx;
        v17 = *v13;
        v133 = *((_QWORD *)a2 + 226);
        v122 = *((_QWORD *)a2 + 225);
        v130 = HIDWORD(*(unsigned __int64 *)&v12);
        v18 = HIDWORD(*(unsigned __int64 *)&v17);
        v119 = v17.cx;
        v131 = HIDWORD(*(unsigned __int64 *)&v17);
        if ( v17.cx < v12.cx
          || (cx = v12.cx,
              v19 = v15,
              v130 = (unsigned int)v15,
              v20 = v12.cx,
              v119 = v17.cx,
              v21 = v17.cx,
              v131 = HIDWORD(*(unsigned __int64 *)&v17),
              v17.cy < v15) )
        {
          v22 = bDynamicIntersectVisRect(v14, v17);
          v20 = cx;
          v21 = v119;
          v10 = v22 & 1;
          v19 = v130;
          LODWORD(v18) = v131;
          v16 = v121;
        }
        if ( v20 < v21 || v19 < (int)v18 )
          v10 &= bDynamicIntersectVisRect(v16, v12);
        v23 = *((_QWORD *)a2 + 343);
        if ( v23 && v23 == *((_QWORD *)a1 + 343) && *((_QWORD *)a2 + 224) == *((_QWORD *)a1 + 224) )
        {
          if ( !v10 )
            goto LABEL_119;
          v10 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 343))(v129, v122);
        }
        if ( v10 )
        {
          Objt = HmgSafeNextObjt(0, 1);
          if ( !Objt )
            goto LABEL_37;
          while ( 1 )
          {
            v25 = *(_QWORD *)Objt;
            v139 = *(_QWORD *)Objt;
            if ( (*(_DWORD *)(Objt + 36) & 0x2000) != 0 )
              goto LABEL_35;
            v26 = *(struct SURFACE **)(Objt + 496);
            if ( v26 == v128 )
            {
              DC::pSurface((DC *)Objt, v121);
              *(struct tagSIZE *)(Objt + 512) = v17;
            }
            else
            {
              if ( v26 != v121 )
                goto LABEL_26;
              DC::pSurface((DC *)Objt, v128);
              *(struct tagSIZE *)(Objt + 512) = v12;
            }
            LODWORD(v25) = v139;
            *(_DWORD *)(Objt + 316) |= 0xFu;
LABEL_26:
            v27 = *(_DWORD *)(Objt + 36);
            if ( (v27 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(Objt + 496) + 112LL) & 0x200) != 0 )
              v28 = v27 | 0x8000;
            else
              v28 = v27 & 0xFFFF7FFF;
            v29 = *(_QWORD *)(Objt + 24);
            v30 = v129;
            *(_DWORD *)(Objt + 36) = v28;
            if ( v29 == v30 )
            {
              *(_QWORD *)(Objt + 24) = v122;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a2[456];
              v31 = *((_DWORD *)a2 + 532);
LABEL_34:
              *(_DWORD *)(Objt + 76) = v31;
              goto LABEL_35;
            }
            if ( v29 == v122 )
            {
              *(_QWORD *)(Objt + 24) = v30;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a1[456];
              v31 = *((_DWORD *)a1 + 532);
              goto LABEL_34;
            }
LABEL_35:
            Objt = HmgSafeNextObjt(v25, 1);
            if ( !Objt )
            {
              v7 = (__int64)v132;
LABEL_37:
              v33 = HmgSafeNextObjt(0, 5);
              if ( !v33 )
                goto LABEL_60;
              v35 = v128;
              v36 = v125;
LABEL_39:
              v140 = *(_QWORD *)v33;
              v37 = *(HDEV *)(v33 + 48);
              if ( v37 == a1 )
              {
                v38 = *(_DWORD *)(v33 + 112);
                if ( (v38 & 0x4000000) != 0 )
                {
                  if ( (*(_DWORD *)(v33 + 116) & 0x2001) == 0x2001 )
                  {
                    v39 = WdLogNewEntry5_WdAssertion(8193LL, v32, v34);
                    WdLogEvent5_WdAssertion(v39);
                    *(_QWORD *)(v33 + 48) = a2;
                  }
                  if ( v120 != v36 && *(_DWORD *)(v33 + 96) == *((_DWORD *)v35 + 24) )
                  {
                    v40 = a2;
                    v41 = a1;
                    goto LABEL_55;
                  }
                }
                else if ( (v38 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v33 + 48) = a2;
                }
              }
              else if ( v37 == a2 )
              {
                v42 = *(_DWORD *)(v33 + 112);
                if ( (v42 & 0x4000000) != 0 )
                {
                  if ( (*(_DWORD *)(v33 + 116) & 0x2001) == 0x2001 )
                    *(_QWORD *)(v33 + 48) = a1;
                  if ( v120 != v36 && *(_DWORD *)(v33 + 96) == *((_DWORD *)v121 + 24) )
                  {
                    v40 = a1;
                    v41 = a2;
LABEL_55:
                    vDynamicSwitchPalettes((struct SURFACE *)v33, (struct PDEV *)v41, (struct PDEV *)v40);
                  }
                }
                else if ( (v42 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v33 + 48) = a1;
                }
              }
              v33 = HmgSafeNextObjt(v140, 5);
              if ( !v33 )
              {
                v7 = (__int64)v132;
LABEL_60:
                v43 = 0;
LABEL_67:
                v48 = (__int64 *)HmgSafeNextObjt(v43, 28);
                if ( !v48 )
                {
                  v51 = v128;
                  vChangeWndObjs(v128, (struct PDEV *)a1, v121, (struct PDEV *)a2);
                  v52 = HmgShareLock((unsigned int)ghbrGrayPattern, 16);
                  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>((unsigned __int64)v137, v52);
                  *(_QWORD *)(v7 + 976) = v7 + 544;
                  *(_DWORD *)(v7 + 728) = 0;
                  *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
                  v53 = *(_QWORD *)(v7 + 976);
                  *(_DWORD *)(v7 + 120) = 0;
                  *(_QWORD *)(v53 + 248) = 0LL;
                  EBRUSHOBJ::vInitBrush((int *)a1 + 386, v7, v137[0], (__int64)ppalDefault, v133, (__int64)v121, 1u);
                  v54 = v134;
                  EBRUSHOBJ::vInitBrush((int *)a2 + 386, v7, v137[0], (__int64)ppalDefault, v134, (__int64)v51, 1u);
                  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>((__int64)v137);
                  *((_QWORD *)a2 + 225) = v129;
                  v55 = v133;
                  *((_QWORD *)a2 + 319) = v51;
                  *((_QWORD *)a2 + 226) = v54;
                  *((_QWORD *)a1 + 226) = v55;
                  *((_QWORD *)a1 + 225) = v122;
                  *((_QWORD *)a1 + 319) = v121;
                  v56 = *((_DWORD *)v51 + 28);
                  v57 = *((_DWORD *)v121 + 28);
                  if ( (v56 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v121 + 28) = v57 | 0x10000000;
                    if ( a1 != (HDEV)-88LL && (((_DWORD)a1[45] & 0x10000000) != 0 || ((_DWORD)a1[47] & 0x10000000) != 0) )
                    {
                      v58 = a2 + 22;
LABEL_78:
                      if ( v58 )
                      {
                        *((_DWORD *)v58 + 23) |= 0x10000000u;
                        *((_DWORD *)v58 + 25) |= 0x10000000u;
                      }
                    }
                  }
                  else if ( (v57 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v51 + 28) = v56 | 0x10000000;
                    if ( a2 != (HDEV)-88LL && (((_DWORD)a2[45] & 0x10000000) != 0 || ((_DWORD)a2[47] & 0x10000000) != 0) )
                    {
                      v58 = a1 + 22;
                      goto LABEL_78;
                    }
                  }
                  v59 = a2 + 456;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 224);
                  v60 = 2LL;
                  v61 = (_OWORD *)v7;
                  *((_QWORD *)a2 + 224) = *((_QWORD *)a1 + 224);
                  v62 = 2LL;
                  *((_QWORD *)a1 + 224) = *(_QWORD *)v7;
                  v63 = a2 + 456;
                  do
                  {
                    *v61 = *(_OWORD *)v63;
                    v61[1] = *((_OWORD *)v63 + 1);
                    v61[2] = *((_OWORD *)v63 + 2);
                    v61[3] = *((_OWORD *)v63 + 3);
                    v61[4] = *((_OWORD *)v63 + 4);
                    v61[5] = *((_OWORD *)v63 + 5);
                    v61[6] = *((_OWORD *)v63 + 6);
                    v61 += 8;
                    v64 = *((_OWORD *)v63 + 7);
                    v63 += 32;
                    *(v61 - 1) = v64;
                    --v62;
                  }
                  while ( v62 );
                  v65 = 2LL;
                  *v61 = *(_OWORD *)v63;
                  v61[1] = *((_OWORD *)v63 + 1);
                  v61[2] = *((_OWORD *)v63 + 2);
                  *((_QWORD *)v61 + 6) = *((_QWORD *)v63 + 6);
                  v66 = a1 + 456;
                  v67 = a1 + 456;
                  do
                  {
                    *(_OWORD *)v59 = *(_OWORD *)v67;
                    *((_OWORD *)v59 + 1) = *((_OWORD *)v67 + 1);
                    *((_OWORD *)v59 + 2) = *((_OWORD *)v67 + 2);
                    *((_OWORD *)v59 + 3) = *((_OWORD *)v67 + 3);
                    *((_OWORD *)v59 + 4) = *((_OWORD *)v67 + 4);
                    *((_OWORD *)v59 + 5) = *((_OWORD *)v67 + 5);
                    *((_OWORD *)v59 + 6) = *((_OWORD *)v67 + 6);
                    v59 += 32;
                    v68 = *((_OWORD *)v67 + 7);
                    v67 += 32;
                    *((_OWORD *)v59 - 1) = v68;
                    --v65;
                  }
                  while ( v65 );
                  *(_OWORD *)v59 = *(_OWORD *)v67;
                  *((_OWORD *)v59 + 1) = *((_OWORD *)v67 + 1);
                  *((_OWORD *)v59 + 2) = *((_OWORD *)v67 + 2);
                  *((_QWORD *)v59 + 6) = *((_QWORD *)v67 + 6);
                  v69 = (_OWORD *)v7;
                  v70 = 2LL;
                  do
                  {
                    *(_OWORD *)v66 = *v69;
                    *((_OWORD *)v66 + 1) = v69[1];
                    *((_OWORD *)v66 + 2) = v69[2];
                    *((_OWORD *)v66 + 3) = v69[3];
                    *((_OWORD *)v66 + 4) = v69[4];
                    *((_OWORD *)v66 + 5) = v69[5];
                    *((_OWORD *)v66 + 6) = v69[6];
                    v66 += 32;
                    v71 = v69[7];
                    v69 += 8;
                    *((_OWORD *)v66 - 1) = v71;
                    --v70;
                  }
                  while ( v70 );
                  v72 = 2LL;
                  *(_OWORD *)v66 = *v69;
                  *((_OWORD *)v66 + 1) = v69[1];
                  *((_OWORD *)v66 + 2) = v69[2];
                  *((_QWORD *)v66 + 6) = *((_QWORD *)v69 + 6);
                  v73 = a2 + 534;
                  v74 = a2 + 534;
                  v75 = (_OWORD *)v7;
                  do
                  {
                    *v75 = *(_OWORD *)v74;
                    v75[1] = *((_OWORD *)v74 + 1);
                    v75[2] = *((_OWORD *)v74 + 2);
                    v75[3] = *((_OWORD *)v74 + 3);
                    v75[4] = *((_OWORD *)v74 + 4);
                    v75[5] = *((_OWORD *)v74 + 5);
                    v75[6] = *((_OWORD *)v74 + 6);
                    v75 += 8;
                    v76 = *((_OWORD *)v74 + 7);
                    v74 += 32;
                    *(v75 - 1) = v76;
                    --v72;
                  }
                  while ( v72 );
                  v77 = 2LL;
                  *v75 = *(_OWORD *)v74;
                  v75[1] = *((_OWORD *)v74 + 1);
                  v75[2] = *((_OWORD *)v74 + 2);
                  v78 = *((_OWORD *)v74 + 3);
                  v79 = a1 + 534;
                  v75[3] = v78;
                  v80 = a1 + 534;
                  do
                  {
                    *(_OWORD *)v73 = *(_OWORD *)v80;
                    *((_OWORD *)v73 + 1) = *((_OWORD *)v80 + 1);
                    *((_OWORD *)v73 + 2) = *((_OWORD *)v80 + 2);
                    *((_OWORD *)v73 + 3) = *((_OWORD *)v80 + 3);
                    *((_OWORD *)v73 + 4) = *((_OWORD *)v80 + 4);
                    *((_OWORD *)v73 + 5) = *((_OWORD *)v80 + 5);
                    *((_OWORD *)v73 + 6) = *((_OWORD *)v80 + 6);
                    v73 += 32;
                    v81 = *((_OWORD *)v80 + 7);
                    v80 += 32;
                    *((_OWORD *)v73 - 1) = v81;
                    --v77;
                  }
                  while ( v77 );
                  *(_OWORD *)v73 = *(_OWORD *)v80;
                  *((_OWORD *)v73 + 1) = *((_OWORD *)v80 + 1);
                  *((_OWORD *)v73 + 2) = *((_OWORD *)v80 + 2);
                  *((_OWORD *)v73 + 3) = *((_OWORD *)v80 + 3);
                  v82 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v79 = *v82;
                    *((_OWORD *)v79 + 1) = v82[1];
                    *((_OWORD *)v79 + 2) = v82[2];
                    *((_OWORD *)v79 + 3) = v82[3];
                    *((_OWORD *)v79 + 4) = v82[4];
                    *((_OWORD *)v79 + 5) = v82[5];
                    *((_OWORD *)v79 + 6) = v82[6];
                    v79 += 32;
                    v83 = v82[7];
                    v82 += 8;
                    *((_OWORD *)v79 - 1) = v83;
                    --v60;
                  }
                  while ( v60 );
                  *(_OWORD *)v79 = *v82;
                  *((_OWORD *)v79 + 1) = v82[1];
                  *((_OWORD *)v79 + 2) = v82[2];
                  *((_OWORD *)v79 + 3) = v82[3];
                  *(_OWORD *)v7 = *(_OWORD *)(a2 + 614);
                  *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 618);
                  *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 622);
                  *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 626);
                  *(_OWORD *)(v7 + 64) = *(_OWORD *)(a2 + 630);
                  *(_OWORD *)(v7 + 80) = *(_OWORD *)(a2 + 634);
                  *(_OWORD *)(a2 + 614) = *(_OWORD *)(a1 + 614);
                  *(_OWORD *)(a2 + 618) = *(_OWORD *)(a1 + 618);
                  *(_OWORD *)(a2 + 622) = *(_OWORD *)(a1 + 622);
                  *(_OWORD *)(a2 + 626) = *(_OWORD *)(a1 + 626);
                  *(_OWORD *)(a2 + 630) = *(_OWORD *)(a1 + 630);
                  *(_OWORD *)(a2 + 634) = *(_OWORD *)(a1 + 634);
                  *(_OWORD *)(a1 + 614) = *(_OWORD *)v7;
                  *(_OWORD *)(a1 + 618) = *(_OWORD *)(v7 + 16);
                  *(_OWORD *)(a1 + 622) = *(_OWORD *)(v7 + 32);
                  *(_OWORD *)(a1 + 626) = *(_OWORD *)(v7 + 48);
                  *(_OWORD *)(a1 + 630) = *(_OWORD *)(v7 + 64);
                  *(_OWORD *)(a1 + 634) = *(_OWORD *)(v7 + 80);
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
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[882];
                  a2[882] = a1[882];
                  *(_DWORD *)(a1 + 882) = *(_DWORD *)(HDEV)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[892];
                  v84 = a2 + 10;
                  v85 = a1 + 10;
                  a2[892] = a1[892];
                  *(_DWORD *)(a1 + 892) = *(_DWORD *)(HDEV)v7;
                  *(_QWORD *)v7 = *((_QWORD *)a2 + 325);
                  *((_QWORD *)a2 + 325) = *((_QWORD *)a1 + 325);
                  *((_QWORD *)a1 + 325) = *(_QWORD *)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[652];
                  a2[652] = a1[652];
                  *(_DWORD *)(a1 + 652) = *(_DWORD *)(HDEV)v7;
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[653];
                  a2[653] = a1[653];
                  *(_DWORD *)(a1 + 653) = *(_DWORD *)(HDEV)v7;
                  v86 = *((_DWORD *)a2 + 10);
                  v87 = *((_DWORD *)a1 + 10);
                  v88 = v87 & 0x20000;
                  if ( (v87 & 0x20000) != (v86 & 0x20000) )
                  {
                    SETFLAG(v86 & 0x20000, (volatile unsigned int *)a1 + 10, 0x20000);
                    SETFLAG(v88, (volatile unsigned int *)a2 + 10, v89);
                    v86 = *(_DWORD *)v84;
                    v87 = *(_DWORD *)v85;
                  }
                  v90 = v87 & 0x1000000;
                  if ( (v87 & 0x1000000) != (v86 & 0x1000000) )
                  {
                    SETFLAG(v86 & 0x1000000, (volatile unsigned int *)v85, 0x1000000);
                    SETFLAG(v90, (volatile unsigned int *)a2 + 10, v91);
                    v86 = *(_DWORD *)v84;
                    v87 = *(_DWORD *)v85;
                  }
                  v92 = v87 & 0x20000000;
                  if ( (v87 & 0x20000000) != (v86 & 0x20000000) )
                  {
                    SETFLAG(v86 & 0x20000000, (volatile unsigned int *)v85, 0x20000000);
                    SETFLAG(v92, (volatile unsigned int *)a2 + 10, v93);
                    v86 = *(_DWORD *)v84;
                    v87 = *(_DWORD *)v85;
                  }
                  v94 = v87 & 0x2000000;
                  if ( (v87 & 0x2000000) != (v86 & 0x2000000) )
                  {
                    SETFLAG(v86 & 0x2000000, (volatile unsigned int *)v85, 0x2000000);
                    SETFLAG(v94, (volatile unsigned int *)a2 + 10, v95);
                    v86 = *(_DWORD *)v84;
                    v87 = *(_DWORD *)v85;
                  }
                  v96 = v87 & 0x8000000;
                  if ( (v87 & 0x8000000) != (v86 & 0x8000000) )
                  {
                    SETFLAG(v86 & 0x8000000, (volatile unsigned int *)v85, 0x8000000);
                    SETFLAG(v96, (volatile unsigned int *)a2 + 10, v97);
                    v86 = *(_DWORD *)v84;
                    v87 = *(_DWORD *)v85;
                  }
                  v98 = v87 & 0x4000000;
                  if ( (v87 & 0x4000000) != (v86 & 0x4000000) )
                  {
                    SETFLAG(v86 & 0x4000000, (volatile unsigned int *)v85, 0x4000000);
                    SETFLAG(v98, (volatile unsigned int *)a2 + 10, v99);
                    v86 = *(_DWORD *)v84;
                    v87 = *(_DWORD *)v85;
                  }
                  v100 = v86 & 0x40000000;
                  if ( (v87 & 0x40000000) != v100 )
                  {
                    SETFLAG(v100, (volatile unsigned int *)v85, 0x40000000);
                    SETFLAG(v102, (volatile unsigned int *)a2 + 10, v101);
                  }
                  _m_prefetchw(v85);
                  do
                    v103 = *(_DWORD *)v85;
                  while ( v103 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v85,
                                    *(_DWORD *)v85 & 0xEFFFFFFF,
                                    *(_DWORD *)v85) );
                  _m_prefetchw(v84);
                  do
                    v104 = *(_DWORD *)v84;
                  while ( v104 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v84,
                                    *(_DWORD *)v84 & 0xEFFFFFFF,
                                    *(_DWORD *)v84) );
                  *((_QWORD *)a1 + 4) = 0LL;
                  v105 = 6LL;
                  *((_QWORD *)a2 + 4) = 0LL;
                  v106 = (_OWORD *)v7;
                  v107 = 6LL;
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
                  v108 = a2 + 672;
                  v109 = a2 + 672;
                  do
                  {
                    *v106 = *(_OWORD *)v109;
                    v106[1] = *((_OWORD *)v109 + 1);
                    v106[2] = *((_OWORD *)v109 + 2);
                    v106[3] = *((_OWORD *)v109 + 3);
                    v106[4] = *((_OWORD *)v109 + 4);
                    v106[5] = *((_OWORD *)v109 + 5);
                    v106[6] = *((_OWORD *)v109 + 6);
                    v106 += 8;
                    v110 = *((_OWORD *)v109 + 7);
                    v109 += 32;
                    *(v106 - 1) = v110;
                    --v107;
                  }
                  while ( v107 );
                  v111 = 6LL;
                  *v106 = *(_OWORD *)v109;
                  v106[1] = *((_OWORD *)v109 + 1);
                  v106[2] = *((_OWORD *)v109 + 2);
                  v112 = *((_OWORD *)v109 + 3);
                  v113 = a1 + 672;
                  v106[3] = v112;
                  v114 = a1 + 672;
                  do
                  {
                    *(_OWORD *)v108 = *(_OWORD *)v114;
                    *((_OWORD *)v108 + 1) = *((_OWORD *)v114 + 1);
                    *((_OWORD *)v108 + 2) = *((_OWORD *)v114 + 2);
                    *((_OWORD *)v108 + 3) = *((_OWORD *)v114 + 3);
                    *((_OWORD *)v108 + 4) = *((_OWORD *)v114 + 4);
                    *((_OWORD *)v108 + 5) = *((_OWORD *)v114 + 5);
                    *((_OWORD *)v108 + 6) = *((_OWORD *)v114 + 6);
                    v108 += 32;
                    v115 = *((_OWORD *)v114 + 7);
                    v114 += 32;
                    *((_OWORD *)v108 - 1) = v115;
                    --v111;
                  }
                  while ( v111 );
                  *(_OWORD *)v108 = *(_OWORD *)v114;
                  *((_OWORD *)v108 + 1) = *((_OWORD *)v114 + 1);
                  *((_OWORD *)v108 + 2) = *((_OWORD *)v114 + 2);
                  *((_OWORD *)v108 + 3) = *((_OWORD *)v114 + 3);
                  v116 = (_OWORD *)v7;
                  do
                  {
                    *(_OWORD *)v113 = *v116;
                    *((_OWORD *)v113 + 1) = v116[1];
                    *((_OWORD *)v113 + 2) = v116[2];
                    *((_OWORD *)v113 + 3) = v116[3];
                    *((_OWORD *)v113 + 4) = v116[4];
                    *((_OWORD *)v113 + 5) = v116[5];
                    *((_OWORD *)v113 + 6) = v116[6];
                    v113 += 32;
                    v117 = v116[7];
                    v116 += 8;
                    *((_OWORD *)v113 - 1) = v117;
                    --v105;
                  }
                  while ( v105 );
                  *(_OWORD *)v113 = *v116;
                  *((_OWORD *)v113 + 1) = v116[1];
                  *((_OWORD *)v113 + 2) = v116[2];
                  *((_OWORD *)v113 + 3) = v116[3];
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
                  *(_DWORD *)(struct HDEV__ *)v7 = a2[661];
                  a2[661] = a1[661];
                  *(_DWORD *)(a1 + 661) = *(_DWORD *)(HDEV)v7;
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
                  (*((void (__fastcall **)(_QWORD, HDEV))a2 + 337))(*((_QWORD *)a2 + 225), a2);
                  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 337))(*((_QWORD *)a1 + 225), a1);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v123, v126);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v124, v127);
                  vResetSurfacePalette(a1);
                  vResetSurfacePalette(a2);
                  if ( (int)IsvSpDynamicModeChangeSupported() >= 0 )
                    vSpDynamicModeChange(a1, a2);
                  ++gcModeChanges;
                  v6 = 1;
                  break;
                }
                v44 = (HDEV)v48[5];
                v45 = *v48;
                if ( v44 == a1 )
                {
                  v48[5] = (__int64)a2;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v124, v49, v50);
                  v47 = &v123;
                  goto LABEL_65;
                }
                if ( v44 == a2 )
                {
                  v48[5] = (__int64)a1;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v123, v49, v50);
                  v47 = &v124;
LABEL_65:
                  PDEVOBJ::vUnreferencePdev((struct PDEV **)v47, 0, v46);
                }
                v43 = v45;
                goto LABEL_67;
              }
              goto LABEL_39;
            }
          }
        }
      }
LABEL_119:
      Win32FreePool(v7);
      vEnableSynchronize(a2);
      vEnableSynchronize(a1);
    }
  }
  return v6;
}
