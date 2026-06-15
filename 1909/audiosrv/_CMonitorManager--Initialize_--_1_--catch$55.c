/*
 * XREFs of _CMonitorManager::Initialize_::_1_::catch$55 @ 0x18007440F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitorManager::Initialize_::_1_::catch_55(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 192);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 272) = *v3;
  return &loc_1800B97F1;
}
