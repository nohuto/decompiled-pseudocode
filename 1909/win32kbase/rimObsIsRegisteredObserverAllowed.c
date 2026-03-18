/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C0157324
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C01581D8 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0157244 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     RIMIsTestSigningOn @ 0x1C015A864 (RIMIsTestSigningOn.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsIsRegisteredObserverAllowed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = 1;
  if ( !(unsigned int)rimIsProcessLocalSystem(*(struct _EPROCESS **)(a1 + 32))
    && !(unsigned int)RIMIsTestSigningOn(v3, v2) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    return 0;
  }
  return v1;
}
