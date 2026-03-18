/*
 * XREFs of bDynamicModeChange @ 0x1C0048884
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004EAA8 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserIsWindowGdiScaled @ 0x1C0022280 (UserIsWindowGdiScaled.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C00269E0 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockEx @ 0x1C002CF00 (HmgShareLockEx.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031E14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0032010 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032FFC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C003DC00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C0049830 (bDynamicProcessAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C0049980 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C006C818 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C006E02C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C006E4C4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C006E4FC (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     GreGetScaledLogPixels @ 0x1C0072EA0 (GreGetScaledLogPixels.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00C05C0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00C0610 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00CB700 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00CB78C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, unsigned int a3)
{
  unsigned int v6; // r12d
  __int64 v7; // r13
  int v8; // eax
  int v9; // eax
  int v10; // r15d
  struct tagSIZE *v11; // rax
  struct tagSIZE v12; // rbx
  struct tagSIZE *v13; // rax
  struct SURFACE *v14; // r9
  int v15; // r11d
  struct tagSIZE v16; // rdi
  struct SURFACE *v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  LONG v20; // r8d
  LONG v21; // r10d
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  struct SURFACE *v24; // r13
  __int64 Objt; // rax
  __int64 v26; // r15
  bool v27; // zf
  struct SURFACE *v28; // rax
  struct SURFACE *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // eax
  void *v33; // rcx
  int v34; // eax
  struct SURFACE *v35; // rcx
  struct SURFACE *v36; // rdi
  struct SURFACE *v37; // r15
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  HDEV v42; // rax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rbx
  __int64 *v46; // rax
  int v47; // r8d
  __int64 v48; // rax
  struct OBJECT *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // ecx
  int v54; // eax
  HDEV v55; // rax
  HDEV v56; // rdx
  __int64 v57; // r8
  _OWORD *v58; // rcx
  __int64 v59; // r9
  HDEV v60; // rax
  __int128 v61; // xmm1
  __int64 v62; // r9
  HDEV v63; // rcx
  HDEV v64; // rax
  __int128 v65; // xmm1
  _OWORD *v66; // rax
  __int64 v67; // rdx
  __int128 v68; // xmm1
  __int64 v69; // r9
  HDEV v70; // rax
  HDEV v71; // rdx
  _OWORD *v72; // rcx
  __int128 v73; // xmm1
  __int64 v74; // r9
  __int128 v75; // xmm1
  HDEV v76; // rdx
  HDEV v77; // rcx
  __int128 v78; // xmm1
  _OWORD *v79; // rax
  __int128 v80; // xmm1
  HDEV v81; // rbx
  HDEV v82; // r11
  signed __int32 v83; // ecx
  volatile unsigned int v84; // r10d
  int v85; // edi
  int v86; // edi
  int v87; // edi
  int v88; // edi
  int v89; // edi
  int v90; // edi
  int v91; // ecx
  volatile unsigned int v92; // ett
  signed __int32 v93; // ett
  __int64 v94; // r8
  _OWORD *v95; // rcx
  __int64 v96; // r9
  HDEV v97; // rax
  HDEV v98; // rdx
  __int128 v99; // xmm1
  __int64 v100; // r9
  __int128 v101; // xmm1
  HDEV v102; // rdx
  HDEV v103; // rcx
  __int128 v104; // xmm1
  _OWORD *v105; // rax
  __int128 v106; // xmm1
  char v108; // al
  unsigned __int64 v109; // rdx
  __m128 v110; // xmm0
  __int64 v111; // rdx
  unsigned __int64 v112; // rdx
  __m128 v113; // xmm0
  void *v114; // rcx
  __int64 v115; // rax
  HDEV v116; // r8
  HDEV v117; // rdx
  HDEV v118; // rcx
  int v119; // r8d
  HDEV *v120; // rcx
  unsigned int v121; // r8d
  unsigned int v122; // r8d
  unsigned int v123; // r8d
  unsigned int v124; // r8d
  unsigned int v125; // r8d
  unsigned int v126; // r8d
  unsigned int v127; // r8d
  int v128; // r10d
  LONG v129; // [rsp+48h] [rbp-69h] BYREF
  struct SURFACE *v130; // [rsp+50h] [rbp-61h]
  unsigned __int64 v131; // [rsp+58h] [rbp-59h]
  int v132; // [rsp+60h] [rbp-51h]
  int v133; // [rsp+64h] [rbp-4Dh]
  __int64 v134; // [rsp+68h] [rbp-49h]
  HDEV v135; // [rsp+70h] [rbp-41h] BYREF
  HDEV v136; // [rsp+78h] [rbp-39h] BYREF
  int v137; // [rsp+80h] [rbp-31h]
  int v138; // [rsp+84h] [rbp-2Dh]
  __int64 v139; // [rsp+88h] [rbp-29h]
  unsigned __int64 v140; // [rsp+90h] [rbp-21h]
  struct SURFACE *v141; // [rsp+98h] [rbp-19h]
  __int64 v142; // [rsp+A0h] [rbp-11h]
  __int64 v143; // [rsp+A8h] [rbp-9h]
  void *v144; // [rsp+B0h] [rbp-1h]
  __int64 v145; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v146; // [rsp+C0h] [rbp+Fh] BYREF
  unsigned __int64 v147; // [rsp+C8h] [rbp+17h]
  LONG cx; // [rsp+130h] [rbp+7Fh] BYREF

  v6 = 0;
  if ( !(unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
    return v6;
  v144 = PALLOCMEM2(0x9D8uLL, 0x706D7447u, 0);
  v7 = (__int64)v144;
  if ( !v144 )
    return v6;
  v8 = (_DWORD)a2[10] & 0x400;
  v135 = a1;
  v137 = v8;
  v9 = (_DWORD)a1[10] & 0x400;
  v136 = a2;
  v138 = v9;
  if ( (int)IsvDisableSynchronizeSupported() >= 0 )
  {
    vDisableSynchronize(a2);
    vDisableSynchronize(a1);
  }
  v133 = *((_DWORD *)a2 + 538) * *((_DWORD *)a2 + 539);
  v132 = *((_DWORD *)a1 + 538) * *((_DWORD *)a1 + 539);
  if ( !(unsigned int)bDynamicProcessAllDriverRealizations(a2, 0LL, 1LL)
    || !(unsigned int)bDynamicProcessAllDriverRealizations(a1, a2, a3) )
  {
    goto LABEL_98;
  }
  v10 = 1;
  v11 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v135, &v145);
  v141 = (struct SURFACE *)*((_QWORD *)a1 + 318);
  v12 = *v11;
  v142 = *((_QWORD *)a1 + 225);
  v139 = *((_QWORD *)a1 + 224);
  v13 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v136, &v146);
  v143 = *((_QWORD *)a2 + 225);
  v16 = *v13;
  v17 = (struct SURFACE *)*((_QWORD *)a2 + 318);
  v134 = *((_QWORD *)a2 + 224);
  v131 = HIDWORD(*(unsigned __int64 *)&v12);
  v18 = HIDWORD(*(unsigned __int64 *)&v16);
  v130 = v17;
  cx = v12.cx;
  v129 = v16.cx;
  v140 = HIDWORD(*(unsigned __int64 *)&v16);
  if ( v16.cx < v12.cx
    || (cx = v12.cx,
        v19 = v15,
        v131 = (unsigned int)v15,
        v20 = v12.cx,
        v129 = v16.cx,
        v21 = v16.cx,
        v140 = HIDWORD(*(unsigned __int64 *)&v16),
        v16.cy < v15) )
  {
    v108 = bDynamicIntersectVisRect(v14, v16);
    v20 = cx;
    v21 = v129;
    v10 = v108 & 1;
    v19 = v131;
    v18 = v140;
    v17 = v130;
  }
  if ( v20 < v21 || v19 < (int)v18 )
    v10 &= bDynamicIntersectVisRect(v17, v12);
  v22 = *((_QWORD *)a2 + 342);
  if ( v22 && v22 == *((_QWORD *)a1 + 342) && *((_QWORD *)a2 + 223) == *((_QWORD *)a1 + 223) )
  {
    if ( !v10 )
      goto LABEL_98;
    v10 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 342))(v139, v134);
  }
  if ( !v10 )
    goto LABEL_98;
  v23 = 0LL;
  v24 = v130;
  while ( 1 )
  {
    LOBYTE(v18) = 1;
    Objt = HmgSafeNextObjt(v23, v18);
    v26 = Objt;
    if ( !Objt )
      break;
    v27 = (*(_DWORD *)(Objt + 36) & 0x2000) == 0;
    v23 = *(_QWORD *)Objt;
    v131 = v23;
    if ( v27 )
    {
      v28 = *(struct SURFACE **)(v26 + 504);
      v29 = v141;
      if ( v28 == v141 )
      {
        *(_QWORD *)(v26 + 504) = v24;
        if ( v24 && (unsigned int)DC::bDpiScaledSurface((DC *)v26) )
        {
          v109 = *(_QWORD *)((char *)v24 + 660);
          goto LABEL_108;
        }
        v33 = *(void **)(v26 + 472);
        if ( v33 && (unsigned int)UserIsWindowGdiScaled(v33, &cx) && (_WORD)cx != 96 )
        {
          v110 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
          v110.m128_f32[0] = v110.m128_f32[0] / 96.0;
          v140 = _mm_unpacklo_ps(v110, v110).m128_u64[0];
          v109 = v140;
LABEL_108:
          DC::vSetDpiScaling(v26, v109);
        }
        else
        {
          v34 = *(_DWORD *)(v26 + 528);
          if ( (v34 & 1) != 0 )
          {
            *(_DWORD *)(v26 + 36) |= 0x10u;
            *(_QWORD *)(v26 + 532) = 0LL;
            *(_DWORD *)(v26 + 528) = v34 & 0xFFFFFFF8 | 4;
            *(_QWORD *)(v26 + 540) = 0LL;
            DC::vUpdateCachedDPIScaleValue((DC *)v26);
          }
        }
        *(struct tagSIZE *)(v26 + 520) = v16;
        goto LABEL_30;
      }
      if ( v28 == v24 )
      {
        *(_QWORD *)(v26 + 504) = v141;
        if ( v29 && (unsigned int)DC::bDpiScaledSurface((DC *)v26) )
        {
          v112 = *(_QWORD *)(v111 + 660);
          goto LABEL_115;
        }
        v114 = *(void **)(v26 + 472);
        if ( v114 && (unsigned int)UserIsWindowGdiScaled(v114, &v129) && (_WORD)v129 != 96 )
        {
          v113 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
          v113.m128_f32[0] = v113.m128_f32[0] / 96.0;
          v147 = _mm_unpacklo_ps(v113, v113).m128_u64[0];
          v112 = v147;
LABEL_115:
          DC::vSetDpiScaling(v26, v112);
        }
        else
        {
          DC::vClearDpiScaling((DC *)v26);
        }
        *(struct tagSIZE *)(v26 + 520) = v12;
LABEL_30:
        *(_DWORD *)(v26 + 324) |= 0xFu;
      }
      v18 = *(unsigned int *)(v26 + 36);
      if ( (v18 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v26 + 504) + 112LL) & 0x200) != 0 )
        LODWORD(v18) = v18 | 0x8000;
      else
        LODWORD(v18) = v18 & 0xFFFF7FFF;
      v30 = *(_QWORD *)(v26 + 24);
      v31 = v139;
      *(_DWORD *)(v26 + 36) = v18;
      if ( v30 == v31 )
      {
        *(_QWORD *)(v26 + 24) = v134;
        *(_DWORD *)(struct HDEV__ *)(v26 + 72) = a2[454];
        v32 = *((_DWORD *)a2 + 530);
        goto LABEL_22;
      }
      v27 = v30 == v134;
      v23 = v131;
      if ( v27 )
      {
        *(_QWORD *)(v26 + 24) = v31;
        *(_DWORD *)(struct HDEV__ *)(v26 + 72) = a1[454];
        v32 = *((_DWORD *)a1 + 530);
LABEL_22:
        *(_DWORD *)(v26 + 76) = v32;
        v23 = v131;
      }
    }
  }
  v7 = (__int64)v144;
  v35 = 0LL;
  v36 = v130;
  v37 = v141;
  while ( 1 )
  {
    LOBYTE(v18) = 5;
    v38 = HmgSafeNextObjt(v35, v18);
    v41 = v38;
    if ( !v38 )
      break;
    v35 = *(struct SURFACE **)v38;
    v42 = *(HDEV *)(v38 + 48);
    v130 = v35;
    if ( v42 == a1 )
    {
      v44 = *(_DWORD *)(v41 + 112);
      if ( (v44 & 0x4000000) != 0 )
      {
        v18 = 8193LL;
        if ( (*(_DWORD *)(v41 + 116) & 0x2001) == 0x2001 )
        {
          v115 = WdLogNewEntry5_WdAssertion(v35, 8193LL, v39, v40);
          WdLogEvent5_WdAssertion(v115);
          v35 = v130;
          *(_QWORD *)(v41 + 48) = a2;
        }
        if ( v132 != v133 && *(_DWORD *)(v41 + 96) == *((_DWORD *)v37 + 24) )
        {
          v116 = a2;
          v117 = a1;
          goto LABEL_125;
        }
      }
      else if ( (v44 & 0x300000) == 0x200000 )
      {
        *(_QWORD *)(v41 + 48) = a2;
      }
    }
    else if ( v42 == a2 )
    {
      v43 = *(_DWORD *)(v41 + 112);
      if ( (v43 & 0x4000000) != 0 )
      {
        v18 = 8193LL;
        if ( (*(_DWORD *)(v41 + 116) & 0x2001) == 0x2001 )
          *(_QWORD *)(v41 + 48) = a1;
        if ( v132 != v133 && *(_DWORD *)(v41 + 96) == *((_DWORD *)v36 + 24) )
        {
          v116 = a1;
          v117 = a2;
LABEL_125:
          vDynamicSwitchPalettes((struct SURFACE *)v41, (struct PDEV *)v117, (struct PDEV *)v116);
          v35 = v130;
        }
      }
      else if ( (v43 & 0x300000) == 0x200000 )
      {
        *(_QWORD *)(v41 + 48) = a1;
      }
    }
  }
  v45 = 0LL;
  while ( 1 )
  {
    LOBYTE(v18) = 28;
    v46 = (__int64 *)HmgSafeNextObjt(v45, v18);
    if ( !v46 )
      break;
    v118 = (HDEV)v46[5];
    v45 = *v46;
    if ( v118 == a1 )
    {
      v46[5] = (__int64)a2;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v136, v18, v47);
      v120 = &v135;
      goto LABEL_132;
    }
    if ( v118 == a2 )
    {
      v46[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v135, v18, v47);
      v120 = &v136;
LABEL_132:
      PDEVOBJ::vUnreferencePdev((struct PDEV **)v120, 0, v119);
    }
  }
  vChangeWndObjs(v37, a1, v36, a2);
  v48 = HmgShareLockEx((unsigned int)ghbrGrayPattern, 16, 0);
  *(_QWORD *)(v7 + 80) = v7 + 552;
  v49 = (struct OBJECT *)v48;
  v50 = v143;
  *(_DWORD *)(v7 + 592) = 0;
  *(_DWORD *)(*(_QWORD *)(v7 + 80) + 32LL) = 0xFFFFFF;
  v51 = *(_QWORD *)(v7 + 80);
  *(_DWORD *)(v7 + 128) = 0;
  *(_QWORD *)(v51 + 112) = 0LL;
  EBRUSHOBJ::vInitBrush((int *)a1 + 384, v7, (__int64)v49, (__int64)ppalDefault, v50, (__int64)v36, 1u);
  EBRUSHOBJ::vInitBrush((int *)a2 + 384, v7, (__int64)v49, (__int64)ppalDefault, v142, (__int64)v37, 1u);
  HmgDecrementShareReferenceCountEx(v49, 0LL);
  *((_QWORD *)a2 + 225) = v142;
  *((_QWORD *)a2 + 224) = v139;
  v52 = v143;
  *((_QWORD *)a2 + 318) = v37;
  *((_QWORD *)a1 + 225) = v52;
  *((_QWORD *)a1 + 224) = v134;
  *((_QWORD *)a1 + 318) = v36;
  v53 = *((_DWORD *)v37 + 28);
  v54 = *((_DWORD *)v36 + 28);
  if ( (v53 & 0x10000000) != 0 )
  {
    *((_DWORD *)v36 + 28) = v54 | 0x10000000;
    if ( a1 != (HDEV)-80LL && (((_DWORD)a1[43] & 0x10000000) != 0 || ((_DWORD)a1[45] & 0x10000000) != 0) )
    {
      v55 = a2 + 20;
LABEL_57:
      if ( v55 )
      {
        *((_DWORD *)v55 + 23) |= 0x10000000u;
        *((_DWORD *)v55 + 25) |= 0x10000000u;
      }
    }
  }
  else if ( (v54 & 0x10000000) != 0 )
  {
    *((_DWORD *)v37 + 28) = v53 | 0x10000000;
    if ( a2 != (HDEV)-80LL && (((_DWORD)a2[43] & 0x10000000) != 0 || ((_DWORD)a2[45] & 0x10000000) != 0) )
    {
      v55 = a1 + 20;
      goto LABEL_57;
    }
  }
  v56 = a2 + 454;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 223);
  v57 = 2LL;
  v58 = (_OWORD *)v7;
  *((_QWORD *)a2 + 223) = *((_QWORD *)a1 + 223);
  v59 = 2LL;
  *((_QWORD *)a1 + 223) = *(_QWORD *)v7;
  v60 = a2 + 454;
  do
  {
    *v58 = *(_OWORD *)v60;
    v58[1] = *((_OWORD *)v60 + 1);
    v58[2] = *((_OWORD *)v60 + 2);
    v58[3] = *((_OWORD *)v60 + 3);
    v58[4] = *((_OWORD *)v60 + 4);
    v58[5] = *((_OWORD *)v60 + 5);
    v58[6] = *((_OWORD *)v60 + 6);
    v58 += 8;
    v61 = *((_OWORD *)v60 + 7);
    v60 += 32;
    *(v58 - 1) = v61;
    --v59;
  }
  while ( v59 );
  v62 = 2LL;
  *v58 = *(_OWORD *)v60;
  v58[1] = *((_OWORD *)v60 + 1);
  v58[2] = *((_OWORD *)v60 + 2);
  *((_QWORD *)v58 + 6) = *((_QWORD *)v60 + 6);
  v63 = a1 + 454;
  v64 = a1 + 454;
  do
  {
    *(_OWORD *)v56 = *(_OWORD *)v64;
    *((_OWORD *)v56 + 1) = *((_OWORD *)v64 + 1);
    *((_OWORD *)v56 + 2) = *((_OWORD *)v64 + 2);
    *((_OWORD *)v56 + 3) = *((_OWORD *)v64 + 3);
    *((_OWORD *)v56 + 4) = *((_OWORD *)v64 + 4);
    *((_OWORD *)v56 + 5) = *((_OWORD *)v64 + 5);
    *((_OWORD *)v56 + 6) = *((_OWORD *)v64 + 6);
    v56 += 32;
    v65 = *((_OWORD *)v64 + 7);
    v64 += 32;
    *((_OWORD *)v56 - 1) = v65;
    --v62;
  }
  while ( v62 );
  *(_OWORD *)v56 = *(_OWORD *)v64;
  *((_OWORD *)v56 + 1) = *((_OWORD *)v64 + 1);
  *((_OWORD *)v56 + 2) = *((_OWORD *)v64 + 2);
  *((_QWORD *)v56 + 6) = *((_QWORD *)v64 + 6);
  v66 = (_OWORD *)v7;
  v67 = 2LL;
  do
  {
    *(_OWORD *)v63 = *v66;
    *((_OWORD *)v63 + 1) = v66[1];
    *((_OWORD *)v63 + 2) = v66[2];
    *((_OWORD *)v63 + 3) = v66[3];
    *((_OWORD *)v63 + 4) = v66[4];
    *((_OWORD *)v63 + 5) = v66[5];
    *((_OWORD *)v63 + 6) = v66[6];
    v63 += 32;
    v68 = v66[7];
    v66 += 8;
    *((_OWORD *)v63 - 1) = v68;
    --v67;
  }
  while ( v67 );
  v69 = 2LL;
  *(_OWORD *)v63 = *v66;
  *((_OWORD *)v63 + 1) = v66[1];
  *((_OWORD *)v63 + 2) = v66[2];
  *((_QWORD *)v63 + 6) = *((_QWORD *)v66 + 6);
  v70 = a2 + 532;
  v71 = a2 + 532;
  v72 = (_OWORD *)v7;
  do
  {
    *v72 = *(_OWORD *)v71;
    v72[1] = *((_OWORD *)v71 + 1);
    v72[2] = *((_OWORD *)v71 + 2);
    v72[3] = *((_OWORD *)v71 + 3);
    v72[4] = *((_OWORD *)v71 + 4);
    v72[5] = *((_OWORD *)v71 + 5);
    v72[6] = *((_OWORD *)v71 + 6);
    v72 += 8;
    v73 = *((_OWORD *)v71 + 7);
    v71 += 32;
    *(v72 - 1) = v73;
    --v69;
  }
  while ( v69 );
  v74 = 2LL;
  *v72 = *(_OWORD *)v71;
  v72[1] = *((_OWORD *)v71 + 1);
  v72[2] = *((_OWORD *)v71 + 2);
  v75 = *((_OWORD *)v71 + 3);
  v76 = a1 + 532;
  v72[3] = v75;
  v77 = a1 + 532;
  do
  {
    *(_OWORD *)v70 = *(_OWORD *)v77;
    *((_OWORD *)v70 + 1) = *((_OWORD *)v77 + 1);
    *((_OWORD *)v70 + 2) = *((_OWORD *)v77 + 2);
    *((_OWORD *)v70 + 3) = *((_OWORD *)v77 + 3);
    *((_OWORD *)v70 + 4) = *((_OWORD *)v77 + 4);
    *((_OWORD *)v70 + 5) = *((_OWORD *)v77 + 5);
    *((_OWORD *)v70 + 6) = *((_OWORD *)v77 + 6);
    v70 += 32;
    v78 = *((_OWORD *)v77 + 7);
    v77 += 32;
    *((_OWORD *)v70 - 1) = v78;
    --v74;
  }
  while ( v74 );
  *(_OWORD *)v70 = *(_OWORD *)v77;
  *((_OWORD *)v70 + 1) = *((_OWORD *)v77 + 1);
  *((_OWORD *)v70 + 2) = *((_OWORD *)v77 + 2);
  *((_OWORD *)v70 + 3) = *((_OWORD *)v77 + 3);
  v79 = (_OWORD *)v7;
  do
  {
    *(_OWORD *)v76 = *v79;
    *((_OWORD *)v76 + 1) = v79[1];
    *((_OWORD *)v76 + 2) = v79[2];
    *((_OWORD *)v76 + 3) = v79[3];
    *((_OWORD *)v76 + 4) = v79[4];
    *((_OWORD *)v76 + 5) = v79[5];
    *((_OWORD *)v76 + 6) = v79[6];
    v76 += 32;
    v80 = v79[7];
    v79 += 8;
    *((_OWORD *)v76 - 1) = v80;
    --v57;
  }
  while ( v57 );
  *(_OWORD *)v76 = *v79;
  *((_OWORD *)v76 + 1) = v79[1];
  *((_OWORD *)v76 + 2) = v79[2];
  *((_OWORD *)v76 + 3) = v79[3];
  *(_OWORD *)v7 = *((_OWORD *)a2 + 153);
  *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 154);
  *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 155);
  *(_OWORD *)(v7 + 48) = *((_OWORD *)a2 + 156);
  *(_OWORD *)(v7 + 64) = *((_OWORD *)a2 + 157);
  *(_OWORD *)(v7 + 80) = *((_OWORD *)a2 + 158);
  *((_OWORD *)a2 + 153) = *((_OWORD *)a1 + 153);
  *((_OWORD *)a2 + 154) = *((_OWORD *)a1 + 154);
  *((_OWORD *)a2 + 155) = *((_OWORD *)a1 + 155);
  *((_OWORD *)a2 + 156) = *((_OWORD *)a1 + 156);
  *((_OWORD *)a2 + 157) = *((_OWORD *)a1 + 157);
  *((_OWORD *)a2 + 158) = *((_OWORD *)a1 + 158);
  *((_OWORD *)a1 + 153) = *(_OWORD *)v7;
  *((_OWORD *)a1 + 154) = *(_OWORD *)(v7 + 16);
  *((_OWORD *)a1 + 155) = *(_OWORD *)(v7 + 32);
  *((_OWORD *)a1 + 156) = *(_OWORD *)(v7 + 48);
  *((_OWORD *)a1 + 157) = *(_OWORD *)(v7 + 64);
  *((_OWORD *)a1 + 158) = *(_OWORD *)(v7 + 80);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 319);
  *((_QWORD *)a2 + 319) = *((_QWORD *)a1 + 319);
  *((_QWORD *)a1 + 319) = *(_QWORD *)v7;
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
  *(_DWORD *)(struct HDEV__ *)v7 = a2[880];
  a2[880] = a1[880];
  *(_DWORD *)(a1 + 880) = *(_DWORD *)(HDEV)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 324);
  v81 = a2 + 10;
  v82 = a1 + 10;
  *((_QWORD *)a2 + 324) = *((_QWORD *)a1 + 324);
  *((_QWORD *)a1 + 324) = *(_QWORD *)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[650];
  a2[650] = a1[650];
  *(_DWORD *)(a1 + 650) = *(_DWORD *)(HDEV)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[651];
  a2[651] = a1[651];
  *(_DWORD *)(a1 + 651) = *(_DWORD *)(HDEV)v7;
  v83 = *((_DWORD *)a2 + 10);
  v84 = *((_DWORD *)a1 + 10);
  v85 = v84 & 0x20000;
  if ( (v84 & 0x20000) != (v83 & 0x20000) )
  {
    SETFLAG(v83 & 0x20000, (volatile unsigned int *)a1 + 10, 0x20000u);
    SETFLAG(v85, (volatile unsigned int *)a2 + 10, v121);
    v83 = *(_DWORD *)v81;
    v84 = *(_DWORD *)v82;
  }
  v86 = v84 & 0x1000000;
  if ( (v84 & 0x1000000) != (v83 & 0x1000000) )
  {
    SETFLAG(v83 & 0x1000000, (volatile unsigned int *)v82, 0x1000000u);
    SETFLAG(v86, (volatile unsigned int *)a2 + 10, v122);
    v83 = *(_DWORD *)v81;
    v84 = *(_DWORD *)v82;
  }
  v87 = v84 & 0x20000000;
  if ( (v84 & 0x20000000) != (v83 & 0x20000000) )
  {
    SETFLAG(v83 & 0x20000000, (volatile unsigned int *)v82, 0x20000000u);
    SETFLAG(v87, (volatile unsigned int *)a2 + 10, v123);
    v83 = *(_DWORD *)v81;
    v84 = *(_DWORD *)v82;
  }
  v88 = v84 & 0x2000000;
  if ( (v84 & 0x2000000) != (v83 & 0x2000000) )
  {
    SETFLAG(v83 & 0x2000000, (volatile unsigned int *)v82, 0x2000000u);
    SETFLAG(v88, (volatile unsigned int *)a2 + 10, v124);
    v83 = *(_DWORD *)v81;
    v84 = *(_DWORD *)v82;
  }
  v89 = v84 & 0x8000000;
  if ( (v84 & 0x8000000) != (v83 & 0x8000000) )
  {
    SETFLAG(v83 & 0x8000000, (volatile unsigned int *)v82, 0x8000000u);
    SETFLAG(v89, (volatile unsigned int *)a2 + 10, v125);
    v83 = *(_DWORD *)v81;
    v84 = *(_DWORD *)v82;
  }
  v90 = v84 & 0x4000000;
  if ( (v84 & 0x4000000) != (v83 & 0x4000000) )
  {
    SETFLAG(v83 & 0x4000000, (volatile unsigned int *)v82, 0x4000000u);
    SETFLAG(v90, (volatile unsigned int *)a2 + 10, v126);
    v83 = *(_DWORD *)v81;
    v84 = *(_DWORD *)v82;
  }
  v91 = v83 & 0x40000000;
  if ( (v84 & 0x40000000) != v91 )
  {
    SETFLAG(v91, (volatile unsigned int *)v82, 0x40000000u);
    SETFLAG(v128, (volatile unsigned int *)a2 + 10, v127);
  }
  _m_prefetchw(v82);
  do
    v92 = *(_DWORD *)v82;
  while ( v92 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v82,
                   *(_DWORD *)v82 & 0xEFFFFFFF,
                   *(_DWORD *)v82) );
  _m_prefetchw(v81);
  do
    v93 = *(_DWORD *)v81;
  while ( v93 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v81,
                   *(_DWORD *)v81 & 0xEFFFFFFF,
                   *(_DWORD *)v81) );
  *((_QWORD *)a1 + 4) = 0LL;
  v94 = 6LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v95 = (_OWORD *)v7;
  v96 = 6LL;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 214);
  *((_QWORD *)a2 + 214) = *((_QWORD *)a1 + 214);
  *((_QWORD *)a1 + 214) = *(_QWORD *)v7;
  *(_OWORD *)v7 = *(_OWORD *)(a2 + 362);
  *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 366);
  *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 370);
  *(_OWORD *)(a2 + 362) = *(_OWORD *)(a1 + 362);
  *(_OWORD *)(a2 + 366) = *(_OWORD *)(a1 + 366);
  *(_OWORD *)(a2 + 370) = *(_OWORD *)(a1 + 370);
  *(_OWORD *)(a1 + 362) = *(_OWORD *)v7;
  *(_OWORD *)(a1 + 366) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)(a1 + 370) = *(_OWORD *)(v7 + 32);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 178);
  *((_QWORD *)a2 + 178) = *((_QWORD *)a1 + 178);
  *((_QWORD *)a1 + 178) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 179);
  *((_QWORD *)a2 + 179) = *((_QWORD *)a1 + 179);
  *((_QWORD *)a1 + 179) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 180);
  *((_QWORD *)a2 + 180) = *((_QWORD *)a1 + 180);
  *((_QWORD *)a1 + 180) = *(_QWORD *)v7;
  v97 = a2 + 670;
  v98 = a2 + 670;
  do
  {
    *v95 = *(_OWORD *)v98;
    v95[1] = *((_OWORD *)v98 + 1);
    v95[2] = *((_OWORD *)v98 + 2);
    v95[3] = *((_OWORD *)v98 + 3);
    v95[4] = *((_OWORD *)v98 + 4);
    v95[5] = *((_OWORD *)v98 + 5);
    v95[6] = *((_OWORD *)v98 + 6);
    v95 += 8;
    v99 = *((_OWORD *)v98 + 7);
    v98 += 32;
    *(v95 - 1) = v99;
    --v96;
  }
  while ( v96 );
  v100 = 6LL;
  *v95 = *(_OWORD *)v98;
  v95[1] = *((_OWORD *)v98 + 1);
  v95[2] = *((_OWORD *)v98 + 2);
  v101 = *((_OWORD *)v98 + 3);
  v102 = a1 + 670;
  v95[3] = v101;
  v103 = a1 + 670;
  do
  {
    *(_OWORD *)v97 = *(_OWORD *)v103;
    *((_OWORD *)v97 + 1) = *((_OWORD *)v103 + 1);
    *((_OWORD *)v97 + 2) = *((_OWORD *)v103 + 2);
    *((_OWORD *)v97 + 3) = *((_OWORD *)v103 + 3);
    *((_OWORD *)v97 + 4) = *((_OWORD *)v103 + 4);
    *((_OWORD *)v97 + 5) = *((_OWORD *)v103 + 5);
    *((_OWORD *)v97 + 6) = *((_OWORD *)v103 + 6);
    v97 += 32;
    v104 = *((_OWORD *)v103 + 7);
    v103 += 32;
    *((_OWORD *)v97 - 1) = v104;
    --v100;
  }
  while ( v100 );
  *(_OWORD *)v97 = *(_OWORD *)v103;
  *((_OWORD *)v97 + 1) = *((_OWORD *)v103 + 1);
  *((_OWORD *)v97 + 2) = *((_OWORD *)v103 + 2);
  *((_OWORD *)v97 + 3) = *((_OWORD *)v103 + 3);
  v105 = (_OWORD *)v7;
  do
  {
    *(_OWORD *)v102 = *v105;
    *((_OWORD *)v102 + 1) = v105[1];
    *((_OWORD *)v102 + 2) = v105[2];
    *((_OWORD *)v102 + 3) = v105[3];
    *((_OWORD *)v102 + 4) = v105[4];
    *((_OWORD *)v102 + 5) = v105[5];
    *((_OWORD *)v102 + 6) = v105[6];
    v102 += 32;
    v106 = v105[7];
    v105 += 8;
    *((_OWORD *)v102 - 1) = v106;
    --v94;
  }
  while ( v94 );
  *(_OWORD *)v102 = *v105;
  *((_OWORD *)v102 + 1) = v105[1];
  *((_OWORD *)v102 + 2) = v105[2];
  *((_OWORD *)v102 + 3) = v105[3];
  *(_QWORD *)v7 = *((_QWORD *)a2 + 215);
  *((_QWORD *)a2 + 215) = *((_QWORD *)a1 + 215);
  *((_QWORD *)a1 + 215) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 216);
  *((_QWORD *)a2 + 216) = *((_QWORD *)a1 + 216);
  *((_QWORD *)a1 + 216) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 218);
  *((_QWORD *)a2 + 218) = *((_QWORD *)a1 + 218);
  *((_QWORD *)a1 + 218) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 219);
  *((_QWORD *)a2 + 219) = *((_QWORD *)a1 + 219);
  *((_QWORD *)a1 + 219) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 220);
  *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
  *((_QWORD *)a1 + 220) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 221);
  *((_QWORD *)a2 + 221) = *((_QWORD *)a1 + 221);
  *((_QWORD *)a1 + 221) = *(_QWORD *)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[659];
  a2[659] = a1[659];
  *(_DWORD *)(a1 + 659) = *(_DWORD *)(HDEV)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 330);
  *((_QWORD *)a2 + 330) = *((_QWORD *)a1 + 330);
  *((_QWORD *)a1 + 330) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 331);
  *((_QWORD *)a2 + 331) = *((_QWORD *)a1 + 331);
  *((_QWORD *)a1 + 331) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 333);
  *((_QWORD *)a2 + 333) = *((_QWORD *)a1 + 333);
  *((_QWORD *)a1 + 333) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 334);
  *((_QWORD *)a2 + 334) = *((_QWORD *)a1 + 334);
  *((_QWORD *)a1 + 334) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 332);
  *((_QWORD *)a2 + 332) = *((_QWORD *)a1 + 332);
  *((_QWORD *)a1 + 332) = *(_QWORD *)v7;
  (*((void (__fastcall **)(_QWORD, HDEV))a2 + 336))(*((_QWORD *)a2 + 224), a2);
  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 336))(*((_QWORD *)a1 + 224), a1);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v135, v137);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v136, v138);
  vResetSurfacePalette(a1);
  vResetSurfacePalette(a2);
  if ( (int)IsvSpDynamicModeChangeSupported() >= 0 )
    vSpDynamicModeChange(a1, a2);
  ++gcModeChanges;
  v6 = 1;
LABEL_98:
  Win32FreePool(v7);
  vEnableSynchronize(a2);
  vEnableSynchronize(a1);
  return v6;
}
