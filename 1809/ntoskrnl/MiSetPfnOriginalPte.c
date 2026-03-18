/*
 * XREFs of MiSetPfnOriginalPte @ 0x1402BFCF4
 * Callers:
 *     MmFreeNonCachedMemory @ 0x14084DE40 (MmFreeNonCachedMemory.c)
 *     MiGetFastLargePage @ 0x14085D44C (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
