/*
 * XREFs of ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C00844BC
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C007FECC (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00800D4 (xInsertMetricsRFONTOBJ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 */

__int64 __fastcall RFONTOBJ::bCheckMetricsCache(RFONTOBJ *this)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 504LL)
     + (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 628LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL)
     + 64 <= *(_QWORD *)(*(_QWORD *)this + 512LL) )
    return 1LL;
  result = PALLOCMEM2(0x720uLL);
  if ( result )
  {
    *(_QWORD *)result = v1[66];
    v1[64] = result + 1824;
    v1[63] = result + 16;
    v1[66] = result;
    return 1LL;
  }
  return result;
}
