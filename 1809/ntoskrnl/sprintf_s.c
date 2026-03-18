/*
 * XREFs of sprintf_s @ 0x14019B620
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x14013F4E0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x140166B90 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1402F3080 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1402F30F0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1402F31B0 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706594 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140731E00 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x140733098 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14073D2DC (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x14094BE50 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x14094C584 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14094CB74 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x14094D184 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x1409C2CAC (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x14019B650 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
