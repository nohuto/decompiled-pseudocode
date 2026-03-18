/*
 * XREFs of PpmParkReportUnparkedCore @ 0x1402F8B38
 * Callers:
 *     PpmPerfAction @ 0x1400BC600 (PpmPerfAction.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1402A4E40 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x140301FE8 (PpmEventCoreParkingStateChange.c)
 */

_BYTE *__fastcall PpmParkReportUnparkedCore(__int64 a1)
{
  int v2; // edx
  _BYTE *result; // rax

  KeTransitionProcessorParkState(a1, 0);
  v2 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 24228) = 0;
  KeInterlockedClearProcessorAffinityEx((__int64)PpmPerfCoreParkingMask, v2);
  if ( PoSoftParkingAllowed && *(_BYTE *)(a1 + 23859) )
  {
    KeInterlockedClearProcessorAffinityEx((__int64)&PpmParkSoftParkingMask, *(_DWORD *)(a1 + 36));
    *(_BYTE *)(a1 + 23859) = 0;
  }
  PpmEventCoreParkingStateChange(a1, 0LL);
  result = *(_BYTE **)(a1 + 23808);
  if ( result )
  {
    if ( *result == 1 )
      *(_BYTE *)(a1 + 23869) = 1;
  }
  return result;
}
