/*
 * XREFs of _CMonitorManager::CreateMonitor_::_1_::catch$8 @ 0x1800FBA5B
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x180061688 (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitorManager::CreateMonitor_::_1_::catch_8(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 88);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 152) = *v3;
  return &loc_1800FB8A7;
}
