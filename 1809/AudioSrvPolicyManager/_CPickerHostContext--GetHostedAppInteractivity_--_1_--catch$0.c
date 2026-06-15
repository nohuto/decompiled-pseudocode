/*
 * XREFs of _CPickerHostContext::GetHostedAppInteractivity_::_1_::catch$0 @ 0x180039656
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CPickerHostContext::GetHostedAppInteractivity_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return &loc_180022ACB;
}
