/*
 * XREFs of IopMemFindSuitableRange @ 0x1407405B0
 * Callers:
 *     <none>
 * Callees:
 *     ArbFindSuitableRange @ 0x1407405E0 (ArbFindSuitableRange.c)
 */

__int64 __fastcall IopMemFindSuitableRange(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 44LL) & 1) != 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  return ArbFindSuitableRange();
}
