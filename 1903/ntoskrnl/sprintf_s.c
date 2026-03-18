/*
 * XREFs of sprintf_s @ 0x1401A5EB0
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x140143EB0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x14016CD90 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x140311CD0 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x140311D40 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x140311E00 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406984FC (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14075D508 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x14075E648 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14076516C (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x14098BE60 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x14098C594 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14098CB80 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x14098D1B0 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x140A0C910 (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x1401A5EE0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
