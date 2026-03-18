/*
 * XREFs of PopNetIsDisconnectStandbyActive @ 0x140876DFC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DEFEC (PopCaptureSleepStudyStatistics.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopNetIsDisconnectStandbyActive(_DWORD *a1)
{
  if ( a1 )
  {
    if ( PopNetStandbyReason )
    {
      switch ( PopNetStandbyReason )
      {
        case 1:
          *a1 = 2;
          break;
        case 2:
          *a1 = 3;
          break;
        case 3:
          *a1 = 4;
          break;
        case 6:
          *a1 = 1;
          break;
        case 7:
          *a1 = 5;
          break;
      }
    }
    else
    {
      *a1 = 0;
    }
  }
  return PopNetStandbyState == 2;
}
