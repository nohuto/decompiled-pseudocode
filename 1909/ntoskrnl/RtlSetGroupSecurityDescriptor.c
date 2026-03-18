/*
 * XREFs of RtlSetGroupSecurityDescriptor @ 0x14069D1F0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14030BCE0 (RtlCheckTokenCapability.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406FA150 (LocalConvertStringSDToSD_Rev1.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14071B8E0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14071BDD0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407857FC (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D7AC (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DE3C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140863D88 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140863FE4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140864270 (PiAuGetStateDirectorySecurityObject.c)
 *     DrvDbGetSecurityDescriptor @ 0x140941BE4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409F6FC0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7388 (PiAuCreateStandardSecurityObject.c)
 *     SepInitSystemDacls @ 0x140A00C5C (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140A01A5C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A02014 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A022A8 (SeMakeAnonymousLogonToken.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A100B0 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     WmipInitializeSecurity @ 0x140A18DBC (WmipInitializeSecurity.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Group,
        BOOLEAN GroupDefaulted)
{
  __int16 v4; // cx
  PSID v5; // rax
  __int16 v6; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 < 0 )
    return -1073741703;
  v5 = 0LL;
  if ( Group )
    v5 = Group;
  *((_QWORD *)SecurityDescriptor + 2) = v5;
  v6 = v4 & 0xFFFD;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( GroupDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 2;
  return 0;
}
