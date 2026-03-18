/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00855CC
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000321C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C028B75C (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0080AE4 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0080D04 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0084210 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00851BC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0085270 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008605C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00860C8 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00863BC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00863E4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     UmfdQueryFontCapsEx @ 0x1C0086404 (UmfdQueryFontCapsEx.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0086444 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0086680 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C008674C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C00867A0 (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00867CC (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00868EC (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0086CD4 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C010BE38 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C010BEA8 (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C028BE54 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall RFONTOBJ::bRealizeFont(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct PDEVOBJ *a3,
        struct tagENUMLOGFONTEXDVW *a4,
        struct PFE *a5,
        struct _FD_XFORM *a6,
        struct _POINTL *const a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11,
        unsigned int a12)
{
  PDEVOBJ *v14; // r13
  struct XDCOBJ *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // eax
  char v41; // r12
  int v42; // r9d
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64, _BYTE *); // rax
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // r14d
  unsigned int v49; // ecx
  __int64 v50; // r13
  __int64 v51; // rbx
  bool v52; // zf
  _DWORD *v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rcx
  int v56; // eax
  int inited; // eax
  unsigned int v58; // ecx
  __int64 v59; // rbx
  int v60; // eax
  unsigned int v61; // eax
  int v62; // ecx
  __int64 v63; // rcx
  char v64; // dl
  __int64 v65; // rcx
  const wchar_t *v66; // rbx
  _BYTE *v67; // rdx
  float v68; // xmm0_4
  unsigned int v69; // ecx
  unsigned __int8 *v70; // r8
  unsigned __int16 v71[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct RFONT *v72; // [rsp+38h] [rbp-C8h] BYREF
  struct XDCOBJ *v73; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v74[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct PFE *v75; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+58h] [rbp-A8h]
  _BYTE v77[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v78; // [rsp+64h] [rbp-9Ch]
  __int64 v79; // [rsp+68h] [rbp-98h]
  _BYTE v80[32]; // [rsp+70h] [rbp-90h] BYREF
  _FD_DEVICEMETRICS v81; // [rsp+90h] [rbp-70h] BYREF

  v75 = a5;
  v72 = a3;
  v14 = a3;
  v73 = a2;
  v15 = a2;
  v16 = 0LL;
  *(_QWORD *)v74 = PFEOBJ::pfdg((PFEOBJ *)&v75);
  if ( !*(_QWORD *)v74 )
    goto LABEL_4;
  v17 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>();
  *(_QWORD *)this = v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg((PFEOBJ *)&v75);
LABEL_4:
    *(_QWORD *)this = 0LL;
    return (unsigned int)v16;
  }
  v76 = *(_QWORD *)a5;
  *(_DWORD *)(v17 + 32) = PDEVOBJ::ulLogPixelsX(v14, v18);
  v20 = *(_QWORD *)this;
  *(_DWORD *)(v20 + 36) = PDEVOBJ::ulLogPixelsY(v14, v21);
  *(_DWORD *)(*(_QWORD *)this + 40LL) = a9;
  v22 = PFEOBJ::flFontType((PFEOBJ *)&v75);
  v23 = v76;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = a8 | v22;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)(v23 + 80);
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 4) != 0 )
    v24 = *((unsigned int *)a5 + 20);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = v24;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 136LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 360LL) = *a6;
  *(struct _POINTL *)(*(_QWORD *)this + 648LL) = *a7;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = *(_QWORD *)this + 240LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)(*(_QWORD *)this + 224LL));
  *(_QWORD *)(*(_QWORD *)this + 120LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 128LL) = *(_QWORD *)a5;
  *(_QWORD *)(*(_QWORD *)this + 720LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 832LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 712LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 836LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 844LL) = *((_DWORD *)a5 + 3) & 0x100;
  v25 = *(_QWORD *)this;
  if ( v14 )
  {
    *(_QWORD *)(v25 + 104) = *(_QWORD *)v14;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)v14 + 1800LL);
  }
  else
  {
    *(_QWORD *)(v25 + 104) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 168LL) = 1;
  *(_DWORD *)(*(_QWORD *)this + 716LL) = *(_DWORD *)(*((_QWORD *)a5 + 4) + 48LL);
  *(_QWORD *)(*(_QWORD *)this + 472LL) = *(_QWORD *)v74;
  v26 = *((_QWORD *)a5 + 4);
  v79 = v26;
  v71[0] = *(_WORD *)(v26 + 116);
  RFONTOBJ::vXlatGlyphArray(this, v71, 1, v74, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 460LL) = v74[0];
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  memset(&v81, 0, sizeof(v81));
  *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)(v23 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS((POINTL **)this, &v81) )
    goto LABEL_29;
  if ( !v15 )
    goto LABEL_22;
  *(POINTE *)(*(_QWORD *)this + 396LL) = v81.pteBase;
  *(POINTE *)(*(_QWORD *)this + 416LL) = v81.pteSide;
  v28 = *(_QWORD *)v15;
  v29 = *(_QWORD *)this;
  *(_OWORD *)(v29 + 172) = *(_OWORD *)(*(_QWORD *)v15 + 320LL);
  *(_OWORD *)(v29 + 188) = *(_OWORD *)(v28 + 336);
  *(_DWORD *)(v29 + 204) = *(_DWORD *)(v28 + 352);
  if ( !RFONTOBJ::bCalcLayoutUnits(this, v15)
    || !bGetNtoWScales(
          (struct EPOINTFL *)(*(_QWORD *)this + 212LL),
          v15,
          (struct _FD_XFORM *)(*(_QWORD *)this + 360LL),
          (struct PFEOBJ *)&v75,
          (int *)(*(_QWORD *)this + 220LL)) )
  {
LABEL_29:
    memset(v80, 0, sizeof(v80));
    PushThreadGuardedObject(v80, *(_QWORD *)this, Win32FreePool);
LABEL_30:
    RFONTOBJ::vDestroyFont(this, 1);
    PopThreadGuardedObject(v80);
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*(_QWORD *)this);
    goto LABEL_4;
  }
  v31 = *(_QWORD *)this;
  *(_DWORD *)v71 = 0;
  bFToL(v30, v71, 0LL);
  *(_DWORD *)(v31 + 328) = *(_DWORD *)v71;
  v32 = *(_QWORD *)this;
  *(_DWORD *)v71 = 0;
  bFToL(v33, v71, 0LL);
  *(_DWORD *)(v32 + 332) = *(_DWORD *)v71;
  v34 = *(_QWORD *)this;
  *(_DWORD *)v71 = 0;
  bFToL(v35, v71, 0LL);
  *(_DWORD *)(v34 + 336) = *(_DWORD *)v71;
  v36 = *(_QWORD *)this;
  *(_DWORD *)v71 = 0;
  bFToL(v37, v71, 0LL);
  *(_DWORD *)(v36 + 340) = *(_DWORD *)v71;
  *(_DWORD *)(*(_QWORD *)this + 432LL) = -1;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 976LL) + 208LL) == 1 )
  {
    v38 = *(_DWORD *)(v26 + 48);
    if ( (v38 & 4) == 0 )
    {
      if ( (v38 & 0x10) == 0 )
      {
        v40 = ulSimpleDeviceOrientation(this);
LABEL_21:
        *(_DWORD *)(*(_QWORD *)this + 392LL) = v40;
        goto LABEL_22;
      }
      v39 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_28:
      v40 = lNormAngle(v39);
      goto LABEL_21;
    }
LABEL_27:
    v39 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_28;
  }
  *(_DWORD *)(*(_QWORD *)this + 392LL) = RFONTOBJ::ulSimpleOrientation(this, v15);
  if ( *(_DWORD *)(*(_QWORD *)this + 392LL) >= 0xE10u && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x10) != 0 )
    goto LABEL_27;
