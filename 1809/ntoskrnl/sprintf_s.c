/*
 * XREFs of sprintf_s @ 0x14019B640
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x14013F500 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x140166BB0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1402F3180 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1402F31F0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1402F32B0 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706574 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140731DE0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x140733078 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14073D2BC (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x14094BE50 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x14094C584 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14094CB74 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x14094D184 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x1409C2CAC (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x14019B670 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
