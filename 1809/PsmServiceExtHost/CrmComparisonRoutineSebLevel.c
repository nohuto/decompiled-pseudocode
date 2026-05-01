/*
 * XREFs of CrmComparisonRoutineSebLevel @ 0x180040560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineSebLevel(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a2 )
    return (a2[1] >> 1) & 1;
  return result;
}
