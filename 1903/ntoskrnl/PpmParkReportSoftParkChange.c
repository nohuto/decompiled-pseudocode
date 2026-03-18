/*
 * XREFs of PpmParkReportSoftParkChange @ 0x1401BF398
 * Callers:
 *     PpmPerfAction @ 0x1400BC600 (PpmPerfAction.c)
 * Callees:
 *     PpmEventCoreParkingSoftParkedStateChange @ 0x1401BF54C (PpmEventCoreParkingSoftParkedStateChange.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 */

__int64 __fastcall PpmParkReportSoftParkChange(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx

  v2 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v3 = ((unsigned __int64)qword_14042A518[v2 >> 6] >> (v2 & 0x3F)) & 1;
  KeTransitionProcessorParkState(a1, (unsigned int)(v3 + 1));
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v5 = v4 >> 6;
  v6 = 1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F);
  if ( (_BYTE)v3 )
    _InterlockedOr64(&qword_14042A468[v5], v6);
  else
    _InterlockedAnd64(&qword_14042A468[v5], ~v6);
  LOBYTE(v4) = v3;
  *(_BYTE *)(a1 + 23859) = v3;
  return PpmEventCoreParkingSoftParkedStateChange(a1, v4);
}
