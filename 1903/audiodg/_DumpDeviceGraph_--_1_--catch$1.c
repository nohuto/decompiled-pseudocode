/*
 * XREFs of _DumpDeviceGraph_::_1_::catch$1 @ 0x14003AB4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall DumpDeviceGraph_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 64);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return &loc_14003AAEA;
}
