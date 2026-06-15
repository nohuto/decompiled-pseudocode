/*
 * XREFs of _CMonitorManager::OnDefaultDeviceChanged_::_1_::catch$2 @ 0x18010AFD3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitorManager::OnDefaultDeviceChanged_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 72);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return &loc_18010AEBD;
}
