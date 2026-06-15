/*
 * XREFs of _CLockedList_CDuckingNotification_1_0_::AddInterface_::_1_::catch$4 @ 0x180036172
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CLockedList_CDuckingNotification_1_0_::AddInterface_::_1_::catch_4(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 144) = *v3;
  return &loc_18000C16E;
}
