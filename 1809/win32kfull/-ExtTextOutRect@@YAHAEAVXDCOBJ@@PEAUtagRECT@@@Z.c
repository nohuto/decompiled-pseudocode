/*
 * XREFs of ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C004CE40
 * Callers:
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C004CC28 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     GreExtTextOutRect @ 0x1C0099CF4 (GreExtTextOutRect.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004D274 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005426C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C0055B3C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C009FFE4 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtTextOutRect(struct XDCOBJ *this, struct tagRECT *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  int v6; // eax
  LONG left; // ecx
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // r9d
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r12
  int v21; // r8d
  BOOL v22; // r15d
  int v23; // r9d
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rsi
  struct ECLIPOBJ *v29; // rdx
  __int64 v30; // rcx
  struct REGION *v33; // rax
  LONG v34; // eax
  LONG v35; // eax
  __int128 *v36; // r13
  unsigned __int64 v37; // [rsp+60h] [rbp-19h] BYREF
  int v38; // [rsp+68h] [rbp-11h]
  int v39; // [rsp+6Ch] [rbp-Dh]
  __int128 v40; // [rsp+70h] [rbp-9h] BYREF
  __int128 v41; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(_QWORD *)this;
  if ( !*(_QWORD *)this || (*(_DWORD *)(v3 + 36) & 0x10000) != 0 )
    return 0;
  v5 = 1;
  v38 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 208LL);
  v39 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v37, this, 0x204u, 0x80000000);
  v6 = *(_DWORD *)(v37 + 32);
  if ( (v6 & 1) == 0 )
    return (unsigned int)GreExtTextOutWLocked(
                           this,
                           0,
                           0,
                           2u,
                           a2,
                           0LL,
                           0,
                           0LL,
                           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 213LL),
                           0LL,
                           0);
  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  LODWORD(v41) = a2->left;
  *(_QWORD *)((char *)&v41 + 4) = __PAIR64__(right, top);
  HIDWORD(v41) = bottom;
  if ( (v6 & 0x43) != 0x43 )
  {
    bCvtPts1(v37, &v41, 2LL);
    bottom = HIDWORD(v41);
    right = DWORD2(v41);
    top = DWORD1(v41);
    left = v41;
  }
  if ( v39 )
  {
    ++left;
    ++right;
    LODWORD(v41) = left;
    DWORD2(v41) = right;
  }
  if ( left > right )
  {
    v34 = left;
    LODWORD(v41) = right;
    left = right;
    DWORD2(v41) = v34;
    right = v34;
  }
  if ( top > bottom )
  {
    v35 = top;
    DWORD1(v41) = bottom;
    top = bottom;
    HIDWORD(v41) = v35;
    bottom = v35;
  }
  if ( left == right || top == bottom )
    return v5;
  v11 = *(_QWORD *)this;
  v12 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( (v12 & 0xE0) != 0 )
  {
    v13 = *(_QWORD *)this;
    if ( (v12 & 0x20) != 0 )
    {
      ERECTL::operator|=(v11 + 1064, &v41);
      v13 = *(_QWORD *)this;
    }
    v11 = v13;
    if ( (*(_DWORD *)(v13 + 36) & 0x80u) != 0 )
    {
      ERECTL::operator|=(v13 + 1096, &v41);
      v11 = *(_QWORD *)this;
    }
  }
  v14 = *(_QWORD *)(v11 + 496);
  if ( !v14 )
    return v5;
  if ( ((*(_DWORD *)(v14 + 116) & 8) != 0 || *(_QWORD *)(v14 + 224)) && (*(_WORD *)(v14 + 102) & 0x200) != 0
    || !(unsigned int)_SurfaceAccessCheck((struct SURFACE *)v14) )
  {
    EngSetLastError(5u);
    return 0;
  }
  v15 = *(_QWORD *)this;
  v16 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1LL;
  v17 = *(int *)(*(_QWORD *)this + 8 * v16 + 1016);
  if ( (unsigned __int64)(v17 + (int)v41 + 0x80000000LL) <= 0xFFFFFFFF
    && (unsigned __int64)(v17 + SDWORD2(v41) + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v18 = *(int *)(v15 + 8 * v16 + 1020);
    if ( (unsigned __int64)(v18 + SDWORD1(v41) + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v18 + SHIDWORD(v41) + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v19 = (unsigned int)(v17 + v41);
      *(_QWORD *)&v40 = 0LL;
      LODWORD(v41) = v19;
      v20 = 0LL;
      v21 = *(_DWORD *)(v15 + 8 * v16 + 1016) + DWORD2(v41);
      v22 = 0;
      v23 = *(_DWORD *)(v15 + 8 * v16 + 1020) + DWORD1(v41);
      *(_QWORD *)((char *)&v41 + 4) = __PAIR64__(v21, v23);
      v24 = HIDWORD(v41) + *(_DWORD *)(v15 + 8 * v16 + 1020);
      HIDWORD(v41) = v24;
      if ( (int)v19 >= *(_DWORD *)(v15 + 1000) && v21 <= *(_DWORD *)(v15 + 1008) && v23 >= *(_DWORD *)(v15 + 1004) )
        v22 = v24 <= *(_DWORD *)(v15 + 1012);
      v25 = *(_DWORD *)(v15 + 520);
      if ( (v25 & 1) != 0 && (v25 & 2) == 0 )
      {
        v36 = &v41;
        do
        {
          if ( !(unsigned int)bFToL(v19, (char *)&v41 + 4 * (unsigned int)v20, 6LL) )
            break;
          LODWORD(v20) = v20 + 1;
          v36 = (__int128 *)((char *)v36 + 4);
        }
        while ( (unsigned int)v20 < 4 );
        v20 = v40;
      }
      if ( !v22 )
      {
        v20 = v15 + 1776;
        v33 = DC::prgnRao((DC *)v15) ? DC::prgnRao((DC *)v15) : DC::prgnVisSnap((DC *)v15);
        XCLIPOBJ::vSetup((XCLIPOBJ *)(v15 + 1776), v33, (struct ERECTL *)&v41, 2);
        v41 = *(_OWORD *)(v15 + 1780);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v41) )
          return v5;
      }
      v26 = *(_QWORD *)this;
      v27 = *(_QWORD *)(*(_QWORD *)this + 976LL);
      v28 = *(_QWORD *)this + 1616LL;
      v29 = (struct ECLIPOBJ *)*(unsigned int *)(v27 + 152);
      if ( (((unsigned __int8)v29 | *(_BYTE *)(*(_QWORD *)this + 316LL)) & 8) != 0 )
      {
        *(_DWORD *)(v27 + 152) = (unsigned int)v29 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)this + 316LL) &= ~8u;
        EBRUSHOBJ::vInitBrush(
          v28,
          *(_QWORD *)this,
          gpbrBackground,
          *(_QWORD *)(*(_QWORD *)this + 88LL),
          *(_QWORD *)(v14 + 128),
          v14,
          (*(_DWORD *)(*(_QWORD *)this + 72LL) >> 15) & 1);
        v26 = *(_QWORD *)this;
      }
      if ( (*(_DWORD *)(v26 + 36) & 0xE0) != 0 && (*(_DWORD *)(v28 + 120) & 0x100) == 0 )
      {
        v40 = v41;
        XDCOBJ::vAccumulateTight(this, v29, (struct ERECTL *)&v40);
      }
      ++*(_DWORD *)(v14 + 92);
      v30 = *(_QWORD *)this + 1200LL;
      if ( (*(_DWORD *)(v14 + 112) & 1) != 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v14 + 48) + 2832LL))(
                               v14 + 24,
                               0LL,
                               0LL,
                               v20,
                               0LL,
                               &v41,
                               0LL,
                               0LL,
                               v28,
                               v30,
                               61680);
      else
        return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                               v14 + 24,
                               0LL,
                               0LL,
                               v20,
                               0LL,
                               &v41,
                               0LL,
                               0LL,
                               v28,
                               v30,
                               61680);
    }
  }
  return 0LL;
}
