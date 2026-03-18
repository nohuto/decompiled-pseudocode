/*
 * XREFs of unsafe_cast_fnid_or_class_to_PSBWND @ 0x1C004BD28
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C004BAF8 (xxxGetScrollBarInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PSBWND(_QWORD *a1)
{
  __int64 v1; // r8

  if ( !a1 )
    return 0LL;
  v1 = a1[5];
  if ( (*(_WORD *)(v1 + 42) & 0x3FFF) != 0x29A && **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 876LL) )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return a1[35];
  return *(_QWORD *)(v1 + 296);
}
