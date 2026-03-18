/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x140004180
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfMinimumPerfReached @ 0x140004258 (PpmPerfMinimumPerfReached.c)
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     PpmParkMaximumCoresParked @ 0x14012F518 (PpmParkMaximumCoresParked.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14030362C (PpmEventTraceMakeupPerfCheck.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  _QWORD *v1; // rcx
  unsigned int v2; // r8d
  unsigned __int16 i; // dx
  __int64 v4; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+32h] [rbp-16h]
  __int16 v8; // [rsp+36h] [rbp-12h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = 0;
  if ( PpmCheckMakeupCount )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v5[1] = qword_14042A7F8;
      v5[0] = &PpmCheckRegistered;
      v6 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v5) )
      {
        v1 = *(_QWORD **)(KeGetPrcb(v9) + 24168);
        if ( v1 )
        {
          v1[1] = v1[4];
          *v1 = v1[5];
        }
      }
      v2 = PpmParkNumNodes;
      for ( i = 0; i < v2; *(_QWORD *)(PpmParkNodes + 272 * v4 + 112) = *(_QWORD *)(PpmParkNodes + 272 * v4 + 104) )
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
