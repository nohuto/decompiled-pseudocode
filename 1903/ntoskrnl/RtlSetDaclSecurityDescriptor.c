/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x1405D5A90
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x14018AED0 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x14030C230 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14031CB6C (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14032B918 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034793C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C6DC0 (SepAppendAceToTokenObjectAcl.c)
 *     NtOpenThreadTokenEx @ 0x1405D5B10 (NtOpenThreadTokenEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14061FFDC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140680270 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140681580 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140681660 (IopCreateSecurityDescriptorPerType.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406819F8 (PiUEventInitClientRegistrationContext.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D4650 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406ED6F4 (PopCreateNotificationName.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406F8374 (LocalConvertStringSDToSD_Rev1.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FE104 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140719AF0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140719FE0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14073DD04 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14073FCC0 (MiSessionObjectCreate.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14074A954 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14074F478 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14074F860 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14074FA58 (MiCreateMemoryEventSD.c)
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140758D38 (DbgkpCreateNotificationEvent.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14075EBF8 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140760CC0 (CmpAdminSystemSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1407785F0 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x14077E200 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14078349C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D930 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DFC0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140864688 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408648E4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140864B70 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1408D46F0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1408D4A0C (RtlpSysVolCreateSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408EB02C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140915890 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140942174 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1409449DC (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140964954 (ViInitializeLocalSystemDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409F70B0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7478 (PiAuCreateStandardSecurityObject.c)
 *     SepInitSystemDacls @ 0x140A00740 (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140A01540 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A01AF8 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A01D8C (SeMakeAnonymousLogonToken.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A0F918 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     WmipInitializeSecurity @ 0x140A188FC (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A1C0DC (PspInitializeSystemPartitionPhase0.c)
 *     IopCreateUmdfDirectory @ 0x140A1CCAC (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x140A1DD44 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A1E820 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A3A4B4 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN DaclPresent,
        PACL Dacl,
        BOOLEAN DaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  PACL v7; // rax
  __int16 v8; // cx
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( DaclPresent )
    {
      v6 = v5 | 4;
      v7 = 0LL;
      if ( Dacl )
        v7 = Dacl;
      *((_QWORD *)SecurityDescriptor + 4) = v7;
      v8 = v6 & 0xFFF7;
      *((_WORD *)SecurityDescriptor + 1) = v8;
      if ( !DaclDefaulted )
        return 0;
      v10 = v8 | 8;
    }
    else
    {
      v10 = v5 & 0xFFFB;
    }
    *((_WORD *)SecurityDescriptor + 1) = v10;
    return 0;
  }
  return -1073741703;
}
