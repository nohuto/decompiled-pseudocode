/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x14074CE44
 * Callers:
 *     SdbpResolveMatchingFile @ 0x14074C5C4 (SdbpResolveMatchingFile.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x1409241C8 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140924274 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140924EE8 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  NTSTATUS v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  SystemInformation = 0LL;
  v7 = 0;
  v9 = 0;
  if ( a1 )
  {
    v4 = ZwQuerySystemInformation(SystemProcessorInformation, &v6, 0xCu, 0LL);
    if ( v4 < 0 )
      goto LABEL_9;
    *a1 = v6;
  }
  if ( a2 )
  {
    v4 = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
    if ( v4 >= 0 )
    {
      *a2 = SystemInformation;
      return 0;
    }
LABEL_9:
    AslLogCallPrintf(1LL);
    return (unsigned int)v4;
  }
  return 0;
}
