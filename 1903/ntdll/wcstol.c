/*
 * XREFs of wcstol @ 0x180092840
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x18002BAA0 (RtlIpv6StringToAddressW.c)
 * Callees:
 *     sub_18009261C @ 0x18009261C (sub_18009261C.c)
 */

int __cdecl wcstol(const wchar_t *String, wchar_t **EndPtr, int Radix)
{
  return sub_18009261C((__int64)&off_180118AE8, (unsigned __int16 *)String, EndPtr, Radix, 0, 0);
}
