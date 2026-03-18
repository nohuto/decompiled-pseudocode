/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C01049B8
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0105778 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     RIMIsRunningOnMobile @ 0x1C00F2610 (RIMIsRunningOnMobile.c)
 *     RIMIsTestSigningOn @ 0x1C00F2630 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C01048F4 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ApiSetIsProcessForeground @ 0x1C0140EDC (ApiSetIsProcessForeground.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsIsRegisteredObserverAllowed(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 ProcessWin32Process; // rax

  v2 = 1;
  if ( !(unsigned int)RIMIsTestSigningOn() )
  {
    if ( RIMIsRunningOnMobile() )
    {
      ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 32));
      if ( (unsigned int)ApiSetIsProcessForeground(*(unsigned int *)(ProcessWin32Process + 56))
        || (unsigned int)rimIsProcessLocalSystem(*(struct _EPROCESS **)(a1 + 32)) )
      {
        return v2;
      }
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
    }
    return 0;
  }
  return v2;
}
