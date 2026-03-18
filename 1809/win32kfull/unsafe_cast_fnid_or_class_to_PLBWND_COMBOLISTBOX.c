/*
 * XREFs of unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C014CC68
 * Callers:
 *     xxxGetComboBoxInfo @ 0x1C014C85C (xxxGetComboBoxInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(_QWORD *a1)
{
  __int64 v1; // r8
  __int16 v2; // ax

  if ( !a1 )
    return 0LL;
  v1 = a1[5];
  v2 = *(_WORD *)(v1 + 42);
  if ( (v2 & 0x1000) != 0 || (v2 & 0x2FFF) != 0x2A3 && **(_WORD **)(a1[14] + 8LL) != *(_WORD *)(gpsi + 882LL) )
    return 0LL;
  if ( *(_DWORD *)(v1 + 252) )
    return a1[33];
  return *(_QWORD *)(v1 + 296);
}
