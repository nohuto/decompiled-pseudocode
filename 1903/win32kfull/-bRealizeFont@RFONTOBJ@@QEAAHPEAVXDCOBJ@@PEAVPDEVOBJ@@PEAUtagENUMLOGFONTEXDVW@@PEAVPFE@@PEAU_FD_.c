/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00738D8
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0104EE8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A1414 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0053880 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00546C8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0054704 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0073698 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00742D8 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0074344 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0074608 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C00746D4 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0074728 (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0074754 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0074874 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C007489C (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C00748BC (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C0074AF0 (UmfdQueryFontCapsEx.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C0074B30 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0074E24 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0075210 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C0118634 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C01186A4 (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C013DBA0 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  struct PDEVOBJ *v14; // r13
  struct XDCOBJ *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  char v38; // r12
  int v39; // r9d
  __int64 v40; // rbx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // r14d
  unsigned int v44; // ecx
  __int64 v45; // r13
  __int64 v46; // rbx
  bool v47; // zf
  _DWORD *v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  int inited; // eax
  __int64 v52; // rbx
  unsigned int v53; // ecx
  __int64 v54; // rbx
  int v55; // eax
  unsigned int v56; // eax
  int v57; // ecx
  __int64 v58; // rcx
  char v59; // dl
  __int64 v60; // rcx
  __int64 v61; // rcx
  _BYTE *v62; // rdx
  float v63; // xmm0_4
  const wchar_t *v65; // rbx
  __int64 (__fastcall *v66)(__int64, _BYTE *); // rax
  int v67; // eax
  unsigned int v68; // ecx
  unsigned __int8 *v69; // r8
  unsigned __int16 v70[4]; // [rsp+30h] [rbp-D0h] BYREF
  PDEVOBJ *v71; // [rsp+38h] [rbp-C8h] BYREF
  struct XDCOBJ *v72; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v73[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct PFE *v74; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+58h] [rbp-A8h]
  _BYTE v76[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v77; // [rsp+64h] [rbp-9Ch]
  __int64 v78; // [rsp+68h] [rbp-98h]
  _BYTE v79[32]; // [rsp+70h] [rbp-90h] BYREF
  _FD_DEVICEMETRICS v80; // [rsp+90h] [rbp-70h] BYREF

  v74 = a5;
  v71 = a3;
  v14 = a3;
  v72 = a2;
  v15 = a2;
  v16 = 0LL;
  *(_QWORD *)v73 = PFEOBJ::pfdg((PFEOBJ *)&v74);
  if ( !*(_QWORD *)v73 )
    goto LABEL_85;
  v17 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>();
  *(_QWORD *)this = v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg((PFEOBJ *)&v74);
    goto LABEL_85;
  }
  v75 = *(_QWORD *)a5;
  *(_DWORD *)(v17 + 32) = PDEVOBJ::ulLogPixelsX(v14);
  v18 = *(_QWORD *)this;
  *(_DWORD *)(v18 + 36) = PDEVOBJ::ulLogPixelsY(v14);
  *(_DWORD *)(*(_QWORD *)this + 40LL) = a9;
  v19 = PFEOBJ::flFontType((PFEOBJ *)&v74);
  v20 = v75;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = a8 | v19;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)(v20 + 80);
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 4) != 0 )
    v21 = *((unsigned int *)a5 + 20);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = v21;
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
  v22 = *(_QWORD *)this;
  if ( v14 )
  {
    *(_QWORD *)(v22 + 104) = *(_QWORD *)v14;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)v14 + 1800LL);
  }
  else
  {
    *(_QWORD *)(v22 + 104) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 168LL) = 1;
  *(_DWORD *)(*(_QWORD *)this + 716LL) = *(_DWORD *)(*((_QWORD *)a5 + 4) + 48LL);
  *(_QWORD *)(*(_QWORD *)this + 472LL) = *(_QWORD *)v73;
  v23 = *((_QWORD *)a5 + 4);
  v78 = v23;
  v70[0] = *(_WORD *)(v23 + 116);
  RFONTOBJ::vXlatGlyphArray(this, v70, 1, v73, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 460LL) = v73[0];
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  memset(&v80, 0, sizeof(v80));
  *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)(v20 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS(this, &v80) )
    goto LABEL_83;
  if ( !v15 )
    goto LABEL_17;
  *(POINTE *)(*(_QWORD *)this + 396LL) = v80.pteBase;
  *(POINTE *)(*(_QWORD *)this + 416LL) = v80.pteSide;
  v25 = *(_QWORD *)v15;
  v26 = *(_QWORD *)this;
  *(_OWORD *)(v26 + 172) = *(_OWORD *)(*(_QWORD *)v15 + 320LL);
  *(_OWORD *)(v26 + 188) = *(_OWORD *)(v25 + 336);
  *(_DWORD *)(v26 + 204) = *(_DWORD *)(v25 + 352);
  if ( !(unsigned int)RFONTOBJ::bCalcLayoutUnits(this, v15)
    || !bGetNtoWScales(
          (struct EPOINTFL *)(*(_QWORD *)this + 212LL),
          v15,
          (struct _FD_XFORM *)(*(_QWORD *)this + 360LL),
          (struct PFEOBJ *)&v74,
          (int *)(*(_QWORD *)this + 220LL)) )
  {
LABEL_83:
    memset(v79, 0, sizeof(v79));
    PushThreadGuardedObject(v79, *(_QWORD *)this, Win32FreePool);
LABEL_84:
    RFONTOBJ::vDestroyFont(this, 1);
    PopThreadGuardedObject(v79);
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*(_QWORD *)this);
LABEL_85:
    *(_QWORD *)this = 0LL;
    return (unsigned int)v16;
  }
  v28 = *(_QWORD *)this;
  *(_DWORD *)v70 = 0;
  bFToL(v27, v70, 0LL);
  *(_DWORD *)(v28 + 328) = *(_DWORD *)v70;
  v29 = *(_QWORD *)this;
  *(_DWORD *)v70 = 0;
  bFToL(v30, v70, 0LL);
  *(_DWORD *)(v29 + 332) = *(_DWORD *)v70;
  v31 = *(_QWORD *)this;
  *(_DWORD *)v70 = 0;
  bFToL(v32, v70, 0LL);
  *(_DWORD *)(v31 + 336) = *(_DWORD *)v70;
  v33 = *(_QWORD *)this;
  *(_DWORD *)v70 = 0;
  bFToL(v34, v70, 0LL);
  *(_DWORD *)(v33 + 340) = *(_DWORD *)v70;
  *(_DWORD *)(*(_QWORD *)this + 432LL) = -1;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 976LL) + 208LL) == 1 )
  {
    v35 = *(_DWORD *)(v23 + 48);
    if ( (v35 & 4) == 0 )
    {
      if ( (v35 & 0x10) == 0 )
      {
        v37 = ulSimpleDeviceOrientation(this);
        goto LABEL_16;
      }
      v36 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_15:
      v37 = lNormAngle(v36);
LABEL_16:
      *(_DWORD *)(*(_QWORD *)this + 392LL) = v37;
      goto LABEL_17;
    }
LABEL_91:
    v36 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_15;
  }
  *(_DWORD *)(*(_QWORD *)this + 392LL) = RFONTOBJ::ulSimpleOrientation(this, v15);
  if ( *(_DWORD *)(*(_QWORD *)this + 392LL) >= 0xE10u && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x10) != 0 )
    goto LABEL_91;
