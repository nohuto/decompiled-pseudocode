/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800EDDD0
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x1800A0ED0 (NtPowerInformation.c)
 */

NTSTATUS RtlRestoreSystemBootStatusDefaults(void)
{
  _DWORD v1[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v2; // [rsp+40h] [rbp-18h]

  v1[1] = 0;
  v1[3] = 0;
  v1[0] = 35;
  v1[2] = 0;
  v2 = 0LL;
  return NtPowerInformation(PowerInformationInternal, v1, 0x18u, 0LL, 0);
}
