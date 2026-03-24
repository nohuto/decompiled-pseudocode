/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x1402C1C60
 * Callers:
 *     MiDecrementHugeContext @ 0x140185A48 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x140121324 (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14018FBF8 (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
