/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x1406801B0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14030C230 (RtlCheckTokenCapability.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406819F8 (PiUEventInitClientRegistrationContext.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406F8374 (LocalConvertStringSDToSD_Rev1.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140719AF0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140719FE0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14073DD04 (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14078349C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D930 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DFC0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140864688 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408648E4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140864B70 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1408D46F0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1408D4B7C (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x140915890 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140942174 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409F70B0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7478 (PiAuCreateStandardSecurityObject.c)
 *     SepInitSystemDacls @ 0x140A00740 (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140A01540 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A01AF8 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A01D8C (SeMakeAnonymousLogonToken.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A0F918 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     WmipInitializeSecurity @ 0x140A188FC (WmipInitializeSecurity.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Owner,
        BOOLEAN OwnerDefaulted)
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
  if ( Owner )
    v5 = Owner;
  *((_QWORD *)SecurityDescriptor + 1) = v5;
  v6 = v4 & 0xFFFE;
  *((_WORD *)SecurityDescriptor + 1) = v6;
  if ( OwnerDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v6 | 1;
  return 0;
}
