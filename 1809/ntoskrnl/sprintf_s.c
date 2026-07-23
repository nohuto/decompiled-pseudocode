/*
 * XREFs of sprintf_s @ 0x14019B780
 * Callers:
 *     RtlIpv6AddressToStringA @ 0x14013F600 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x140166CB0 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1402F3370 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1402F33E0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1402F34A0 (RtlIpv6AddressToStringExA.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140707814 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140732FD0 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     CmpFindControlSet @ 0x14073E4AC (CmpFindControlSet.c)
 *     HdlspDispatch @ 0x14094CE50 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x14094D584 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x14094DB74 (HdlspProcessDumpCommand.c)
 *     HdlspSendBlueScreenInfo @ 0x14094E184 (HdlspSendBlueScreenInfo.c)
 *     CmpGetAcpiBiosVersion @ 0x1409C3CAC (CmpGetAcpiBiosVersion.c)
 * Callees:
 *     vsprintf_s @ 0x14019B7B0 (vsprintf_s.c)
 */

int sprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(DstBuf, SizeInBytes, Format, ArgList);
}
