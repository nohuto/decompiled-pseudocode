/*
 * XREFs of HvlpProcessIommu @ 0x140278384
 * Callers:
 *     HvlQueryVsmProtectionInfo @ 0x140818834 (HvlQueryVsmProtectionInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     KiGetCpuVendor @ 0x1405706EC (KiGetCpuVendor.c)
 */

bool HvlpProcessIommu()
{
  char v0; // bl
  int v1; // eax
  ULONG ReturnLength; // [rsp+20h] [rbp-38h] BYREF
  _DWORD SystemInformation[2]; // [rsp+28h] [rbp-30h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+34h] [rbp-24h]

  v0 = 0;
  SystemInformation[0] = 1094930505;
  v6 = 0;
  ReturnLength = 20;
  SystemInformation[1] = 1;
  v1 = KiGetCpuVendor() - 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return v0;
    v5 = 1380011332;
  }
  else
  {
    v5 = 1397904969;
  }
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, ReturnLength, &ReturnLength) == -1073741789 )
    return ReturnLength != 0;
  return v0;
}
