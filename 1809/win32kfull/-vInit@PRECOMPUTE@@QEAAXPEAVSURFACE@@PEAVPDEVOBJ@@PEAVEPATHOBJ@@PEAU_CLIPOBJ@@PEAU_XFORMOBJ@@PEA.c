/*
 * XREFs of ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0150D14
 * Callers:
 *     EngLineTo @ 0x1C00FD110 (EngLineTo.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C013D880 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013EA40 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C01400B0 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0262FA0 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0263A20 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026A288 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C01402F4 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014349C (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014F120 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02B21A8 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
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
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // rcx
  struct _RECTL *v17; // r13
  __int64 v18; // rdx
  int v19; // eax
  PRECOMPUTE *v20; // rcx
  PRECOMPUTE *v21; // rcx
  RGNOBJ *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  RGNOBJ *v28; // rcx
  __int64 v29; // rax
  struct _RECTL *v30; // r12
  __int64 v31; // rdx
  int v32; // eax
  PRECOMPUTE *v33; // rcx
  struct _RECTL *v34; // r14
  __int64 v35; // rcx
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+38h] [rbp-C8h]
  __int128 v38; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ *v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h]
  _BYTE v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h]
  struct _RECTL v43; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v44[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-8h]
  _BYTE v46[32]; // [rsp+140h] [rbp+40h] BYREF
  int v47; // [rsp+160h] [rbp+60h]

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
  v39 = a6;
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
LABEL_141:
      *(_QWORD *)(a1 + 32) = a4;
LABEL_142:
      v35 = *(_QWORD *)(a1 + 32);
      if ( v35 )
      {
        *(_QWORD *)(v35 + 16) = *(_QWORD *)a1;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = *(_QWORD *)(a1 + 24);
      }
      return;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v44);
    if ( !v45
      || !EPATHOBJ::bClone((EPATHOBJ *)v44, a4)
      || (v44[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v44)
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v44, (struct EPATHOBJ *)v44, a6, a7) )
    {
      goto LABEL_132;
    }
    if ( *(_BYTE *)(a5 + 20) )
    {
      v43.top = 16 * *(_DWORD *)(a5 + 8);
      v34 = &v43;
      v43.bottom = 16 * *(_DWORD *)(a5 + 16);
    }
    else
    {
      v34 = 0LL;
    }
    v36 = 0LL;
    v37 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v44, a9, v34);
    if ( v36 )
    {
      *(_QWORD *)(a1 + 8) = v36;
      if ( a9 == 2 )
        goto LABEL_136;
      *(_QWORD *)&v38 = 0LL;
      DWORD2(v38) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v38, (struct EPATHOBJ *)v44, 2u, v34);
      v29 = v38;
      if ( (_QWORD)v38 )
      {
LABEL_134:
        *(_QWORD *)(a1 + 16) = v29;
        if ( DWORD2(v38) == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
        goto LABEL_136;
      }
      REGION::vDeleteREGION(*(REGION **)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
      if ( DWORD2(v38) == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
    }
    if ( v37 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
    goto LABEL_132;
  }
  if ( a10 == 1 )
  {
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v30 = 0LL;
      v31 = *(_QWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      v32 = (int)*(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL) >> 4;
      v38 = *(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      if ( *(_DWORD *)(a5 + 4) > v32
        || *(_DWORD *)(a5 + 12) < (DWORD2(v38) + 15) >> 4
        || *(_DWORD *)(a5 + 8) > SHIDWORD(v31) >> 4
        || *(_DWORD *)(a5 + 16) < (HIDWORD(v38) + 15) >> 4 )
      {
        v30 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v44);
      if ( v45
        && EPATHOBJ::bClone((EPATHOBJ *)v44, a4)
        && ((v44[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v44))
        && (!a7 || (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v44, (struct EPATHOBJ *)v44, a6, a7))
        && (unsigned int)PRECOMPUTE::bPreComputeFast(v33, (struct EPATHOBJ *)v44, a4, v30, 1u) )
      {
        goto LABEL_139;
      }
      goto LABEL_132;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v44);
    if ( !v45
      || !EPATHOBJ::bClone((EPATHOBJ *)v44, a4)
      || (v44[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v44)
      || a7 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v44, (struct EPATHOBJ *)v44, a6, a7) )
    {
      goto LABEL_132;
    }
    v43.top = 16 * *(_DWORD *)(a5 + 8);
    v43.bottom = 16 * *(_DWORD *)(a5 + 16);
    *(_QWORD *)&v38 = 0LL;
    DWORD2(v38) = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v38, (struct EPATHOBJ *)v44, a9, &v43);
    if ( !(_QWORD)v38 )
      goto LABEL_60;
    *(_QWORD *)a1 = v38;
LABEL_80:
    if ( DWORD2(v38) != 1 )
      goto LABEL_139;
    v28 = (RGNOBJ *)&v38;
    goto LABEL_138;
  }
  if ( a10 != 2 )
    goto LABEL_142;
  v14 = *(_DWORD *)(a5 + 8);
  v15 = *(_DWORD *)(a5 + 16);
  v43.top = 16 * v14;
  v43.bottom = 16 * v15;
  if ( (a7->fl & 1) == 0 || a8 == 13 )
  {
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v17 = 0LL;
      v18 = *(_QWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      v19 = (int)*(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL) >> 4;
      v38 = *(_OWORD *)(*((_QWORD *)a4 + 1) + 48LL);
      if ( *(_DWORD *)(a5 + 4) > v19
        || *(_DWORD *)(a5 + 12) < (DWORD2(v38) + 15) >> 4
        || v14 > SHIDWORD(v18) >> 4
        || v15 < (HIDWORD(v38) + 15) >> 4 )
      {
        v17 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v44);
      if ( !v45 || !EPATHOBJ::bClone((EPATHOBJ *)v44, a4) )
        goto LABEL_132;
      if ( (v44[0] & 1) == 0 )
        goto LABEL_44;
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)v44) )
        goto LABEL_132;
      v36 = 0LL;
      v37 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v44, a9, &v43);
      if ( v36 )
      {
        *(_QWORD *)a1 = v36;
        if ( v37 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
LABEL_44:
        if ( !(unsigned int)PRECOMPUTE::bPreComputeFast(v20, (struct EPATHOBJ *)v44, a4, v17, 1u) )
        {
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          goto LABEL_132;
        }
        if ( (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v44, (struct EPATHOBJ *)v44, v39, a7)
          || !(unsigned int)PRECOMPUTE::bPreComputeFast(v21, (struct EPATHOBJ *)v44, a4, v17, 2u) )
        {
          v25 = *((_QWORD *)a4 + 6);
          if ( v25 )
            Win32FreePool(v25);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          *((_QWORD *)a4 + 6) = 0LL;
          *((_DWORD *)a4 + 14) = 0;
          goto LABEL_132;
        }
        *(_QWORD *)&v38 = 0LL;
        DWORD2(v38) = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v38, (struct EPATHOBJ *)v44, a9, &v43);
        if ( !(_QWORD)v38 )
        {
          v23 = *((_QWORD *)a4 + 6);
          if ( v23 )
            Win32FreePool(v23);
          v24 = *((_QWORD *)a4 + 8);
          if ( v24 )
            Win32FreePool(v24);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          *((_QWORD *)a4 + 6) = 0LL;
          *((_QWORD *)a4 + 7) = 0LL;
          *((_QWORD *)a4 + 8) = 0LL;
LABEL_60:
          if ( DWORD2(v38) != 1 )
            goto LABEL_132;
          v22 = (RGNOBJ *)&v38;
LABEL_62:
          RGNOBJ::vDeleteRGNOBJ(v22);
          goto LABEL_132;
        }
        *(_QWORD *)(a1 + 8) = v38;
        if ( a9 != 2 )
        {
          v36 = 0LL;
          v37 = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v44, 2u, &v43);
          if ( !v36 )
          {
            v26 = *((_QWORD *)a4 + 6);
            if ( v26 )
              Win32FreePool(v26);
            v27 = *((_QWORD *)a4 + 8);
            if ( v27 )
              Win32FreePool(v27);
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
            if ( v37 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
            goto LABEL_60;
          }
          *(_QWORD *)(a1 + 16) = v36;
          if ( v37 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
        }
        goto LABEL_80;
      }
LABEL_47:
      if ( v37 != 1 )
        goto LABEL_132;
      v22 = (RGNOBJ *)&v36;
      goto LABEL_62;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v44);
    if ( !v45
      || !EPATHOBJ::bClone((EPATHOBJ *)v44, a4)
      || (v44[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v44)
      || (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v44, (struct EPATHOBJ *)v44, a6, a7) )
    {
      goto LABEL_132;
    }
    v36 = 0LL;
    v37 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v44, a9, &v43);
    if ( !v36 )
      goto LABEL_47;
    *(_QWORD *)(a1 + 8) = v36;
    if ( a9 != 2 )
    {
      *(_QWORD *)&v38 = 0LL;
      DWORD2(v38) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v38, (struct EPATHOBJ *)v44, 2u, &v43);
      v29 = v38;
      if ( !(_QWORD)v38 )
      {
        REGION::vDeleteREGION(*(REGION **)(a1 + 8));
        *(_QWORD *)(a1 + 8) = 0LL;
        if ( DWORD2(v38) == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
        goto LABEL_47;
      }
      goto LABEL_134;
    }
LABEL_136:
    if ( v37 != 1 )
      goto LABEL_139;
    v28 = (RGNOBJ *)&v36;
LABEL_138:
    RGNOBJ::vDeleteRGNOBJ(v28);
LABEL_139:
    EPATHOBJ::vUnlock((EPATHOBJ *)v44);
    if ( v47 )
      PopThreadGuardedObject(v46);
    goto LABEL_141;
  }
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v44);
  if ( v45 && EPATHOBJ::bClone((EPATHOBJ *)v44, a4) )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v41);
    if ( v42
      && (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v41, (struct EPATHOBJ *)v44, a6, a7)
      && (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v41, (struct EPATHOBJ *)v44, a6, a7)
      && ((v44[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v44)) )
    {
      v36 = 0LL;
      v37 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v41, 2u, 0LL);
      v39 = 0LL;
      v40 = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v39, (struct EPATHOBJ *)v44, a9, 0LL);
      v16 = v36;
      if ( v36 && v39 )
      {
        *(_QWORD *)a1 = v39;
        *(_QWORD *)(a1 + 24) = v16;
        if ( v40 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
        if ( v37 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
        goto LABEL_139;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
      if ( v40 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
      if ( v37 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
  }
LABEL_132:
  EPATHOBJ::vUnlock((EPATHOBJ *)v44);
  if ( v47 )
    PopThreadGuardedObject(v46);
}
