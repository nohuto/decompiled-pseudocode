/*
 * XREFs of RIMGetOneCoreEdition @ 0x1C00F2584
 * Callers:
 *     RIMIsRunningOnDesktop @ 0x1C00F25F0 (RIMIsRunningOnDesktop.c)
 *     RIMIsRunningOnMobile @ 0x1C00F2610 (RIMIsRunningOnMobile.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C010600C (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 RIMGetOneCoreEdition()
{
  unsigned int v0; // ecx
  int v1; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+50h] [rbp+8h] BYREF
  char v5; // [rsp+58h] [rbp+10h] BYREF
  char v6; // [rsp+60h] [rbp+18h] BYREF

  v0 = dword_1C019FC54;
  if ( (unsigned int)dword_1C019FC54 > 0xF )
  {
    v4 = dword_1C019FC54;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    v1 = ZwQueryLicenseValue(&DestinationString, &v6, &v4, 4LL, &v5);
    v0 = dword_1C019FC54;
    if ( v1 >= 0 )
      v0 = v4;
    dword_1C019FC54 = v0;
  }
  return v0;
}
