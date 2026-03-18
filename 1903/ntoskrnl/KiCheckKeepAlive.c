/*
 * XREFs of KiCheckKeepAlive @ 0x1400BACE0
 * Callers:
 *     KeAccumulateTicks @ 0x140033360 (KeAccumulateTicks.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x1400BA2E0 (KeRemoveProcessorAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1400BE1E0 (KeAddProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(unsigned int a1)
{
  char v2; // di
  unsigned __int64 v3; // r8
  char v4; // dl
  unsigned __int64 v5; // r8

  v2 = 0;
  v3 = (unsigned int)KiProcessorIndexToNumberMappingTable[a1];
  v4 = v3 & 0x3F;
  v5 = v3 >> 6;
  if ( ((*(_QWORD *)&KiClockCheckPending[4 * v5 + 4] >> v4) & 1) != 0 )
  {
    if ( ((*((_QWORD *)&KiClockCheckReady + v5 + 1) >> v4) & 1) != 0 )
    {
      KeRemoveProcessorAffinityEx((unsigned __int16 *)&KiClockCheckReady, a1);
      KeRemoveProcessorAffinityEx((unsigned __int16 *)KiClockCheckPending, a1);
      return 1;
    }
    else
    {
      KeAddProcessorAffinityEx(&KiClockCheckReady, a1);
    }
  }
  return v2;
}
