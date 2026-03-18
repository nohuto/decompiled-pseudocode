/*
 * XREFs of ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00A59CC
 * Callers:
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C00A4648 (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     GreExtTextOutRect @ 0x1C00C05C0 (GreExtTextOutRect.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A1AC4 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A5E44 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A6F14 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A8A4C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AF610 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     bCvtPts1 @ 0x1C00BC6A0 (bCvtPts1.c)
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
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
  __int32 v21; // r8d
  BOOL v22; // r15d
  __int32 v23; // r9d
  __int32 v24; // edx
  int v25; // eax
  struct REGION *v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rsi
  struct ECLIPOBJ *v31; // rdx
  __int64 v32; // rcx
  __int32 v35; // eax
  __int32 v36; // eax
  __m128i *v37; // r13
  __int64 v38; // [rsp+60h] [rbp-19h] BYREF
  int v39; // [rsp+68h] [rbp-11h]
  int v40; // [rsp+6Ch] [rbp-Dh]
  __m128i v41; // [rsp+70h] [rbp-9h] BYREF
  __m128i v42; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(_QWORD *)this;
  if ( !*(_QWORD *)this || (*(_DWORD *)(v3 + 36) & 0x10000) != 0 )
    return 0;
  v5 = 1;
  v39 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 208LL);
  v40 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v38, this, 0x204u, 0x80000000);
  v6 = *(_DWORD *)(v38 + 32);
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
  v42.m128i_i32[0] = a2->left;
  *(__int64 *)((char *)v42.m128i_i64 + 4) = __PAIR64__(right, top);
  v42.m128i_i32[3] = bottom;
  if ( (v6 & 0x43) != 0x43 )
  {
    bCvtPts1(v38, &v42, 2LL);
    bottom = v42.m128i_i32[3];
    right = v42.m128i_i32[2];
    top = v42.m128i_i32[1];
    left = v42.m128i_i32[0];
  }
  if ( v40 )
  {
    ++left;
    ++right;
    v42.m128i_i32[0] = left;
    v42.m128i_i32[2] = right;
  }
  if ( left > right )
  {
    v35 = left;
    v42.m128i_i32[0] = right;
    left = right;
    v42.m128i_i32[2] = v35;
    right = v35;
  }
  if ( top > bottom )
  {
    v36 = top;
    v42.m128i_i32[1] = bottom;
    top = bottom;
    v42.m128i_i32[3] = v36;
    bottom = v36;
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
      ERECTL::operator|=((_DWORD *)(v11 + 1064), &v42);
      v13 = *(_QWORD *)this;
    }
    v11 = v13;
    if ( (*(_DWORD *)(v13 + 36) & 0x80u) != 0 )
    {
      ERECTL::operator|=((_DWORD *)(v13 + 1096), &v42);
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
  if ( (unsigned __int64)(v17 + v42.m128i_i32[0] + 0x80000000LL) <= 0xFFFFFFFF
    && (unsigned __int64)(v17 + v42.m128i_i32[2] + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v18 = *(int *)(v15 + 8 * v16 + 1020);
    if ( (unsigned __int64)(v18 + v42.m128i_i32[1] + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v18 + v42.m128i_i32[3] + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v19 = (unsigned int)(v17 + v42.m128i_i32[0]);
      v41.m128i_i64[0] = 0LL;
      v42.m128i_i32[0] = v19;
      v20 = 0LL;
      v21 = *(_DWORD *)(v15 + 8 * v16 + 1016) + v42.m128i_i32[2];
      v22 = 0;
      v23 = *(_DWORD *)(v15 + 8 * v16 + 1020) + v42.m128i_i32[1];
      *(__int64 *)((char *)v42.m128i_i64 + 4) = __PAIR64__(v21, v23);
      v24 = v42.m128i_i32[3] + *(_DWORD *)(v15 + 8 * v16 + 1020);
      v42.m128i_i32[3] = v24;
      if ( (int)v19 >= *(_DWORD *)(v15 + 1000) && v21 <= *(_DWORD *)(v15 + 1008) && v23 >= *(_DWORD *)(v15 + 1004) )
        v22 = v24 <= *(_DWORD *)(v15 + 1012);
      v25 = *(_DWORD *)(v15 + 520);
      if ( (v25 & 1) != 0 && (v25 & 2) == 0 )
      {
        v37 = &v42;
        do
        {
          if ( !(unsigned int)bFToL(v19, (char *)&v42 + 4 * (unsigned int)v20, 6LL) )
            break;
          LODWORD(v20) = v20 + 1;
          v37 = (__m128i *)((char *)v37 + 4);
        }
        while ( (unsigned int)v20 < 4 );
        v20 = v41.m128i_i64[0];
      }
      if ( v22 )
      {
        v27 = v42;
      }
      else
      {
        v20 = v15 + 1752;
        if ( DC::prgnRao((DC *)v15) )
          v26 = DC::prgnRao((DC *)v15);
        else
          v26 = DC::prgnVisSnap((DC *)v15);
        XCLIPOBJ::vSetup((XCLIPOBJ *)(v15 + 1752), v26, (struct ERECTL *)&v42, 2);
        v42 = *(__m128i *)(v15 + 1756);
        v27 = v42;
        if ( _mm_cvtsi128_si32(v27) == _mm_cvtsi128_si32(_mm_srli_si128(v27, 8))
          || v42.m128i_i32[1] == _mm_srli_si128(v42, 8).m128i_i32[1] )
        {
          return v5;
        }
      }
      v28 = *(_QWORD *)this;
      v29 = *(_QWORD *)(*(_QWORD *)this + 976LL);
      v30 = *(_QWORD *)this + 1592LL;
      v31 = (struct ECLIPOBJ *)*(unsigned int *)(v29 + 152);
      if ( (((unsigned __int8)v31 | *(_BYTE *)(*(_QWORD *)this + 316LL)) & 8) != 0 )
      {
        *(_DWORD *)(v29 + 152) = (unsigned int)v31 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)this + 316LL) &= ~8u;
        EBRUSHOBJ::vInitBrush(
          v30,
          *(_QWORD *)this,
          gpbrBackground,
          *(_QWORD *)(*(_QWORD *)this + 88LL),
          *(_QWORD *)(v14 + 128),
          v14,
          (*(_DWORD *)(*(_QWORD *)this + 72LL) >> 15) & 1);
        v28 = *(_QWORD *)this;
        v27 = v42;
      }
      if ( (*(_DWORD *)(v28 + 36) & 0xE0) != 0 && (*(_DWORD *)(v30 + 120) & 0x100) == 0 )
      {
        v41 = v27;
        XDCOBJ::vAccumulateTight(this, v31, &v41);
      }
      ++*(_DWORD *)(v14 + 92);
      v32 = *(_QWORD *)this + 1176LL;
      if ( (*(_DWORD *)(v14 + 112) & 1) != 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __m128i *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v14 + 48) + 2832LL))(
                               v14 + 24,
                               0LL,
                               0LL,
                               v20,
                               0LL,
                               &v42,
                               0LL,
                               0LL,
                               v30,
                               v32,
                               61680);
      else
        return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, __m128i *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                               v14 + 24,
                               0LL,
                               0LL,
                               v20,
                               0LL,
                               &v42,
                               0LL,
                               0LL,
                               v30,
                               v32,
                               61680);
    }
  }
  return 0LL;
}
