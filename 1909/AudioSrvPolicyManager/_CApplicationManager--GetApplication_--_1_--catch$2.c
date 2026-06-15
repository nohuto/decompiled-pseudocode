/*
 * XREFs of _CApplicationManager::GetApplication_::_1_::catch$2 @ 0x180036E33
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CApplicationManager::GetApplication_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 144);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 56) = *v3;
  return &loc_18001B639;
}
