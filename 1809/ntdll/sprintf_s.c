/*
 * XREFs of sprintf_s @ 0x18009B1D0
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x180022110 (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv4AddressToStringA @ 0x1800854D0 (RtlIpv4AddressToStringA.c)
 *     RtlIpv6AddressToStringA @ 0x18008CAF0 (RtlIpv6AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800F7C40 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F7CB0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F7D70 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     vsprintf_s @ 0x18009B200 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
