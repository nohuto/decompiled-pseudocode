/*
 * XREFs of _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::catch$56 @ 0x1801094E5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::catch_56(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 168);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 264) = *v3;
  return &loc_180108FE9;
}
