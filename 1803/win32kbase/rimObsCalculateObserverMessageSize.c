/*
 * XREFs of rimObsCalculateObserverMessageSize @ 0x1C0104C94
 * Callers:
 *     rimObsCopyMessage @ 0x1C0104F50 (rimObsCopyMessage.c)
 *     rimObsPopInputMessage @ 0x1C010547C (rimObsPopInputMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCalculateObserverMessageSize(unsigned int *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx

  v1 = *a1;
  v2 = 48;
  if ( (_DWORD)v1 )
  {
    if ( (_DWORD)v1 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v1);
  }
  else
  {
    return a1[6] + 48;
  }
  return v2;
}
