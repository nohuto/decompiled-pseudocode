/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x1405CBDE0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400DCBB0 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x14017D22C (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1402EDCA0 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FEB4C (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14030DF44 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BD394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 *     NtOpenThreadTokenEx @ 0x140649A40 (NtOpenThreadTokenEx.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065262C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14065396C (IopCreateSecurityDescriptorPerType.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140653AA4 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140655210 (ObpVerifyAccessToBoundaryEntry.c)
 *     PiUEventInitClientRegistrationContext @ 0x140656AB8 (PiUEventInitClientRegistrationContext.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406B0A6C (LocalConvertStringSDToSD_Rev1.c)
 *     PopCreateNotificationName @ 0x1406CF840 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D777C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D78D8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FEA28 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FF5B0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140714BE0 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14071655C (MiSessionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140728D58 (DbgkpCreateNotificationEvent.c)
 *     ObCreateKernelObjectsSD @ 0x14072D14C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14072D510 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14072D708 (MiCreateMemoryEventSD.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140734770 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140736AB0 (CmpAdminSystemSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140748E78 (PopCreateHiberFileSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x140754060 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140759890 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075DD6C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F5D50 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F6418 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x14082B11C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082B350 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082B5CC (PiAuGetStateDirectorySecurityObject.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AF2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D98D0 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140904E00 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14090764C (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x14092747C (ViInitializeLocalSystemDescriptor.c)
 *     SepInitSystemDacls @ 0x1409AE07C (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x1409AEE18 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1409AF3B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1409AF624 (SeMakeAnonymousLogonToken.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409C78D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C7C8C (PiAuCreateStandardSecurityObject.c)
 *     WmipInitializeSecurity @ 0x1409D5198 (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1409DA4B0 (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1409DA9A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x1409DAF10 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x1409DB2F8 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x1409DCCC0 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1409F5F40 (IopApplySystemPartitionProt.c)
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
