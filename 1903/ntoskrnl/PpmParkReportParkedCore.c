/*
 * XREFs of PpmParkReportParkedCore @ 0x1402F8A5C
 * Callers:
 *     PpmPerfAction @ 0x1400BC600 (PpmPerfAction.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x1400BE230 (KeCheckProcessorAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x14018B880 (KeInterlockedSetProcessorAffinityEx.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x1401BF658 (PpmEventCoreParkingStateChangeEx.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x140301FE8 (PpmEventCoreParkingStateChange.c)
 */

char __fastcall PpmParkReportParkedCore(__int64 a1)
{
  char v1; // di
  int v3; // esi
  int v4; // edx
  __int64 v5; // rdx
  int v6; // eax
  __int16 v8; // [rsp+20h] [rbp-8h]

  v1 = 0;
  v3 = 1;
  if ( PoSoftParkingAllowed
    && (unsigned int)KeCheckProcessorAffinityEx((__int64)PpmParkNewSoftParkingMask, *(_DWORD *)(a1 + 36)) )
  {
    v3 = 2;
    v1 = 1;
  }
  KeTransitionProcessorParkState(a1, v3);
  v4 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 24228) = 1;
  KeInterlockedSetProcessorAffinityEx((__int64)PpmPerfCoreParkingMask, v4);
  _disable();
  v6 = *(_DWORD *)(a1 + 23424);
  *(_DWORD *)(a1 + 11684) = 0;
  *(_DWORD *)(a1 + 11680) = v6;
  if ( (v8 & 0x200) != 0 )
    _enable();
  if ( PoSoftParkingAllowed )
  {
    if ( v1 )
    {
      KeInterlockedSetProcessorAffinityEx((__int64)&PpmParkSoftParkingMask, *(_DWORD *)(a1 + 36));
      *(_BYTE *)(a1 + 23859) = 1;
    }
    return PpmEventCoreParkingStateChangeEx(a1, v1);
  }
  else
  {
    LOBYTE(v5) = 1;
    return PpmEventCoreParkingStateChange(a1, v5);
  }
}
