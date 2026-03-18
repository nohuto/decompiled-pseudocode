/*
 * XREFs of KeIsEqualAffinityEx @ 0x140194E20
 * Callers:
 *     PpmParkReportMask @ 0x1401243A0 (PpmParkReportMask.c)
 *     KeIsSubsetAffinityEx @ 0x1402A4C00 (KeIsSubsetAffinityEx.c)
 *     PspSetEffectiveJobLimits @ 0x14068A6D4 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x140776250 (PpmRegisterPerfStates.c)
 *     PopInitializeHeteroProcessors @ 0x140777198 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 v3; // r10
  unsigned __int16 v5; // dx

  v2 = a2;
  v3 = *a1;
  if ( *a1 >= *a2 )
  {
    v3 = *a2;
    v2 = a1;
  }
  v5 = 0;
  if ( v3 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= v3 )
        goto LABEL_6;
    }
    return 0LL;
  }
  else
  {
LABEL_6:
    while ( v5 < *v2 )
    {
      if ( *(_QWORD *)&v2[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
