/*
 * XREFs of ACPIInitUnicodeString @ 0x1C0096B14
 * Callers:
 *     ACPIQueryDeviceBiosName @ 0x1C0096A84 (ACPIQueryDeviceBiosName.c)
 *     ACPIDockIrpQueryID @ 0x1C00A83B0 (ACPIDockIrpQueryID.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AB6C0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00AB960 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ACPIInitUnicodeString(PUNICODE_STRING DestinationString, const char *a2)
{
  ULONG v3; // eax
  wchar_t *PoolWithTag; // rax
  struct _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationStringa, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationStringa);
  if ( v3 > 0xFFFF )
    return -1073741584;
  DestinationString->MaximumLength = v3;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v3, 0x53706341u);
  DestinationString->Buffer = PoolWithTag;
  if ( PoolWithTag )
    return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 0);
  else
    return -1073741670;
}
