/*
 * XREFs of CcCanReuseVacb @ 0x14027E00C
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcCanReuseVacb(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 8) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL && !*(_WORD *)(a1 + 16) && *(_QWORD *)a1 )
    return !a2 || ((a2 ^ *(_QWORD *)a1) & 0xFFFFFFE00000LL) == 0;
  return v2;
}
