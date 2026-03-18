/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00F6FE0
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     bCvtVts @ 0x1C01865F8 (bCvtVts.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(__m128 **this, struct _VECTORL *a2, struct _VECTORL *a3, __int64 a4)
{
  __m128 *v5; // rcx
  unsigned int v7; // edi

  v5 = *this;
  if ( (v5[2].m128_i32[0] & 2) == 0 || a3 == a2 )
  {
    *v5 = _mm_mul_ps(*v5, (__m128)_xmm);
    v7 = bCvtVts((_DWORD)v5, (_DWORD)a2, (_DWORD)a3, a4, 0);
    **this = _mm_mul_ps(**this, (__m128)_xmm);
    if ( !v7 )
      EngSetLastError(0x216u);
    return v7;
  }
  else
  {
    memmove(a3, a2, 8 * a4);
    return 1LL;
  }
}
