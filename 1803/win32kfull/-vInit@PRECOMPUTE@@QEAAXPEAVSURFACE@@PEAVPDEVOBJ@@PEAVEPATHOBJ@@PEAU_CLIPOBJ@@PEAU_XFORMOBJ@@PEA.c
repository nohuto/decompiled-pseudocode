/*
 * XREFs of ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C012BC28
 * Callers:
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C007C3CC (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C007C62C (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     EngLineTo @ 0x1C011BFD0 (EngLineTo.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C012B8F0 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C024BA60 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C024C580 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0257204 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00C7FE4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C011D180 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C011D214 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C012BE40 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C029FB0C (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 */

void __fastcall PRECOMPUTE::vInit(
        __int64 a1,
        SURFACE *a2,
        PDEVOBJ *a3,
        struct EPATHOBJ *a4,
        __int64 a5,
        struct _XFORMOBJ *a6,
        struct _LINEATTRS *a7,
        char a8,
        unsigned int a9,
        int a10)
{
  __int64 v13; // rax
  struct _RECTL *v14; // r11
  int v15; // r9d
  int v16; // r10d
  __int64 v17; // rcx
  struct _RECTL *v18; // r13
  __int64 v19; // rdx
  int v20; // eax
  PRECOMPUTE *v21; // rcx
  PRECOMPUTE *v22; // rcx
  RGNOBJ *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  RGNOBJ *v29; // rcx
  struct _RECTL *v30; // r12
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // r11
  PRECOMPUTE *v34; // rcx
  __int64 v35; // r11
  int v36; // eax
  RGNOBJ *v37; // rcx
  __int64 v38; // r11
  struct _RECTL *v39; // r14
  __int64 v40; // rcx
  __int64 v41; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+38h] [rbp-C8h]
  __int128 v43; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ *v44; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+58h] [rbp-A8h]
  _BYTE v46[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h]
  struct _RECTL v48; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v49[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v50; // [rsp+F8h] [rbp-8h]
  _BYTE v51[32]; // [rsp+140h] [rbp+40h] BYREF
  int v52; // [rsp+160h] [rbp+60h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *((_QWORD *)a4 + 2) = 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  *((_QWORD *)a4 + 3) = 0LL;
  *((_QWORD *)a4 + 5) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  *((_QWORD *)a4 + 6) = 0LL;
  *((_QWORD *)a4 + 8) = 0LL;
  v13 = *(_QWORD *)a3;
  v44 = a6;
  if ( (*(_DWORD *)(v13 + 40) & 0x8000) != 0
    || !PDEVOBJ::bAllowShareAccess(a3)
    || (unsigned int)SURFACE::bRedirectionBitmap(a2) )
  {
    *(_QWORD *)(a1 + 32) = a4;
    return;
  }
  if ( !a10 )
  {
    if ( (a7->fl & 1) == 0 )
    {
LABEL_151:
      *(_QWORD *)(a1 + 32) = a4;
LABEL_152:
      v40 = *(_QWORD *)(a1 + 32);
      if ( v40 )
      {
        *(_QWORD *)(v40 + 16) = *(_QWORD *)a1;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = *(_QWORD *)(a1 + 24);
      }
      return;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
    if ( v50 == v38
      || !EPATHOBJ::bClone((EPATHOBJ *)v49, a4)
      || (v49[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v49)
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, a6, a7) )
    {
      goto LABEL_142;
    }
    if ( *(_BYTE *)(a5 + 20) )
    {
      v48.top = 16 * *(_DWORD *)(a5 + 8);
      v39 = &v48;
      v48.bottom = 16 * *(_DWORD *)(a5 + 16);
    }
    else
    {
      v39 = 0LL;
    }
    v42 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v41, (struct EPATHOBJ *)v49, a9, v39);
    if ( !v41 )
      goto LABEL_139;
    *(_QWORD *)(a1 + 8) = v41;
    if ( a9 != 2 )
    {
      DWORD2(v43) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v43, (struct EPATHOBJ *)v49, 2u, v39);
      if ( !(_QWORD)v43 )
      {
        REGION::vDeleteREGION(*(REGION **)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        if ( DWORD2(v43) == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
LABEL_139:
        if ( v42 != 1 )
          goto LABEL_142;
        v23 = (RGNOBJ *)&v41;
        goto LABEL_141;
      }
      *(_QWORD *)(a1 + 16) = v43;
      if ( DWORD2(v43) == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
    }
    if ( v42 != 1 )
      goto LABEL_149;
    v37 = (RGNOBJ *)&v41;
    goto LABEL_148;
  }
  if ( a10 == 1 )
  {
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v30 = v14;
      v31 = *(_QWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      v32 = (int)*(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL) >> 4;
      v43 = *(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      if ( *(_DWORD *)(a5 + 4) > v32
        || *(_DWORD *)(a5 + 12) < (DWORD2(v43) + 15) >> 4
        || *(_DWORD *)(a5 + 8) > SHIDWORD(v31) >> 4
        || *(_DWORD *)(a5 + 16) < (HIDWORD(v43) + 15) >> 4 )
      {
        v30 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
      if ( v50 != v33
        && EPATHOBJ::bClone((EPATHOBJ *)v49, a4)
        && ((v49[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v49))
        && (!a7 || (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, a6, a7))
        && (unsigned int)PRECOMPUTE::bPreComputeFast(v34, (struct EPATHOBJ *)v49, a4, v30, 1u) )
      {
        goto LABEL_149;
      }
      goto LABEL_142;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
    if ( v50 == v35
      || !EPATHOBJ::bClone((EPATHOBJ *)v49, a4)
      || (v49[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v49)
      || a7 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, a6, a7) )
    {
      goto LABEL_142;
    }
    v36 = *(_DWORD *)(a5 + 8);
    DWORD2(v43) = 0;
    v48.top = 16 * v36;
    v48.bottom = 16 * *(_DWORD *)(a5 + 16);
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v43, (struct EPATHOBJ *)v49, a9, &v48);
    if ( !(_QWORD)v43 )
    {
      if ( DWORD2(v43) != 1 )
        goto LABEL_142;
      v23 = (RGNOBJ *)&v43;
      goto LABEL_141;
    }
    *(_QWORD *)a1 = v43;
    if ( DWORD2(v43) != 1 )
      goto LABEL_149;
    v37 = (RGNOBJ *)&v43;
LABEL_148:
    RGNOBJ::vDeleteRGNOBJ(v37);
    goto LABEL_149;
  }
  if ( a10 != 2 )
    goto LABEL_152;
  v15 = *(_DWORD *)(a5 + 8);
  v16 = *(_DWORD *)(a5 + 16);
  v48.top = 16 * v15;
  v48.bottom = 16 * v16;
  if ( (a7->fl & 1) == 0 || a8 == 13 )
  {
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v18 = v14;
      v19 = *(_QWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      v20 = (int)*(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL) >> 4;
      v43 = *(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      if ( *(_DWORD *)(a5 + 4) > v20
        || *(_DWORD *)(a5 + 12) < (DWORD2(v43) + 15) >> 4
        || v15 > SHIDWORD(v19) >> 4
        || v16 < (HIDWORD(v43) + 15) >> 4 )
      {
        v18 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
      if ( !v50 || !EPATHOBJ::bClone((EPATHOBJ *)v49, a4) )
        goto LABEL_142;
      if ( (v49[0] & 1) == 0 )
      {
LABEL_45:
        if ( !(unsigned int)PRECOMPUTE::bPreComputeFast(v21, (struct EPATHOBJ *)v49, a4, v18, 1u) )
        {
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          goto LABEL_142;
        }
        if ( (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, v44, a7)
          || !(unsigned int)PRECOMPUTE::bPreComputeFast(v22, (struct EPATHOBJ *)v49, a4, v18, 2u) )
        {
          v26 = *((_QWORD *)a4 + 6);
          if ( v26 )
            Win32FreePool(v26);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          *((_QWORD *)a4 + 6) = 0LL;
          *((_DWORD *)a4 + 14) = 0;
          goto LABEL_142;
        }
        DWORD2(v43) = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v43, (struct EPATHOBJ *)v49, a9, &v48);
        if ( !(_QWORD)v43 )
        {
          v24 = *((_QWORD *)a4 + 6);
          if ( v24 )
            Win32FreePool(v24);
          v25 = *((_QWORD *)a4 + 8);
          if ( v25 )
            Win32FreePool(v25);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          *((_QWORD *)a4 + 6) = 0LL;
          *((_QWORD *)a4 + 7) = 0LL;
          *((_QWORD *)a4 + 8) = 0LL;
LABEL_76:
          if ( DWORD2(v43) != 1 )
            goto LABEL_142;
          v23 = (RGNOBJ *)&v43;
LABEL_141:
          RGNOBJ::vDeleteRGNOBJ(v23);
          goto LABEL_142;
        }
        *(_QWORD *)(a1 + 8) = v43;
        if ( a9 != 2 )
        {
          v42 = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v41, (struct EPATHOBJ *)v49, 2u, &v48);
          if ( !v41 )
          {
            v27 = *((_QWORD *)a4 + 6);
            if ( v27 )
              Win32FreePool(v27);
            v28 = *((_QWORD *)a4 + 8);
            if ( v28 )
              Win32FreePool(v28);
            if ( *(_QWORD *)a1 )
            {
              REGION::vDeleteREGION(*(REGION **)a1);
              *(_QWORD *)a1 = 0LL;
            }
            REGION::vDeleteREGION(*(REGION **)(a1 + 8));
            *(_QWORD *)(a1 + 8) = 0LL;
            *((_QWORD *)a4 + 6) = 0LL;
            *((_QWORD *)a4 + 7) = 0LL;
            *((_QWORD *)a4 + 8) = 0LL;
            if ( v42 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
            goto LABEL_76;
          }
          *(_QWORD *)(a1 + 16) = v41;
          if ( v42 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
        }
        if ( DWORD2(v43) == 1 )
        {
          v29 = (RGNOBJ *)&v43;
LABEL_97:
          RGNOBJ::vDeleteRGNOBJ(v29);
        }
LABEL_149:
        EPATHOBJ::vUnlock((EPATHOBJ *)v49);
        if ( v52 )
          PopThreadGuardedObject(v51);
        goto LABEL_151;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)v49) )
        goto LABEL_142;
      v42 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v41, (struct EPATHOBJ *)v49, a9, &v48);
      if ( v41 )
      {
        *(_QWORD *)a1 = v41;
        if ( v42 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
        goto LABEL_45;
      }
LABEL_48:
      if ( v42 != 1 )
        goto LABEL_142;
      v23 = (RGNOBJ *)&v41;
      goto LABEL_141;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
    if ( !v50
      || !EPATHOBJ::bClone((EPATHOBJ *)v49, a4)
      || (v49[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v49)
      || (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v49, (struct EPATHOBJ *)v49, a6, a7) )
    {
      goto LABEL_142;
    }
    v42 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v41, (struct EPATHOBJ *)v49, a9, &v48);
    if ( !v41 )
      goto LABEL_48;
    *(_QWORD *)(a1 + 8) = v41;
    if ( a9 != 2 )
    {
      DWORD2(v43) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v43, (struct EPATHOBJ *)v49, 2u, &v48);
      if ( !(_QWORD)v43 )
      {
        REGION::vDeleteREGION(*(REGION **)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        if ( DWORD2(v43) == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
        goto LABEL_48;
      }
      *(_QWORD *)(a1 + 16) = v43;
      if ( DWORD2(v43) == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
    }
    if ( v42 != 1 )
      goto LABEL_149;
    v29 = (RGNOBJ *)&v41;
    goto LABEL_97;
  }
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v49);
  if ( v50 && EPATHOBJ::bClone((EPATHOBJ *)v49, a4) )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v46);
    if ( v47
      && (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v46, (struct EPATHOBJ *)v49, a6, a7)
      && (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v46, (struct EPATHOBJ *)v49, a6, a7)
      && ((v49[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v49)) )
    {
      v42 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v41, (struct EPATHOBJ *)v46, 2u, 0LL);
      v45 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v44, (struct EPATHOBJ *)v49, a9, 0LL);
      v17 = v41;
      if ( v41 && v44 )
      {
        *(_QWORD *)a1 = v44;
        *(_QWORD *)(a1 + 24) = v17;
        if ( v45 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
        if ( v42 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v46);
        goto LABEL_149;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
      if ( v45 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
      if ( v42 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v46);
  }
LABEL_142:
  EPATHOBJ::vUnlock((EPATHOBJ *)v49);
  if ( v52 )
    PopThreadGuardedObject(v51);
}
