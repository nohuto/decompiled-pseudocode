/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140A3D880
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140A22D68 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x1406ECE64 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x14071B2A4 (PopIsDirectedDripsEnabled.c)
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
  dword_1404425CC = v0;
  return 0LL;
}
