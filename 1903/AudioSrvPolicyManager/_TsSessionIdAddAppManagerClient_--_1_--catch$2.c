/*
 * XREFs of _TsSessionIdAddAppManagerClient_::_1_::catch$2 @ 0x1800373A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall TsSessionIdAddAppManagerClient_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return &loc_180025649;
}
