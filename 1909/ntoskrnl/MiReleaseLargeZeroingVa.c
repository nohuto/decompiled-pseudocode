/*
 * XREFs of MiReleaseLargeZeroingVa @ 0x1402DB154
 * Callers:
 *     MiDecrementHugeContext @ 0x14018F900 (MiDecrementHugeContext.c)
 * Callees:
 *     MiZeroPageWorkMapping @ 0x1400F855C (MiZeroPageWorkMapping.c)
 *     MiFreeUltraMapping @ 0x14019A2AC (MiFreeUltraMapping.c)
 */

void __fastcall MiReleaseLargeZeroingVa(__int64 a1, int a2)
{
  if ( a2 == 1 )
    MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
  else
    MiZeroPageWorkMapping(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 32), 3);
}
