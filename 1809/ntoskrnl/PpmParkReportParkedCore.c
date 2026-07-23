/*
 * XREFs of PpmParkReportParkedCore @ 0x1402E80E4
 * Callers:
 *     PpmPerfAction @ 0x14010BA20 (PpmPerfAction.c)
 * Callees:
 *     KeTransitionProcessorParkState @ 0x14029CF8C (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x1402E575C (PpmEventCoreParkingStateChange.c)
 */

void __fastcall PpmParkReportParkedCore(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // [rsp+20h] [rbp-8h]

  KeTransitionProcessorParkState(a1);
  v2 = *(unsigned int *)(a1 + 36);
  *(_BYTE *)(a1 + 24228) = 1;
  _InterlockedOr64(
    &qword_140405208[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6],
    1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F));
  _disable();
  LODWORD(v2) = *(_DWORD *)(a1 + 23424);
  *(_DWORD *)(a1 + 11684) = 0;
  *(_DWORD *)(a1 + 11680) = v2;
  if ( (v3 & 0x200) != 0 )
    _enable();
  PpmEventCoreParkingStateChange(a1, 1);
}
