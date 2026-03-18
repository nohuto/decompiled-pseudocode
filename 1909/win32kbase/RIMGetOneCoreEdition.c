/*
 * XREFs of RIMGetOneCoreEdition @ 0x1C0031C24
 * Callers:
 *     RIMIsRunningOnDesktop @ 0x1C0031C04 (RIMIsRunningOnDesktop.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C0158AE4 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 RIMGetOneCoreEdition()
{
  unsigned int v0; // ecx
  int v2; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+50h] [rbp+8h] BYREF
  char v5; // [rsp+58h] [rbp+10h] BYREF
  char v6; // [rsp+60h] [rbp+18h] BYREF

  v0 = dword_1C020D2AC;
  if ( (unsigned int)dword_1C020D2AC > 0x11 )
  {
    v4 = dword_1C020D2AC;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
    v2 = ZwQueryLicenseValue(&DestinationString, &v6, &v4, 4LL, &v5);
    v0 = dword_1C020D2AC;
    if ( v2 >= 0 )
      v0 = v4;
    dword_1C020D2AC = v0;
  }
  return v0;
}
