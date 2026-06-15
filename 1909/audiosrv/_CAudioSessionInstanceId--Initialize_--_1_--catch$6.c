/*
 * XREFs of _CAudioSessionInstanceId::Initialize_::_1_::catch$6 @ 0x1800DBF92
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSessionInstanceId::Initialize_::_1_::catch_6(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 80);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 152) = *v3;
  return &loc_1800DBD2B;
}