LABEL_17:
  v38 = 0;
  v39 = a10;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = a10;
  v40 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  if ( (struct PDEV *)v40 == qword_1C0332E90 )
  {
    if ( (unsigned int)UmfdQueryFontCapsEx(*(_QWORD *)(*(_QWORD *)this + 24LL), v24, v76) != -1 )
      v38 = v77;
  }
  else
  {
    v66 = *(__int64 (__fastcall **)(__int64, _BYTE *))(v40 + 3040);
    if ( v66 )
    {
      v67 = v66(2LL, v76);
      v39 = a10;
      if ( v67 != -1 )
        v38 = v77;
    }
  }
  v41 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v40 + 40) & 0x2000) == 0 )
  {
    *(_DWORD *)(v41 + 92) = 1;
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
    goto LABEL_34;
  }
  v42 = *(_DWORD *)(v41 + 12);
  *(_DWORD *)(v41 + 92) = 0;
  v43 = (v42 & 0x10010000) != 0 ? 400 : 800;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  v44 = v43;
  v45 = *(_QWORD *)this;
  if ( v39 )
  {
    *(_DWORD *)(v45 + 88) = 2;
  }
  else
  {
    v46 = *(_QWORD *)(v45 + 104);
    if ( v46 )
    {
      v47 = (*(_DWORD *)(v46 + 40) & 0x8000) == 0;
      *(_QWORD *)v73 = *(_QWORD *)(v45 + 104);
      if ( !v47 )
      {
        if ( KeAreApcsDisabled() )
        {
LABEL_26:
          v44 = v43;
          if ( (*(_DWORD *)(v46 + 1824) & 0x40000000) != 0 )
          {
            v44 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)v73);
            if ( v44 <= 0x320 )
              v44 = v43;
            if ( v44 > 0x960 )
              v44 = 2400;
          }
          v39 = a10;
          goto LABEL_28;
        }
        v45 = *(_QWORD *)this;
      }
      if ( *(_QWORD *)(v46 + 2984) )
      {
        memset(v79, 0, sizeof(v79));
        PushThreadGuardedObject(v79, v45, vRestartbRealizeFont);
        *(_DWORD *)(*(_QWORD *)this + 88LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v46 + 2984))(
                                                *(_QWORD *)(*(_QWORD *)this + 112LL),
                                                *(_QWORD *)this);
        PopThreadGuardedObject(v79);
      }
      goto LABEL_26;
    }
  }
