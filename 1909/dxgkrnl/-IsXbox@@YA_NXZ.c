/*
 * XREFs of ?IsXbox@@YA_NXZ @ 0x1C00456C4
 * Callers:
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C0045580 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 * Callees:
 *     <none>
 */

char IsXbox(void)
{
  char v0; // cl
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF
  char v4; // [rsp+58h] [rbp+10h] BYREF
  char v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = 3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Kernel-OneCore-DeviceFamilyID");
  ZwQueryLicenseValue(&DestinationString, &v5, &v3, 4LL, &v4);
  v0 = 1;
  if ( v3 != 5 )
    return (unsigned int)(v3 - 11) <= 1;
  return v0;
}
