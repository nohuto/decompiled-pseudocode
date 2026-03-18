/*
 * XREFs of ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C029EA98
 * Callers:
 *     NtGdiUpdateColors @ 0x1C02B0E00 (NtGdiUpdateColors.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     OffCopyBits @ 0x1C02C1298 (OffCopyBits.c)
 */

__int64 __fastcall MulUpdateColors(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _XLATEOBJ *a3)
{
  RECTL rclBounds; // xmm0
  unsigned int v6; // r14d
  DHPDEV dhpdev; // rax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // r8
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16[2]; // [rsp+58h] [rbp-28h] BYREF
  RECTL v17; // [rsp+68h] [rbp-18h] BYREF

  rclBounds = a2->rclBounds;
  v15 = 0LL;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v6 = 1;
  dhpdev = a1->dhpdev;
  v17 = rclBounds;
  v8 = *(__int64 **)dhpdev;
  if ( *(_QWORD *)dhpdev )
  {
    do
    {
      v9 = v8[6];
      if ( (*(_DWORD *)(v9 + 2172) & 0x100) != 0
        && bIntersect(&v17, (const struct _RECTL *)((char *)v8 + 28), (struct _RECTL *)v16) )
      {
        v10 = *(__m128i *)v16;
        a2->rclBounds = *(RECTL *)v16;
        v11 = *(_QWORD *)(v9 + 2552);
        v12 = v8[8];
        v15 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v10, 4)), _mm_cvtsi128_si32(v10));
        if ( (*(_DWORD *)(v11 + 112) & 0x400) != 0 )
          v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v9 + 2840);
        else
          v13 = EngCopyBits;
        v6 &= OffCopyBits((int)v13, (int)v8 + 72, v12, (int)v8 + 72, v12, a2, (__int64)a3, (__int64)v16, (__int64)&v15);
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 );
    rclBounds = v17;
  }
  a2->rclBounds = rclBounds;
  return v6;
}
