/*
 * XREFs of _CApplication::GetSmtcProcesses_::_1_::catch$1 @ 0x180038AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CApplication::GetSmtcProcesses_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return &loc_180013598;
}
