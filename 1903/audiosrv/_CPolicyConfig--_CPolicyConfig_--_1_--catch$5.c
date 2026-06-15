/*
 * XREFs of _CPolicyConfig::_CPolicyConfig_::_1_::catch$5 @ 0x1800DD1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CPolicyConfig::_CPolicyConfig_::_1_::catch_5(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 136) = *v3;
  return &loc_1800DD122;
}
