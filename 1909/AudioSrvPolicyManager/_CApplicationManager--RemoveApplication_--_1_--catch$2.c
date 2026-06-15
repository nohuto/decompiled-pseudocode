/*
 * XREFs of _CApplicationManager::RemoveApplication_::_1_::catch$2 @ 0x180036E82
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CApplicationManager::RemoveApplication_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return &loc_18001B734;
}
