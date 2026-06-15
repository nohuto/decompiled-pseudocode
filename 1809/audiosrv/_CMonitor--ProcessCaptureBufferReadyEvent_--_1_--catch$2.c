/*
 * XREFs of _CMonitor::ProcessCaptureBufferReadyEvent_::_1_::catch$2 @ 0x180102CAB
 * Callers:
 *     <none>
 * Callees:
 *     _o__resetstkoflw_0 @ 0x180061688 (_o__resetstkoflw_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CMonitor::ProcessCaptureBufferReadyEvent_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 168);
  if ( *v3 == -1073741571 )
    o__resetstkoflw_0();
  *(_DWORD *)(a2 + 128) = *v3;
  return &loc_180102A58;
}
