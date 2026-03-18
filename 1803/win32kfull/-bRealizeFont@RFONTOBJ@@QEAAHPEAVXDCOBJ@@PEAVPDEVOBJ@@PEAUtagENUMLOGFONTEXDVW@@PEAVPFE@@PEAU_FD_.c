/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0085C94
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000363C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C0277DF4 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0084734 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0084F4C (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C00851D0 (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0085350 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0086B98 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088D5C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CCD0C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CCDE0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C00CCEF4 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE388 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00CE3D8 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00CE480 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF20 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C00EBFDC (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C00FC9BC (UmfdQueryFontCapsEx.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C010C814 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C013C1D4 (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C013C200 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     GetFontIntensityCorrection @ 0x1C0244D64 (GetFontIntensityCorrection.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C0278498 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 *     ?QueryFontCaps@PDEVOBJ@@QEAAJKPEAK@Z @ 0x1C02905EC (-QueryFontCaps@PDEVOBJ@@QEAAJKPEAK@Z.c)
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
  struct PDEVOBJ *v14; // r14
  struct RFONT *v15; // r13
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rcx
  char v34; // r15
  int v35; // r9d
  __int64 v36; // rcx
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // r14d
  unsigned int v42; // ecx
  __int64 v43; // r13
  __int64 v44; // rbx
  bool v45; // zf
  _DWORD *v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  int inited; // eax
  __int64 v50; // rbx
  unsigned int v51; // ecx
  __int64 v52; // rbx
  int v53; // eax
  unsigned int v54; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rdx
  int FontCaps; // eax
  unsigned __int16 v62[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct RFONT *v63; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C0h] BYREF
  PDEVOBJ *v65; // [rsp+48h] [rbp-B8h]
  unsigned int v66[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct PFE *v67; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A0h]
  _BYTE v69[32]; // [rsp+68h] [rbp-98h] BYREF
  _FD_DEVICEMETRICS v70; // [rsp+90h] [rbp-70h] BYREF

  v67 = a5;
  v65 = a3;
  v14 = a3;
  v63 = a2;
  v15 = a2;
  v16 = 0;
  *(_QWORD *)v66 = PFEOBJ::pfdg((PFEOBJ *)&v67);
  if ( !*(_QWORD *)v66 )
    goto LABEL_67;
  v17 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>();
  *(_QWORD *)this = v17;
  if ( !v17 )
  {
    PFEOBJ::vFreepfdg((PFEOBJ *)&v67);
LABEL_67:
    *(_QWORD *)this = 0LL;
    return v16;
  }
  v68 = *(_QWORD *)a5;
  *(_DWORD *)(v17 + 32) = PDEVOBJ::ulLogPixelsX(v14);
  v18 = *(_QWORD *)this;
  *(_DWORD *)(v18 + 36) = PDEVOBJ::ulLogPixelsY(v14);
  *(_DWORD *)(*(_QWORD *)this + 40LL) = a9;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = a8 | PFEOBJ::flFontType((PFEOBJ *)&v67);
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)(v68 + 80);
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 4) != 0 )
    v19 = *((unsigned int *)a5 + 20);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = v19;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 120LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 136LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 348LL) = *a6;
  *(struct _POINTL *)(*(_QWORD *)this + 632LL) = *a7;
  *(_QWORD *)(*(_QWORD *)this + 208LL) = *(_QWORD *)this + 224LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)(*(_QWORD *)this + 208LL));
  v20 = *(_QWORD *)this;
  v21 = *((_QWORD *)a5 + 4);
  v64 = v21;
  if ( (*(_DWORD *)(v20 + 12) & 0x30000000) == 0x30000000 )
  {
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v20 + 208), (struct tagFLOATOBJ_XFORM *)v69);
    v56 = *(_QWORD *)(v68 + 192);
    *(float *)&v69[12] = *(float *)&v69[12] * (float)*(__int16 *)(v21 + 56);
    *(_QWORD *)(*(_QWORD *)this + 896LL) = GetFontIntensityCorrection(v56, (unsigned int)(int)*(float *)&v69[12]);
    v20 = *(_QWORD *)this;
  }
  *(_QWORD *)(v20 + 104) = a5;
  *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)a5;
  *(_QWORD *)(*(_QWORD *)this + 704LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 712LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 720LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 816LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 696LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 824LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 820LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 828LL) = *((_DWORD *)a5 + 3) & 0x100;
  v22 = *(_QWORD *)this;
  if ( v14 )
  {
    *(_QWORD *)(v22 + 88) = *(_QWORD *)v14;
    *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)(*(_QWORD *)v14 + 1792LL);
  }
  else
  {
    *(_QWORD *)(v22 + 88) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 96LL) = 0LL;
  }
  *(_DWORD *)(*(_QWORD *)this + 152LL) = 1;
  *(_DWORD *)(*(_QWORD *)this + 460LL) = *(_DWORD *)(*((_QWORD *)a5 + 4) + 48LL);
  *(_QWORD *)(*(_QWORD *)this + 464LL) = *(_QWORD *)v66;
  v62[0] = *(_WORD *)(v21 + 116);
  RFONTOBJ::vXlatGlyphArray(this, v62, 1u, v66, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 448LL) = v66[0];
  *(_DWORD *)(*(_QWORD *)this + 696LL) &= ~0x40u;
  memset(&v70, 0, sizeof(v70));
  *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(v68 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS((POINTL **)this, &v70) )
    goto LABEL_72;
  if ( !v15 )
    goto LABEL_15;
  *(POINTE *)(*(_QWORD *)this + 384LL) = v70.pteBase;
  *(POINTE *)(*(_QWORD *)this + 404LL) = v70.pteSide;
  v24 = *(_QWORD *)v15;
  v25 = *(_QWORD *)this;
  *(_OWORD *)(v25 + 156) = *(_OWORD *)(*(_QWORD *)v15 + 328LL);
  *(_OWORD *)(v25 + 172) = *(_OWORD *)(v24 + 344);
  *(_DWORD *)(v25 + 188) = *(_DWORD *)(v24 + 360);
  if ( !(unsigned int)RFONTOBJ::bCalcLayoutUnits(this, v15)
    || !bGetNtoWScales(
          (struct EPOINTFL *)(*(_QWORD *)this + 196LL),
          v15,
          (struct _FD_XFORM *)(*(_QWORD *)this + 348LL),
          (struct PFEOBJ *)&v67,
          (int *)(*(_QWORD *)this + 204LL)) )
  {
LABEL_72:
    memset(v69, 0, sizeof(v69));
    v60 = *(_QWORD *)this;
LABEL_74:
    PushThreadGuardedObject(v69, v60, Win32FreePool);
    RFONTOBJ::vDestroyFont(this, 1);
    PopThreadGuardedObject(v69);
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*(_QWORD *)this);
    goto LABEL_67;
  }
  v27 = *(_QWORD *)this;
  *(_DWORD *)v62 = 0;
  bFToL(v26, v62, 0LL);
  *(_DWORD *)(v27 + 312) = *(_DWORD *)v62;
  v28 = *(_QWORD *)this;
  *(_DWORD *)v62 = 0;
  bFToL(v29, v62, 0LL);
  *(_DWORD *)(v28 + 316) = *(_DWORD *)v62;
  v30 = *(_QWORD *)this;
  *(_DWORD *)v62 = 0;
  bFToL(v31, v62, 0LL);
  *(_DWORD *)(v30 + 320) = *(_DWORD *)v62;
  v32 = *(_QWORD *)this;
  *(_DWORD *)v62 = 0;
  bFToL(v33, v62, 0LL);
  *(_DWORD *)(v32 + 324) = *(_DWORD *)v62;
  *(_DWORD *)(*(_QWORD *)this + 420LL) = -1;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 80LL) + 68LL) == 1 )
  {
    v57 = *(_DWORD *)(v64 + 48);
    if ( (v57 & 4) == 0 )
    {
      if ( (v57 & 0x10) == 0 )
      {
        v59 = ulSimpleDeviceOrientation(this);
        goto LABEL_53;
      }
      v58 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_52:
      v59 = lNormAngle(v58);
LABEL_53:
      *(_DWORD *)(*(_QWORD *)this + 380LL) = v59;
      goto LABEL_15;
    }
LABEL_71:
    v58 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_52;
  }
  *(_DWORD *)(*(_QWORD *)this + 380LL) = RFONTOBJ::ulSimpleOrientation(this, v15);
  if ( *(_DWORD *)(*(_QWORD *)this + 380LL) >= 0xE10u && (*(_DWORD *)(*(_QWORD *)this + 460LL) & 0x10) != 0 )
    goto LABEL_71;
