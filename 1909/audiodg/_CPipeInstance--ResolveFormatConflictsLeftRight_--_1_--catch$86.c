/*
 * XREFs of _CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch$86 @ 0x14001A21C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPipeInstance::ResolveFormatConflictsLeftRight_::_1_::catch_86(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 376);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 68) = *v3;
  return &loc_14001E75B;
}
