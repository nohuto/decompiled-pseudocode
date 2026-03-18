/*
 * XREFs of rimObsCalculateObserverMessageSize @ 0x1C012C89C
 * Callers:
 *     rimObsCopyMessage @ 0x1C012CB70 (rimObsCopyMessage.c)
 *     rimObsPopInputMessage @ 0x1C012D0DC (rimObsPopInputMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsCalculateObserverMessageSize(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx

  v3 = *a1;
  v4 = 48;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, v3, a3);
  }
  else
  {
    return a1[6] + 48;
  }
  return v4;
}
