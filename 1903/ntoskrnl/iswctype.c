/*
 * XREFs of iswctype @ 0x1401A2C38
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1401303D0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140130460 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x140131E60 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x140131ED0 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x1401A0800 (iswalnum.c)
 *     iswalpha @ 0x1401A081C (iswalpha.c)
 *     iswdigit @ 0x1401A0840 (iswdigit.c)
 *     iswspace @ 0x1401A0860 (iswspace.c)
 *     towlower @ 0x1401A1D80 (towlower.c)
 *     _whiteout @ 0x1401A9058 (_whiteout.c)
 *     _winput_s @ 0x1401A90B0 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x140312980 (RtlEthernetStringToAddressW.c)
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
