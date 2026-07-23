/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800EAF30
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation @ 0x18009D2B0 (ZwPowerInformation.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  _QWORD v2[5]; // [rsp+30h] [rbp-28h] BYREF

  result = 0;
  if ( !FileHandle )
  {
    v2[0] = 38LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    return ZwPowerInformation(PowerInformationInternal, v2, 0x18u, 0LL, 0);
  }
  return result;
}
