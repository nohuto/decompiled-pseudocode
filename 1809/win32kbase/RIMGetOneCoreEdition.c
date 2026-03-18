/*
 * XREFs of RIMGetOneCoreEdition @ 0x1C012FA04
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C012DD18 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 *     RIMIsRunningOnDesktop @ 0x1C012FA7C (RIMIsRunningOnDesktop.c)
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

  v0 = dword_1C01CB6C0;
  if ( (unsigned int)dword_1C01CB6C0 > 0x10 )
  {
    v4 = dword_1C01CB6C0;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    v1 = ZwQueryLicenseValue(&DestinationString, &v6, &v4, 4LL, &v5);
    v0 = dword_1C01CB6C0;
    if ( v1 >= 0 )
      v0 = v4;
    dword_1C01CB6C0 = v0;
  }
  return v0;
}
