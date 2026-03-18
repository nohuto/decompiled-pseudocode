/*
 * XREFs of unsafe_cast_fnid_or_class_to_PSBWND @ 0x1C001FFA0
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C001FD30 (xxxGetScrollBarInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PSBWND(_QWORD *a1)
{
  __int64 v1; // r8
  __int16 v2; // ax

  if ( !a1 )
    return 0LL;
  v1 = a1[5];
  v2 = *(_WORD *)(v1 + 42);
  if ( (v2 & 0x1000) != 0 || (v2 & 0x2FFF) != 0x29A && **(_WORD **)(a1[14] + 8LL) != *(_WORD *)(gpsi + 876LL) )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return a1[33];
  return *(_QWORD *)(v1 + 296);
}
