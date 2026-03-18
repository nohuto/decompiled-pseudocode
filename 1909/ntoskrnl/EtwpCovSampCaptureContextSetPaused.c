/*
 * XREFs of EtwpCovSampCaptureContextSetPaused @ 0x140900890
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1409013C4 (EtwpCovSampContextAddSamples.c)
 *     EtwpCoverageSamplerQuery @ 0x140904C64 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall EtwpCovSampCaptureContextSetPaused(__int64 a1, __int64 a2, int a3)
{
  LONG result; // eax
  __int64 *i; // rcx

  if ( *(_DWORD *)(a2 + 916) != a3 )
  {
    if ( a3 )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x100) == 0 )
      {
        *(_DWORD *)(a2 + 916) = 1;
        result = KeSetEvent(*(PRKEVENT *)(a1 + 1152), 0, 0);
      }
    }
    else
    {
      *(_DWORD *)(a2 + 916) = 0;
    }
    for ( i = *(__int64 **)(a2 + 576); i != (__int64 *)(a2 + 576); i = (__int64 *)*i )
    {
      result = *(_DWORD *)(a2 + 916);
      *((_DWORD *)i + 7) = result;
    }
  }
  return result;
}
