/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0124474 (GreMaskBlt.c)
 * Callees:
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C00091F0 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0009210 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C000928C (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C00092B4 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A22F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00A2320 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00DED28 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     UIntAdd @ 0x1C00F10CC (UIntAdd.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C01258E4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     UIntMult @ 0x1C01DA5A8 (UIntMult.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C0287CC4 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0287DE8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0288064 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
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
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct REGION *v47; // rax
  struct ECLIPOBJ *v48; // rdx
  __int64 v49; // r10
  __int64 v50; // r14
  __int64 v51; // rdx
  struct SURFACE *v52; // rax
  struct _POINTFIX v53; // r8
  UINT puResult; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTFIX *v56; // [rsp+68h] [rbp-98h] BYREF
  char v57; // [rsp+70h] [rbp-90h]
  int v58; // [rsp+74h] [rbp-8Ch]
  UINT uMultiplicand; // [rsp+78h] [rbp-88h]
  UINT uAugend; // [rsp+7Ch] [rbp-84h]
  __int128 v61; // [rsp+80h] [rbp-80h] BYREF
  int v62; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+94h] [rbp-6Ch]
  int v64; // [rsp+98h] [rbp-68h]
  int v65; // [rsp+9Ch] [rbp-64h]
  _BYTE v66[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v67[4]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v68; // [rsp+F0h] [rbp-10h]
  int v69; // [rsp+F8h] [rbp-8h]
  int v70; // [rsp+120h] [rbp+20h]
  __int64 v71; // [rsp+130h] [rbp+30h]

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
      LODWORD(v56) = this[22].y;
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
        uAugend = puResult >> 3;
        if ( UIntMult(uMultiplicand, abs32(*(_DWORD *)(v28 + 88)), &puResult) < 0 )
          goto LABEL_9;
        if ( UIntAdd(uAugend, puResult, &puResult) < 0 )
          goto LABEL_9;
        v31 = *(_DWORD *)(v29 + 64);
        if ( puResult >= v31 )
          goto LABEL_9;
        v32 = (v31 - puResult) / v30;
        v33 = v24 <= v32;
        v15 = this + 22;
        if ( !v33 )
          this[23].y = (_DWORD)v56 + v32;
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
          v42 = *(_DWORD *)(v39 + 40) & 1LL;
          v56 = this + 15;
          this[15].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[15].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          this[16].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[16].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          this[17].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[17].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          this[18].x += 16 * *(_DWORD *)(v39 + 8 * v42 + 1016);
          this[18].y += 16 * *(_DWORD *)(v39 + 8 * v42 + 1020);
          v43 = *(_QWORD *)a3;
          v44 = *(_DWORD *)(*(_QWORD *)a3 + 40LL) & 1LL;
          v15->x += *(_DWORD *)(*(_QWORD *)a3 + 8 * v44 + 1016);
          v15[1].x += *(_DWORD *)(v43 + 8 * v44 + 1016);
          v15->y += *(_DWORD *)(v43 + 8 * v44 + 1020);
          v15[1].y += *(_DWORD *)(v43 + 8 * v44 + 1020);
          v45 = *(_QWORD *)a2;
          v46 = *(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1LL;
          v62 += *(_DWORD *)(*(_QWORD *)a2 + 8 * v46 + 1016);
          v64 = *(_DWORD *)(v45 + 8 * v46 + 1016) + v41;
          v63 += *(_DWORD *)(v45 + 8 * v46 + 1020);
          v65 = *(_DWORD *)(v45 + 8 * v46 + 1020) + v40;
          v47 = XDCOBJ::prgnEffRao(a2);
          v68 = 0LL;
          v69 = 0;
          v70 = 1;
          v71 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v66, v47, (struct ERECTL *)&v62, 0);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v67) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
            {
              v61 = v67[0];
              XDCOBJ::vAccumulateTight(a2, v48, (struct ERECTL *)&v61);
            }
            BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
            ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
            v50 = 0LL;
            v51 = *(_QWORD *)a2;
            if ( *(__int16 *)(*(_QWORD *)a2 + 178LL) >= 0 )
              v50 = *(_QWORD *)a2 + 176LL;
            if ( this[27].x != 52428 )
            {
              v52 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
              if ( v52 )
                v19 = (char *)v52 + 24;
            }
            v53 = this[8];
            if ( (*(_DWORD *)(*(_QWORD *)&v53 + 112LL) & 4) != 0 )
              return (unsigned int)(*(__int64 (__fastcall **)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))(v49 + 3248))(
                                     (*(_QWORD *)&v53 + 24LL) & -(__int64)(v53 != 0LL),
                                     (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                                     v19,
                                     v66,
                                     *(_QWORD *)&this[11],
                                     v50,
                                     v51 + 1176,
                                     v56,
                                     v15,
                                     this + 24,
                                     a5);
            else
              return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))EngPlgBlt)(
                                     (*(_QWORD *)&v53 + 24LL) & -(__int64)(v53 != 0LL),
                                     (*(_QWORD *)&this[9] + 24LL) & -(__int64)(*(_QWORD *)&this[9] != 0LL),
                                     v19,
                                     v66,
                                     *(_QWORD *)&this[11],
                                     v50,
                                     v51 + 1176,
                                     v56,
                                     v15,
                                     &this[24],
                                     a5);
          }
        }
        return v17;
      }
      else
      {
        *(_QWORD *)&v61 = 0LL;
        BYTE8(v61) = 0;
        HIDWORD(v61) = 0;
        v56 = 0LL;
        v57 = 0;
        v58 = 0;
        if ( (unsigned int)BLTRECORD::bRotate(
                             (BLTRECORD *)this,
                             a3,
                             (struct SURFMEM *)&v56,
                             (struct SURFMEM *)&v61,
                             a4,
                             a5)
          && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]),
              BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15)) )
        {
          v37 = BLTRECORD::bBitBlt((BLTRECORD *)this, a2, a3, a4);
          v38 = *(_QWORD *)a2;
          *(_DWORD *)(v38 + 36) |= 0x10u;
          *(_QWORD *)(v38 + 1112) = 0LL;
        }
        else
        {
          v37 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v56);
        SURFMEM::~SURFMEM((SURFMEM *)&v61);
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
  v56 = 0LL;
  v57 = 0;
  v58 = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v56, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    if ( BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15) )
    {
      v13 = BLTRECORD::bBitBlt((BLTRECORD *)this, a2, a3, a4);
      v14 = *(_QWORD *)a2;
      *(_DWORD *)(v14 + 36) |= 0x10u;
      *(_QWORD *)(v14 + 1112) = 0LL;
      v10 = v13;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v56);
  return v10;
}
