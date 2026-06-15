/*
 * XREFs of _CAppInstanceId::ToString_::_1_::catch$0 @ 0x180070492
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAppInstanceId::ToString_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 80) = *v3;
  return &loc_18002470D;
}
