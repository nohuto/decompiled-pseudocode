/*
 * XREFs of _CMonitor::Initialize_::_1_::catch$34 @ 0x180101760
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x180061688 (_o__resetstkoflw_0.c)
 */

void *__fastcall CMonitor::Initialize_::_1_::catch_34(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 160);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 248) = *v3;
  return &loc_1801014AD;
}
