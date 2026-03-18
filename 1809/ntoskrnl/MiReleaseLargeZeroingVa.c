/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x1402C1B60
 * Callers:
 *     MiDecrementHugeContext @ 0x140185A28 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x140121304 (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14018FBD8 (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
