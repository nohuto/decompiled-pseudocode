/*
 * XREFs of MiSetPfnOriginalPte @ 0x1402BFFE4
 * Callers:
 *     MmFreeNonCachedMemory @ 0x14084F080 (MmFreeNonCachedMemory.c)
 *     MiGetFastLargePage @ 0x14085E68C (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
