/*
 * XREFs of _CDuckingManager::NotifyFilteredClientsAutoUnduck_::_1_::catch$0 @ 0x180035F28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CDuckingManager::NotifyFilteredClientsAutoUnduck_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return &loc_18000A882;
}
