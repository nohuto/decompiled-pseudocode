/*
 * XREFs of swprintf_s @ 0x180097FF0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x180051AC0 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x180051C20 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x18006A260 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x180077FB0 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x180078090 (RtlIpv4AddressToStringW.c)
 *     sub_1800CBCD0 @ 0x1800CBCD0 (sub_1800CBCD0.c)
 *     RtlEthernetAddressToStringW @ 0x1800F59F0 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x180098020 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
