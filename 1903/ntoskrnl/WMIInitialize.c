/*
 * XREFs of WMIInitialize @ 0x140A02DB0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x140A18D0C (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x140A21B80 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x140A22154 (WmipRegisterFirmwareProviders.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A22948 (WmipGetSMBiosFromLoaderBlock.c)
 */

char __fastcall WMIInitialize(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (_DWORD)a1 )
  {
    WmipInitializeRegistration(a1, a2);
    return 1;
  }
  WmipInitializeAllocs(a1, a2);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders(v5, v4);
    return 1;
  }
  return v2;
}
