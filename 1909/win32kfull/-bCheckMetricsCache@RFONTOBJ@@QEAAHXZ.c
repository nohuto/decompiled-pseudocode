/*
 * XREFs of ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C0098FC8
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0098CE4 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C0099050 (xInsertMetricsRFONTOBJ.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C0167A3C (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 */

__int64 __fastcall RFONTOBJ::bCheckMetricsCache(RFONTOBJ *this)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 512LL)
     + (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL)
     + 64 <= *(_QWORD *)(*(_QWORD *)this + 520LL) )
    return 1LL;
  result = (__int64)PALLOCMEM2(0x720uLL, 1667326791LL, 0);
  if ( result )
  {
    *(_QWORD *)result = v1[67];
    v1[65] = result + 1824;
    v1[64] = result + 16;
    v1[67] = result;
    return 1LL;
  }
  return result;
}
