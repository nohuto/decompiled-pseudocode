/*
 * XREFs of iswctype @ 0x1401983C8
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1401301B0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x140130240 (RtlIpv6StringToAddressW.c)
 *     RtlIpv4StringToAddressExW @ 0x1401323A0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x140132410 (RtlIpv4StringToAddressW.c)
 *     iswalnum @ 0x140196010 (iswalnum.c)
 *     iswdigit @ 0x140196030 (iswdigit.c)
 *     iswspace @ 0x140196050 (iswspace.c)
 *     towlower @ 0x140197560 (towlower.c)
 *     _whiteout @ 0x14019E720 (_whiteout.c)
 *     _winput_s @ 0x14019E778 (_winput_s.c)
 *     RtlEthernetStringToAddressW @ 0x1402F3D30 (RtlEthernetStringToAddressW.c)
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
