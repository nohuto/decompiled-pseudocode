/*
 * XREFs of swprintf_s @ 0x180098690
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x180051B60 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x180051CC0 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x18006A4B0 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x180078430 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x180078510 (RtlIpv4AddressToStringW.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CBD98 (CsrpLocalSetupForSecureProcess.c)
 *     RtlEthernetAddressToStringW @ 0x1800F5AD0 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x1800986C0 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
