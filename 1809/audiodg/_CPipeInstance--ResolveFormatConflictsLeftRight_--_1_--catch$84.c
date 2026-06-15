/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch$84 @ 0x1400206A5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch_84(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 344);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 72) = *v3;
  return &loc_140026CED;
}