LABEL_28:
  v48 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
  {
    if ( (v38 & 2) == 0 || (v48[179] & 0x8000) != 0 && (v48[86] > 2 * v44 || v48[87] > v44) )
      v48[22] = 2;
    v15 = v72;
    v14 = v71;
  }
  else
  {
    v15 = v72;
    v14 = v71;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 && (v38 & 1) == 0 )
      v48[22] = 1;
  }
LABEL_34:
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) &= 0x8FFEFFFF;
  if ( v39 )
  {
    v52 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 2 )
      goto LABEL_102;
  }
  v49 = *(_QWORD *)this;
  if ( !a11 || (v50 = 1, *(_DWORD *)(v49 + 392)) )
    v50 = 0;
  *(_DWORD *)(v49 + 640) = v50;
  inited = RFONTOBJ::bInitCache(this, a12);
  v52 = *(_QWORD *)this;
  if ( !inited )
  {
LABEL_102:
    memset(v79, 0, sizeof(v79));
    PushThreadGuardedObject(v79, v52, Win32FreePool);
    goto LABEL_84;
  }
  *(_QWORD *)(v52 + 688) = 0LL;
  v72 = (struct XDCOBJ *)ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v47 = iUniqueStamp == -1;
  v53 = ++iUniqueStamp;
  if ( v47 )
  {
    v53 = 1;
    iUniqueStamp = 1;
  }
  **(_DWORD **)this = v53;
  if ( v14 )
  {
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
    v71 = PDEVOBJ::prfntActive(v14);
    RFONTOBJ::vInsert(this, &v71, 1LL);
    PDEVOBJ::prfntActive(v14, v71);
  }
  v54 = v75;
  v71 = *(PDEVOBJ **)(v75 + 72);
  RFONTOBJ::vInsert(this, &v71, 0LL);
  *(_QWORD *)(v54 + 72) = v71;
  SEMOBJ::vUnlock((SEMOBJ *)&v72);
  v55 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
    v56 = v55 | 1;
  else
    v56 = v55 & 0xFFFFFFFE;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = v56;
  if ( v15 )
    *(_DWORD *)(*(_QWORD *)this + 208LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 976LL) + 208LL);
  else
    *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
  if ( !gbSystemDBCSFontEnabled || (v57 = 1, (*((_DWORD *)v74 + 3) & 0x10) == 0) )
    v57 = 0;
  *(_DWORD *)(*(_QWORD *)this + 708LL) = v57;
  v58 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000000) != 0 )
  {
    if ( (*(_DWORD *)(v58 + 204) & 1) == 0 || (v59 = 1, *(_DWORD *)(v58 + 328)) )
      v59 = 0;
    v60 = *(_QWORD *)(*(_QWORD *)(v58 + 120) + 32LL);
    if ( (*(_DWORD *)(v60 + 48) & 0x401000) != 0 && v59 && *(_WORD *)(v60 + 46) <= 0x190u )
    {
      v65 = (const wchar_t *)(v60 + *(int *)(v60 + 8));
      if ( !_wcsicmp(v65, L"Courier New")
        || !_wcsicmp(v65, L"Rod")
        || !_wcsicmp(v65, L"Rod Transparent")
        || !_wcsicmp(v65, L"Fixed Miriam Transparent")
        || !_wcsicmp(v65, L"Miriam Fixed")
        || !_wcsicmp(v65, L"Simplified Arabic Fixed") )
      {
        *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
      }
      v54 = v75;
    }
    v61 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x20000000) != 0 )
    {
      memset(v79, 0, 24);
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v61 + 224), (struct tagFLOATOBJ_XFORM *)v79);
      v62 = *(_BYTE **)(v54 + 192);
      v63 = (float)*(__int16 *)(v78 + 56) * *(float *)&v79[12];
      *(float *)&v79[12] = v63;
      if ( v62 )
      {
        v68 = 0;
        if ( *v62 )
        {
          v69 = v62 + 4;
          while ( *v69 != (int)v63 )
          {
            ++v68;
            v69 += 80;
            if ( v68 >= (unsigned __int8)*v62 )
              goto LABEL_56;
          }
          v16 = (__int64)&v62[80 * v68 + 4];
        }
      }
LABEL_56:
      *(_QWORD *)(*(_QWORD *)this + 72LL) = v16;
    }
  }
  LODWORD(v16) = 1;
  return (unsigned int)v16;
}
