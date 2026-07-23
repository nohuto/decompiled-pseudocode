/*
 * XREFs of iswctype @ 0x180093870
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x180046B50 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x180046CA0 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x180046ED0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x1800470E0 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x1800937A0 (iswalnum.c)
 *     iswalpha @ 0x1800937B0 (iswalpha.c)
 *     iswdigit @ 0x1800937E0 (iswdigit.c)
 *     iswgraph @ 0x1800937F0 (iswgraph.c)
 *     iswlower @ 0x180093800 (iswlower.c)
 *     iswprint @ 0x180093810 (iswprint.c)
 *     iswspace @ 0x180093820 (iswspace.c)
 *     iswxdigit @ 0x180093830 (iswxdigit.c)
 *     towlower @ 0x1800959A0 (towlower.c)
 *     _whiteout @ 0x18009E46C (_whiteout.c)
 *     _winput_s @ 0x18009E4C4 (_winput_s.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF198 (RtlUnicodeStringToLcid.c)
 *     RtlEthernetStringToAddressW @ 0x1800F8040 (RtlEthernetStringToAddressW.c)
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
