/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026FC58
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009D094 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C009FF28 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     UIntAdd @ 0x1C010FCAC (UIntAdd.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     LongLongMult @ 0x1C015FCF4 (LongLongMult.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     UIntMult @ 0x1C01C736C (UIntMult.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C026FB34 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C02703D0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0270658 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C02708BC (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C0270938 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C02709D0 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C027430C (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        struct _POINTFIX *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  FIX v9; // ecx
  unsigned int v10; // esi
  struct _POINTFIX v11; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  struct _POINTFIX *v15; // r13
  ERECTL *v16; // r9
  unsigned int v17; // r14d
  FIX x; // ecx
  char *v19; // rsi
  struct _POINTFIX v20; // rcx
  unsigned int v21; // edx
  struct _POINTFIX v22; // r10
  UINT v23; // r9d
  unsigned int v24; // r13d
  UINT y; // r11d
  unsigned int v26; // r8d
  UINT v27; // ecx
  __int64 v28; // r10
  __int64 v29; // r10
  unsigned int v30; // r11d
  UINT v31; // eax
  UINT v32; // eax
  bool v33; // cc
  __int64 v34; // rdx
  __int64 v35; // r10
  FIX v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r10
  int v40; // r8d
  int v41; // r11d
  struct _POINTFIX *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct REGION *v48; // rax
  struct ECLIPOBJ *v49; // rdx
  __int64 v50; // r10
  __int64 v51; // r14
  __int64 v52; // rdx
  struct SURFACE *v53; // rax
  struct _POINTFIX v54; // r8
  BOOL (__stdcall *v55)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // r12
  UINT puResult; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v57; // [rsp+68h] [rbp-98h] BYREF
  UINT uAugend[2]; // [rsp+78h] [rbp-88h] BYREF
  char v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+84h] [rbp-7Ch]
  UINT uMultiplicand; // [rsp+88h] [rbp-78h]
  int v62; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+94h] [rbp-6Ch]
  int v64; // [rsp+98h] [rbp-68h]
  int v65; // [rsp+9Ch] [rbp-64h]
  _BYTE v66[4]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v67[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+F0h] [rbp-10h]
  int v70; // [rsp+F8h] [rbp-8h]
  int v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+30h]

  BLTRECORD::vExtrema((BLTRECORD *)this);
  if ( (a4 & 0xD4) != 0 )
  {
    v15 = this + 22;
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[22]);
    ERECTL::vOrder(v16);
    v17 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
    {
      x = this[24].x;
      this[24].x = this[25].x;
      this[25].x = x;
    }
    v19 = 0LL;
    if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      if ( this[24].x < 0 )
        goto LABEL_9;
      if ( this[24].y < 0 )
        goto LABEL_9;
      v20 = this[10];
      if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v20 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v20 + 60LL) )
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 && BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      v21 = this[23].x - v15->x;
      v22 = this[10];
      v23 = this[24].x;
      v24 = this[23].y - this[22].y;
      y = this[24].y;
      v26 = *(_DWORD *)(*(_QWORD *)&v22 + 56LL);
      v57.m128i_i32[0] = this[22].y;
      uMultiplicand = y;
      if ( v26 >= v23 && (v27 = *(_DWORD *)(*(_QWORD *)&v22 + 60LL), v27 >= y) && v26 - v23 >= v21 && v27 - y >= v24 )
      {
        v15 = this + 22;
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)&v22 + 96LL) != 1 )
          goto LABEL_9;
        if ( *(_WORD *)(*(_QWORD *)&v22 + 100LL) )
          goto LABEL_9;
        if ( v26 < v21 )
          goto LABEL_9;
        if ( UIntAdd(v23, 7u, &puResult) < 0 )
          goto LABEL_9;
        uAugend[0] = puResult >> 3;
        if ( UIntMult(uMultiplicand, abs32(*(_DWORD *)(v28 + 88)), &puResult) < 0 )
          goto LABEL_9;
        if ( UIntAdd(uAugend[0], puResult, &puResult) < 0 )
          goto LABEL_9;
        v31 = *(_DWORD *)(v29 + 64);
        if ( puResult >= v31 )
          goto LABEL_9;
        v32 = (v31 - puResult) / v30;
        v33 = v24 <= v32;
        v15 = this + 22;
        if ( !v33 )
          this[23].y = v57.m128i_i32[0] + v32;
      }
    }
    v34 = *(_QWORD *)a3;
    v35 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *(_QWORD *)(*(_QWORD *)a3 + 48LL)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a3) + 50) )
    {
      v36 = this[27].x;
      if ( v36 == 52428 || v36 == 43724 )
      {
        if ( *(_QWORD *)(v35 + 496) && *(_QWORD *)(v34 + 496) )
        {
          BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v62);
          v40 = v65 + 1;
          v41 = v64 + 1;
          ++v65;
          ++v64;
          if ( (*(_DWORD *)(v39 + 36) & 0xE0) != 0 )
          {
            XDCOBJ::vAccumulate(a2, (struct ERECTL *)&v62);
            v40 = v65;
            v39 = *(_QWORD *)a2;
            v41 = v64;
          }
          v42 = this + 15;
          v43 = *(_DWORD *)(v39 + 40) & 1LL;
          this[15].x += 16 * *(_DWORD *)(v39 + 8 * v43 + 1016);
          this[15].y += 16 * *(_DWORD *)(v39 + 8 * v43 + 1020);
          this[16].x += 16 * *(_DWORD *)(v39 + 8 * v43 + 1016);
          this[16].y += 16 * *(_DWORD *)(v39 + 8 * v43 + 1020);
          this[17].x += 16 * *(_DWORD *)(v39 + 8 * v43 + 1016);
          this[17].y += 16 * *(_DWORD *)(v39 + 8 * v43 + 1020);
          this[18].x += 16 * *(_DWORD *)(v39 + 8 * v43 + 1016);
          this[18].y += 16 * *(_DWORD *)(v39 + 8 * v43 + 1020);
          v44 = *(_QWORD *)a3;
          v45 = *(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL;
          v15->x += *(_DWORD *)(*(_QWORD *)a3 + 8 * v45 + 1016);
          v15[1].x += *(_DWORD *)(v44 + 8 * v45 + 1016);
          v15->y += *(_DWORD *)(v44 + 8 * v45 + 1020);
          v15[1].y += *(_DWORD *)(v44 + 8 * v45 + 1020);
          v46 = *(_QWORD *)a2;
          v47 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1LL;
          v62 += *(_DWORD *)(*(_QWORD *)a2 + 8 * v47 + 1016);
          v64 = *(_DWORD *)(v46 + 8 * v47 + 1016) + v41;
          v63 += *(_DWORD *)(v46 + 8 * v47 + 1020);
          v65 = *(_DWORD *)(v46 + 8 * v47 + 1020) + v40;
          v48 = XDCOBJ::prgnEffRao((DC **)a2);
          v68 = 0LL;
          v69 = 0LL;
          v70 = 0;
          v71 = 1;
          v72 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v66, v48, (struct ERECTL *)&v62, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v67) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
            {
              v57 = v67[0];
              XDCOBJ::vAccumulateTight(a2, v49, &v57);
            }
            BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
            if ( (int)LongLongMult(this[16].y - (__int64)this[15].y, this[17].x - (__int64)v42->x, (__int64 *)uAugend) < 0
              || (int)LongLongMult(this[17].y - (__int64)this[15].y, this[16].x - (__int64)v42->x, v57.m128i_i64) < 0 )
            {
              EngSetLastError(0x57u);
              return 0;
            }
            else if ( *(_QWORD *)uAugend != v57.m128i_i64[0] )
            {
              ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
              v51 = 0LL;
              v52 = *(_QWORD *)a2;
              if ( *(__int16 *)(*(_QWORD *)a2 + 178LL) >= 0 )
                v51 = *(_QWORD *)a2 + 176LL;
              if ( this[27].x != 52428 )
              {
                v53 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
                if ( v53 )
                  v19 = (char *)v53 + 24;
              }
              v54 = this[8];
              if ( (*(_DWORD *)(*(_QWORD *)&v54 + 112LL) & 4) != 0 )
                v55 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v50 + 3248);
              else
                v55 = EngPlgBlt;
              return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))v55)(
                       (*(_QWORD *)&v54 + 24LL) & -(__int64)(v54 != 0LL),
                       (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                       v19,
                       v66,
                       *(_QWORD *)&this[11],
                       v51,
                       v52 + 1200,
                       v42,
                       v15,
                       &this[24],
                       a5);
            }
          }
        }
        return v17;
      }
      else
      {
        *(_QWORD *)uAugend = 0LL;
        v59 = 0;
        v60 = 0;
        v57.m128i_i64[0] = 0LL;
        v57.m128i_i8[8] = 0;
        v57.m128i_i32[3] = 0;
        if ( (unsigned int)BLTRECORD::bRotate(
                             (BLTRECORD *)this,
                             a3,
                             (struct SURFMEM *)&v57,
                             (struct SURFMEM *)uAugend,
                             a4,
                             a5)
          && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]),
              (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15)) )
        {
          v37 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
          v38 = *(_QWORD *)a2;
          *(_DWORD *)(v38 + 36) |= 0x10u;
          *(_QWORD *)(v38 + 1136) = 0LL;
        }
        else
        {
          v37 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v57);
        SURFMEM::~SURFMEM((SURFMEM *)uAugend);
        return v37;
      }
    }
LABEL_9:
    EngSetLastError(0x57u);
    return 0LL;
  }
  BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[24]);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
  {
    v9 = this[24].x;
    this[24].x = this[25].x;
    this[25].x = v9;
  }
  v10 = 0;
  if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
  {
    if ( this[24].x < 0 )
      goto LABEL_9;
    if ( this[24].y < 0 )
      goto LABEL_9;
    v11 = this[10];
    if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v11 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v11 + 60LL) )
      goto LABEL_9;
  }
  v57.m128i_i64[0] = 0LL;
  v57.m128i_i8[8] = 0;
  v57.m128i_i32[3] = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v57, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    if ( (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15) )
    {
      v13 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, a3, a4);
      v14 = *(_QWORD *)a2;
      *(_DWORD *)(v14 + 36) |= 0x10u;
      *(_QWORD *)(v14 + 1136) = 0LL;
      v10 = v13;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v57);
  return v10;
}