LABEL_22:
  v41 = 0;
  v42 = a10;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = a10;
  v43 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  if ( (struct PDEV *)v43 == qword_1C031DE98 )
  {
    if ( (unsigned int)UmfdQueryFontCapsEx(*(_QWORD *)(*(_QWORD *)this + 24LL), v27, v77) != -1 )
      v41 = v78;
  }
  else
  {
    v44 = *(__int64 (__fastcall **)(__int64, _BYTE *))(v43 + 3040);
    if ( v44 )
    {
      v45 = v44(2LL, v77);
      v42 = a10;
      if ( v45 != -1 )
        v41 = v78;
    }
  }
  v46 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v43 + 40) & 0x2000) == 0 )
  {
    *(_DWORD *)(v46 + 92) = 1;
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
    goto LABEL_60;
  }
  v47 = *(_DWORD *)(v46 + 12);
  *(_DWORD *)(v46 + 92) = 0;
  v48 = (v47 & 0x10010000) != 0 ? 400 : 800;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  v49 = v48;
  v50 = *(_QWORD *)this;
  if ( v42 )
  {
    *(_DWORD *)(v50 + 88) = 2;
    goto LABEL_50;
  }
  v51 = *(_QWORD *)(v50 + 104);
  if ( v51 )
  {
    v52 = (*(_DWORD *)(v51 + 40) & 0x8000) == 0;
    *(_QWORD *)v74 = *(_QWORD *)(v50 + 104);
    if ( !v52 )
    {
      if ( KeAreApcsDisabled() )
      {
LABEL_44:
        v49 = v48;
        if ( (*(_DWORD *)(v51 + 1824) & 0x40000000) != 0 )
        {
          v49 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)v74, v27);
          if ( v49 <= 0x320 )
            v49 = v48;
          if ( v49 > 0x960 )
            v49 = 2400;
        }
        v42 = a10;
        goto LABEL_50;
      }
      v50 = *(_QWORD *)this;
    }
    if ( *(_QWORD *)(v51 + 2984) )
    {
      memset(v80, 0, sizeof(v80));
      PushThreadGuardedObject(v80, v50, vRestartbRealizeFont);
      *(_DWORD *)(*(_QWORD *)this + 88LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v51 + 2984))(
                                              *(_QWORD *)(*(_QWORD *)this + 112LL),
                                              *(_QWORD *)this);
      PopThreadGuardedObject(v80);
    }
    goto LABEL_44;
  }
