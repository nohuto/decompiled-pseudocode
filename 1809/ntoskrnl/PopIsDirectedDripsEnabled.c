/*
 * XREFs of PopIsDirectedDripsEnabled @ 0x1406EE414
 * Callers:
 *     PopInitializeDripsWatchdog @ 0x1409DFB00 (PopInitializeDripsWatchdog.c)
 *     PopDripsWatchdogInitializeActions @ 0x1409F8E18 (PopDripsWatchdogInitializeActions.c)
 * Callees:
 *     <none>
 */

__int64 PopIsDirectedDripsEnabled()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett

  _m_prefetchw(&PopDirectedDripsState);
  v0 = PopDirectedDripsState;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange(&PopDirectedDripsState, v0, v0);
  }
  while ( v1 != v0 );
  return v0 & 1;
}
