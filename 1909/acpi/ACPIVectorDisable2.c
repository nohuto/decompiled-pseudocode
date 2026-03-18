/*
 * XREFs of ACPIVectorDisable2 @ 0x1C0060960
 * Callers:
 *     <none>
 * Callees:
 *     ACPIVectorDisable @ 0x1C0060890 (ACPIVectorDisable.c)
 */

__int64 __fastcall ACPIVectorDisable2(__int64 a1, unsigned int *a2)
{
  return ACPIVectorDisable(*(_QWORD *)(a1 + 720), a2);
}
