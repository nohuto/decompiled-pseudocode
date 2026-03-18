/*
 * XREFs of ACPIVectorDisable2 @ 0x1C005EA80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorDisable @ 0x1C005E9C0 (ACPIVectorDisable.c)
 */

__int64 __fastcall ACPIVectorDisable2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorDisable(*(_QWORD *)(a1 + 720), a2);
}
