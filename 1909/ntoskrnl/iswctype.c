/*
 * XREFs of iswctype @ 0x1401A3358
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x140130F60 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140130FF0 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x140132670 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x1401326E0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1401A0F20 (iswalnum.c)
 *     iswalpha @ 0x1401A0F3C (iswalpha.c)
 *     iswdigit @ 0x1401A0F60 (iswdigit.c)
 *     iswspace @ 0x1401A0F80 (iswspace.c)
 *     towlower @ 0x1401A24A0 (towlower.c)
 *     _whiteout @ 0x1401A9778 (_whiteout.c)
 *     _winput_s @ 0x1401A97D0 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1403123D0 (RtlEthernetStringToAddressW.c)
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