LABEL_15:
  v34 = 0;
  v35 = a10;
  *(_DWORD *)(*(_QWORD *)this + 640LL) = a10;
  v36 = *(_QWORD *)this;
  v64 = *(_QWORD *)(*(_QWORD *)this + 80LL);
  v37 = v64;
  if ( (struct PDEV *)v64 == qword_1C032FD38 )
  {
    v38 = UmfdQueryFontCapsEx(*(_QWORD *)(v36 + 24), v23, &v64);
    v35 = a10;
    if ( v38 != -1 )
      v34 = BYTE4(v64);
  }
  else if ( *(_QWORD *)(v64 + 3032) )
  {
    FontCaps = PDEVOBJ::QueryFontCaps((PDEVOBJ *)&v64, v23, v66);
    v35 = a10;
    if ( FontCaps != -1 )
      v34 = v66[1];
  }
  v39 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v37 + 40) & 0x2000) == 0 )
  {
    *(_DWORD *)(v39 + 76) = 1;
    *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 624LL) = 0;
    goto LABEL_32;
  }
  v40 = *(_DWORD *)(v39 + 12);
  *(_DWORD *)(v39 + 76) = 0;
  v41 = (v40 & 0x10010000) != 0 ? 400 : 800;
  *(_DWORD *)(*(_QWORD *)this + 72LL) = 1;
  v42 = v41;
  v43 = *(_QWORD *)this;
  if ( v35 )
  {
    *(_DWORD *)(v43 + 72) = 2;
  }
  else
  {
    v44 = *(_QWORD *)(v43 + 88);
    if ( v44 )
    {
      v45 = (*(_DWORD *)(v44 + 40) & 0x8000) == 0;
      v64 = *(_QWORD *)(v43 + 88);
      if ( !v45 )
      {
        if ( KeAreApcsDisabled() )
        {
LABEL_24:
          v42 = v41;
          if ( (*(_DWORD *)(v44 + 1816) & 0x40000000) != 0 )
          {
            v42 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v64);
            if ( v42 <= 0x320 )
              v42 = v41;
            if ( v42 > 0x960 )
              v42 = 2400;
          }
          v35 = a10;
          goto LABEL_26;
        }
        v43 = *(_QWORD *)this;
      }
      if ( *(_QWORD *)(v44 + 2976) )
      {
        memset(v69, 0, sizeof(v69));
        PushThreadGuardedObject(v69, v43, vRestartbRealizeFont);
        *(_DWORD *)(*(_QWORD *)this + 72LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v44 + 2976))(
                                                *(_QWORD *)(*(_QWORD *)this + 96LL),
                                                *(_QWORD *)this);
        PopThreadGuardedObject(v69);
      }
      goto LABEL_24;
    }
  }
