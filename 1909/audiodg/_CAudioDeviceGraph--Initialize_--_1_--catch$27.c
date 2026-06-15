/*
 * XREFs of _CAudioDeviceGraph::Initialize_::_1_::catch$27 @ 0x14001AE11
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioDeviceGraph::Initialize_::_1_::catch_27(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 176);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 48) = *v3;
  return &loc_14002304D;
}
