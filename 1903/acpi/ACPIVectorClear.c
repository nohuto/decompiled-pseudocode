/*
 * XREFs of ACPIVectorClear @ 0x1C0060660
 * Callers:
 *     ACPIVectorClear2 @ 0x1C0060690 (ACPIVectorClear2.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0022400 (ACPIWriteGpeStatusRegister.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C0023E28 (ACPIGpeIndexToGpeRegister.c)
 */

__int64 __fastcall ACPIVectorClear(__int64 a1, unsigned int *a2)
{
  int v2; // ebx
  unsigned int v3; // eax

  v2 = *a2;
  v3 = ACPIGpeIndexToGpeRegister(*a2);
  ACPIWriteGpeStatusRegister(v3, 1 << (v2 & 7));
  return 0LL;
}