LABEL_26:
  v46 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 72LL) == 1 )
  {
    if ( (v34 & 2) == 0 || (v46[115] & 0x8000) != 0 && (v46[82] > 2 * v42 || v46[85] > v42) )
      v46[18] = 2;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(*(_QWORD *)this + 72LL) != 2 )
  {
LABEL_31:
    v15 = v63;
    v14 = v65;
    goto LABEL_32;
  }
  v14 = v65;
  v15 = v63;
  if ( (v34 & 1) == 0 )
    v46[18] = 1;
LABEL_32:
  if ( *(_DWORD *)(*(_QWORD *)this + 72LL) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) &= 0x8FFEFFFF;
  if ( v35 )
  {
    v50 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 72LL) != 2 )
      goto LABEL_73;
  }
  v47 = *(_QWORD *)this;
  if ( !a11 || (v48 = 1, *(_DWORD *)(v47 + 380)) )
    v48 = 0;
  *(_DWORD *)(v47 + 628) = v48;
  inited = RFONTOBJ::bInitCache(this, a12);
  v50 = *(_QWORD *)this;
  if ( !inited )
  {
LABEL_73:
    memset(v69, 0, sizeof(v69));
    v60 = v50;
    goto LABEL_74;
  }
  *(_QWORD *)(v50 + 672) = 0LL;
  v64 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v45 = iUniqueStamp == -1;
  v51 = ++iUniqueStamp;
  if ( v45 )
  {
    v51 = 1;
    iUniqueStamp = 1;
  }
  **(_DWORD **)this = v51;
  if ( v14 )
  {
    *(_DWORD *)(*(_QWORD *)this + 644LL) = 1;
    v63 = PDEVOBJ::prfntActive(v14);
    RFONTOBJ::vInsert(this, &v63, 1LL);
    PDEVOBJ::prfntActive(v14, v63);
  }
  v52 = v68;
  v63 = *(struct RFONT **)(v68 + 72);
  RFONTOBJ::vInsert(this, &v63, 0LL);
  *(_QWORD *)(v52 + 72) = v63;
  SEMOBJ::vUnlock((SEMOBJ *)&v64);
  v53 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 72LL) == 1 )
    v54 = v53 | 1;
  else
    v54 = v53 & 0xFFFFFFFE;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = v54;
  if ( v15 )
    *(_DWORD *)(*(_QWORD *)this + 192LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 80LL) + 68LL);
  else
    *(_DWORD *)(*(_QWORD *)this + 192LL) = 0;
  if ( gbSystemDBCSFontEnabled && (*((_DWORD *)v67 + 3) & 0x10) != 0 )
    v16 = 1;
  *(_DWORD *)(*(_QWORD *)this + 692LL) = v16;
  return 1;
}
