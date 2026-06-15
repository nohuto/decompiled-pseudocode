/*
 * XREFs of _CVolumeSoftware::LoadVolumeState_::_1_::catch$3 @ 0x1800C63A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CVolumeSoftware::LoadVolumeState_::_1_::catch_3(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 112);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 312) = *v3;
  return &loc_1800C62D6;
}
