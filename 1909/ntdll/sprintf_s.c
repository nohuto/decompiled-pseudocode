/*
 * XREFs of sprintf_s @ 0x180098110
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x18002105C (LdrpLogDelayLoadTrigger.c)
 *     RtlIpv6AddressToStringA @ 0x180051850 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x180080F10 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800F5880 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F58F0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F59B0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     vsprintf_s @ 0x180098140 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
