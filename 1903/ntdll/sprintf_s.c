/*
 * XREFs of sprintf_s @ 0x180097A70
 * Callers:
 *     sub_18002105C @ 0x18002105C (sub_18002105C.c)
 *     RtlIpv6AddressToStringA @ 0x1800517B0 (RtlIpv6AddressToStringA.c)
 *     RtlIpv4AddressToStringA @ 0x180080870 (RtlIpv4AddressToStringA.c)
 *     RtlEthernetAddressToStringA @ 0x1800F57A0 (RtlEthernetAddressToStringA.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F5810 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F58D0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     vsprintf_s @ 0x180097AA0 (vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vsprintf_s(Buffer, BufferCount, Format, ArgList);
}
