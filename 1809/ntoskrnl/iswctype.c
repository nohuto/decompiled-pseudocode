/*
 * XREFs of iswctype @ 0x140198528
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1401302A0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140130330 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x140132490 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x140132500 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x140196170 (iswalnum.c)
 *     iswdigit @ 0x140196190 (iswdigit.c)
 *     iswspace @ 0x1401961B0 (iswspace.c)
 *     towlower @ 0x1401976C0 (towlower.c)
 *     _whiteout @ 0x14019E880 (_whiteout.c)
 *     _winput_s @ 0x14019E8D8 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1402F4020 (RtlEthernetStringToAddressW.c)
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
