/*
 * XREFs of _CAudioHistoryBufferManager::Add_::_1_::catch$6 @ 0x14003F690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAudioHistoryBufferManager::Add_::_1_::catch_6(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 88);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 152) = *v3;
  return &loc_14003F5FD;
}
