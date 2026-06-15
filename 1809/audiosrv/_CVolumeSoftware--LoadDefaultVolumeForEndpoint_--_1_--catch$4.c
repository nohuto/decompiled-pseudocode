/*
 * XREFs of _CVolumeSoftware::LoadDefaultVolumeForEndpoint_::_1_::catch$4 @ 0x1800B7D2A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CVolumeSoftware::LoadDefaultVolumeForEndpoint_::_1_::catch_4(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 96);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 256) = *v3;
  return &loc_1800B7C79;
}
