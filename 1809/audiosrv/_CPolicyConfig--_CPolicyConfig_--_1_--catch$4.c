/*
 * XREFs of _CPolicyConfig::_CPolicyConfig_::_1_::catch$4 @ 0x1800CEB3D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CPolicyConfig::_CPolicyConfig_::_1_::catch_4(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 136) = *v3;
  return &loc_1800CEA8B;
}
