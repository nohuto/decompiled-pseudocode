/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x1409F8E18
 * Callers:
 *     PopInitializeDripsWatchdog @ 0x1409DFB00 (PopInitializeDripsWatchdog.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x1406CCDD4 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x1406EE414 (PopIsDirectedDripsEnabled.c)
 */

__int64 PopDripsWatchdogInitializeActions()
{
  int v0; // edx
  int v1; // eax

  if ( (unsigned __int8)PopIsDirectedDripsEnabled() )
  {
    v1 = PopCapturePlatformRole();
    if ( v1 != 2 && v1 != 8 )
      v0 |= 1u;
  }
  dword_140417D2C = v0;
  return 0LL;
}
