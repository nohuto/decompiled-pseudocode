/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x1409F7E18
 * Callers:
 *     PopInitializeDripsWatchdog @ 0x1409DEB00 (PopInitializeDripsWatchdog.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x1406CBB34 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x1406ED174 (PopIsDirectedDripsEnabled.c)
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
  dword_140416CAC = v0;
  return 0LL;
}
