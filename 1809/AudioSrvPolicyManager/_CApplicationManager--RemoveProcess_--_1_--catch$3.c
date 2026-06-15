/*
 * XREFs of _CApplicationManager::RemoveProcess_::_1_::catch$3 @ 0x18003947E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CApplicationManager::RemoveProcess_::_1_::catch_3(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return &loc_18001E2BA;
}
