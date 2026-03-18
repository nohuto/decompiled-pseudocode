/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x1402DB3F4
 * Callers:
 *     MiDecrementHugeContext @ 0x14018EFF0 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x140119504 (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x140199C4C (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
