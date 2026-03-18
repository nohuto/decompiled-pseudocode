/*
 * XREFs of AddVertSmartScan @ 0x1C02C28E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AddVertSmartScan(int a1, int a2)
{
  __int16 v2; // r9
  __int64 v3; // rdx
  unsigned __int64 v4; // r10
  __int64 v5; // r8
  _DWORD *i; // rcx
  __int16 v7; // ax

  v2 = a2;
  if ( a1 < dword_1C032FE28 )
    return 4866LL;
  if ( a1 >= dword_1C032FE2C )
    return 4866LL;
  if ( a2 < dword_1C032FE34 )
    return 4866LL;
  if ( a2 > dword_1C032FE30 )
    return 4866LL;
  v3 = a1 - dword_1C032FE28;
  v4 = *(_QWORD *)(qword_1C032FEC0 + 8 * v3);
  v5 = *(_QWORD *)(qword_1C032FEC8 + 8 * v3);
  *(_QWORD *)(qword_1C032FEC8 + 8 * v3) = v5 + 4;
  if ( (unsigned __int64)(v5 + 4) > *(_QWORD *)(qword_1C032FED0 + 8 * v3) )
    return 4866LL;
  for ( i = (_DWORD *)(v5 - 4); (unsigned __int64)i >= v4 && *(__int16 *)i > v2; --i )
  {
    *(_DWORD *)v5 = *i;
    v5 -= 4LL;
  }
  v7 = word_1C032FF30;
  *(_WORD *)v5 = v2;
  *(_WORD *)(v5 + 2) = v7;
  return 0LL;
}
