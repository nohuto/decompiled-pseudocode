/*
 * XREFs of MiSetPfnOriginalPte @ 0x1402D947C
 * Callers:
 *     MmFreeNonCachedMemory @ 0x140889010 (MmFreeNonCachedMemory.c)
 *     MiGetFastLargePage @ 0x1408997F8 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