LABEL_50:
  v53 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
  {
    if ( (v41 & 2) == 0 || (v53[179] & 0x8000) != 0 && (v53[86] > 2 * v49 || v53[87] > v49) )
      v53[22] = 2;
    v15 = v73;
    v14 = v72;
  }
  else
  {
    v15 = v73;
    v14 = v72;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 && (v41 & 1) == 0 )
      v53[22] = 1;
  }
LABEL_60:
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) &= 0x8FFEFFFF;
  if ( v42 )
  {
    v54 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 2 )
      goto LABEL_68;
  }
  v55 = *(_QWORD *)this;
  if ( !a11 || (v56 = 1, *(_DWORD *)(v55 + 392)) )
    v56 = 0;
  *(_DWORD *)(v55 + 640) = v56;
  inited = RFONTOBJ::bInitCache(this, a12);
  v54 = *(_QWORD *)this;
  if ( !inited )
  {
LABEL_68:
    memset(v80, 0, sizeof(v80));
    PushThreadGuardedObject(v80, v54, Win32FreePool);
    goto LABEL_30;
  }
  *(_QWORD *)(v54 + 688) = 0LL;
  v73 = (struct XDCOBJ *)ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v52 = iUniqueStamp == -1;
  v58 = ++iUniqueStamp;
  if ( v52 )
  {
    v58 = 1;
    iUniqueStamp = 1;
  }
  **(_DWORD **)this = v58;
  if ( v14 )
  {
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
    v72 = PDEVOBJ::prfntActive(v14);
    RFONTOBJ::vInsert(this, &v72, 1LL);
    PDEVOBJ::prfntActive(v14, v72);
  }
  v59 = v76;
  v72 = *(struct RFONT **)(v76 + 72);
  RFONTOBJ::vInsert(this, &v72, 0LL);
  *(_QWORD *)(v59 + 72) = v72;
  SEMOBJ::vUnlock((SEMOBJ *)&v73);
  v60 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
    v61 = v60 | 1;
  else
    v61 = v60 & 0xFFFFFFFE;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = v61;
  if ( v15 )
    *(_DWORD *)(*(_QWORD *)this + 208LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 976LL) + 208LL);
  else
    *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
  if ( !gbSystemDBCSFontEnabled || (v62 = 1, (*((_DWORD *)v75 + 3) & 0x10) == 0) )
    v62 = 0;
  *(_DWORD *)(*(_QWORD *)this + 708LL) = v62;
  v63 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000000) != 0 )
  {
    if ( (*(_DWORD *)(v63 + 204) & 1) == 0 || (v64 = 1, *(_DWORD *)(v63 + 328)) )
      v64 = 0;
    v65 = *(_QWORD *)(*(_QWORD *)(v63 + 120) + 32LL);
    if ( (*(_DWORD *)(v65 + 48) & 0x401000) != 0 && v64 && *(_WORD *)(v65 + 46) <= 0x190u )
    {
      v66 = (const wchar_t *)(v65 + *(int *)(v65 + 8));
      if ( !_wcsicmp(v66, L"Courier New")
        || !_wcsicmp(v66, L"Rod")
        || !_wcsicmp(v66, L"Rod Transparent")
        || !_wcsicmp(v66, L"Fixed Miriam Transparent")
        || !_wcsicmp(v66, L"Miriam Fixed")
        || !_wcsicmp(v66, L"Simplified Arabic Fixed") )
      {
        *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
      }
      v59 = v76;
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x20000000) != 0 )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(*(_QWORD *)this + 224LL), (struct tagFLOATOBJ_XFORM *)v80);
      v67 = *(_BYTE **)(v59 + 192);
      v68 = (float)*(__int16 *)(v79 + 56) * *(float *)&v80[12];
      *(float *)&v80[12] = v68;
      if ( v67 )
      {
        v69 = 0;
        if ( *v67 )
        {
          v70 = v67 + 4;
          while ( *v70 != (int)v68 )
          {
            ++v69;
            v70 += 80;
            if ( v69 >= (unsigned __int8)*v67 )
              goto LABEL_105;
          }
          v16 = (__int64)&v67[80 * v69 + 4];
        }
      }
LABEL_105:
      *(_QWORD *)(*(_QWORD *)this + 72LL) = v16;
    }
  }
  LODWORD(v16) = 1;
  return (unsigned int)v16;
}
