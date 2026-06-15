/*
 * XREFs of _CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::catch$20 @ 0x180108E26
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate_::_1_::catch_20(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 128);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 216) = *v3;
  return &loc_180108BEE;
}
