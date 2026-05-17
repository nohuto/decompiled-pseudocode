/*
 * XREFs of iswctype @ 0x180090110
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x18002B530 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv4StringToAddressW @ 0x18002B680 (RtlIpv4StringToAddressW.c)
 *     RtlIpv6StringToAddressExW @ 0x18002B8B0 (RtlIpv6StringToAddressExW.c)
 *     RtlIpv6StringToAddressW @ 0x18002BAA0 (RtlIpv6StringToAddressW.c)
 *     iswalnum @ 0x180090040 (iswalnum.c)
 *     iswalpha @ 0x180090050 (iswalpha.c)
 *     iswdigit @ 0x180090080 (iswdigit.c)
 *     iswgraph @ 0x180090090 (iswgraph.c)
 *     iswlower @ 0x1800900A0 (iswlower.c)
 *     iswprint @ 0x1800900B0 (iswprint.c)
 *     iswspace @ 0x1800900C0 (iswspace.c)
 *     iswxdigit @ 0x1800900D0 (iswxdigit.c)
 *     towlower @ 0x180092230 (towlower.c)
 *     sub_18009ADB4 @ 0x18009ADB4 (sub_18009ADB4.c)
 *     sub_18009AE0C @ 0x18009AE0C (sub_18009AE0C.c)
 *     sub_1800EBD90 @ 0x1800EBD90 (sub_1800EBD90.c)
 *     RtlEthernetStringToAddressW @ 0x1800F5BA0 (RtlEthernetStringToAddressW.c)
 * Callees:
 *     <none>
 */

int __cdecl iswctype(wint_t C, wctype_t Type)
{
  if ( C >= 0x100u )
    return 0;
  else
    return Type & *((_WORD *)off_18015F008 + C);
}
