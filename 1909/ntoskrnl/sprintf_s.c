/*
 * XREFs of sprintf_s @ 0x1401A65D0
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x1401443F0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14016D480 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x140311720 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x140311790 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x140311850 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14068BA6C (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140761C88 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x140762F6C (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x140769C6C (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x14098BE60 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x14098C594 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14098CB80 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x14098D1B0 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140A0CE3C (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1401A6600 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
