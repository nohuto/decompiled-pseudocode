/*
 * XREFs of iswctype @ 0x1800907B0
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x18002B530 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18002B680 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x18002B8B0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x18002BAA0 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x1800906E0 (iswalnum.c)
 *     iswalpha @ 0x1800906F0 (iswalpha.c)
 *     iswdigit @ 0x180090720 (iswdigit.c)
 *     iswgraph @ 0x180090730 (iswgraph.c)
 *     iswlower @ 0x180090740 (iswlower.c)
 *     iswprint @ 0x180090750 (iswprint.c)
 *     iswspace @ 0x180090760 (iswspace.c)
 *     iswxdigit @ 0x180090770 (iswxdigit.c)
 *     towlower @ 0x1800928D0 (towlower.c)
 *     _whiteout @ 0x18009B454 (_whiteout.c)
 *     _winput_s @ 0x18009B4AC (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800EBE80 (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1800F5C80 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & pwctype[C];
}
