/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x1400A5380
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     PpmPerfMinimumPerfReached @ 0x1400A544C (PpmPerfMinimumPerfReached.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmParkMaximumCoresParked @ 0x14012DCB4 (PpmParkMaximumCoresParked.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x1402E6B8C (PpmEventTraceMakeupPerfCheck.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  _QWORD *v1; // rcx
  unsigned int v2; // r8d
  unsigned __int16 i; // dx
  __int64 v4; // rax
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  if ( PpmCheckMakeupCount )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v5[1] = (unsigned __int16 *)qword_140405158;
      v5[0] = (unsigned __int16 *)&PpmCheckRegistered;
      v6 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v5) )
      {
        v1 = *(_QWORD **)(KeGetPrcb(v7) + 24168);
        if ( v1 )
        {
          v1[1] = v1[4];
          *v1 = v1[5];
        }
      }
      v2 = PpmParkNumNodes;
      for ( i = 0; i < v2; *(_QWORD *)(PpmParkNodes + 264 * v4 + 104) = *(_QWORD *)(PpmParkNodes + 264 * v4 + 96) )
        v4 = i++;
      PpmCheckMakeupCount = 0;
    }
    else
    {
      PpmEventTraceMakeupPerfCheck();
      --PpmCheckMakeupCount;
      PpmCheckPipelineIndex = 4;
    }
  }
  return 1;
}
