/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x1406DFF50
 * Callers:
 *     SepCheckAndCopySelfRelativeSD @ 0x14031D774 (SepCheckAndCopySelfRelativeSD.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406FA150 (LocalConvertStringSDToSD_Rev1.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FFEE4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14071B8E0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14071BDD0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407857FC (_PnpGetEnumSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DE3C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140863FE4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140864270 (PiAuGetStateDirectorySecurityObject.c)
 *     CMFCreateSecurityDescriptor @ 0x1409152F0 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140941BE4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409F6FC0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7388 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A100B0 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlMakeSelfRelativeSD @ 0x1406DFF74 (RtlMakeSelfRelativeSD.c)
 */

NTSTATUS __stdcall RtlAbsoluteToSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  if ( *((__int16 *)AbsoluteSecurityDescriptor + 1) < 0 )
    return -1073741593;
  else
    return RtlMakeSelfRelativeSD(AbsoluteSecurityDescriptor, SelfRelativeSecurityDescriptor, BufferLength);
}
