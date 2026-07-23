/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x1402C1E50
 * Callers:
 *     MiDecrementHugeContext @ 0x140185B88 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x1401213F4 (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14018FD38 (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
