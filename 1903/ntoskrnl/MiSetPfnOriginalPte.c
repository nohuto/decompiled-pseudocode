/*
 * XREFs of MiSetPfnOriginalPte @ 0x1402D971C
 * Callers:
 *     MmFreeNonCachedMemory @ 0x1408897F0 (MmFreeNonCachedMemory.c)
 *     MiGetFastLargePage @ 0x140899FD8 (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
