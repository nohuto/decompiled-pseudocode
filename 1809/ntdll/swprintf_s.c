/*
 * XREFs of swprintf_s @ 0x18009B750
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x18004EF70 (RtlIpv6AddressToStringExW.c)
 *     RtlIpv6AddressToStringW @ 0x18004F0B0 (RtlIpv6AddressToStringW.c)
 *     RtlStringFromGUIDEx @ 0x180074C90 (RtlStringFromGUIDEx.c)
 *     RtlIpv4AddressToStringExW @ 0x18007CF10 (RtlIpv4AddressToStringExW.c)
 *     RtlIpv4AddressToStringW @ 0x18007CFF0 (RtlIpv4AddressToStringW.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CD524 (CsrpLocalSetupForSecureProcess.c)
 *     RtlEthernetAddressToStringW @ 0x1800F7E90 (RtlEthernetAddressToStringW.c)
 * Callees:
 *     vswprintf_s @ 0x18009B780 (vswprintf_s.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  va_list ArgList; // [rsp+48h] [rbp+20h] BYREF

  va_start(ArgList, Format);
  return vswprintf_s(Buffer, BufferCount, Format, ArgList);
}
