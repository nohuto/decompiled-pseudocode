/*
 * XREFs of _CMonitorManager::OnDefaultDeviceChanged_::_1_::catch$2 @ 0x1800FDEF3
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x180061688 (_o__resetstkoflw_0.c)
 */

void *__fastcall CMonitorManager::OnDefaultDeviceChanged_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 72);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 120) = *v3;
  return &loc_1800FDDD9;
}
