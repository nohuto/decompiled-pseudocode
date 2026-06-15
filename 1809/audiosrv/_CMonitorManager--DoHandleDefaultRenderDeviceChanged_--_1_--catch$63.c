/*
 * XREFs of _CMonitorManager::DoHandleDefaultRenderDeviceChanged_::_1_::catch$63 @ 0x1800FC88E
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x180061688 (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitorManager::DoHandleDefaultRenderDeviceChanged_::_1_::catch_63(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 176);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 272) = *v3;
  return &loc_1800FC3C7;
}
