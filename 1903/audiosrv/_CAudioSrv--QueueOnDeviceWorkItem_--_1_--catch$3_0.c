/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::catch$3_0 @ 0x1800C0B0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::catch_3_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 112);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 48) = *v3;
  return &loc_1800C0A37;
}
