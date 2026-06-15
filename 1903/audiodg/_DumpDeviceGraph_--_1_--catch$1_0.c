/*
 * XREFs of _DumpDeviceGraph_::_1_::catch$1_0 @ 0x14003AD35
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall DumpDeviceGraph_::_1_::catch_1_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 64);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 128) = *v3;
  return &loc_14003AC44;
}
