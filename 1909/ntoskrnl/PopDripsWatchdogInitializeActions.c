/*
 * XREFs of PopDripsWatchdogInitializeActions @ 0x140A3D650
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140A22E48 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopCapturePlatformRole @ 0x1406EE084 (PopCapturePlatformRole.c)
 *     PopIsDirectedDripsEnabled @ 0x14071D094 (PopIsDirectedDripsEnabled.c)
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
  dword_14044256C = v0;
  return 0LL;
}
