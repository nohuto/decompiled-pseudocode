/*
 * XREFs of PopCapturePlatformRole @ 0x1406EE084
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopDripsWatchdogInitializeActions @ 0x140A3D650 (PopDripsWatchdogInitializeActions.c)
 * Callees:
 *     <none>
 */

__int64 PopCapturePlatformRole()
{
  __int64 result; // rax
  int v1; // ecx
  unsigned __int32 v2; // ecx

  result = (unsigned int)PopPlatformRole;
  v1 = 0;
  if ( !PopPlatformRole )
  {
    LOBYTE(v1) = dword_140443190 != 0;
    v2 = v1 + 1;
    result = (unsigned int)_InterlockedCompareExchange(&PopPlatformRole, v2, 0);
    if ( !(_DWORD)result )
      return v2;
  }
  return result;
}
