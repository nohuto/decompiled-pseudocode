/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x1405CADE0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400DCB10 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x14017D0CC (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1402ED9B0 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FE85C (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14030DC54 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326054 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BC394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C9190 (SepAppendAceToTokenObjectAcl.c)
 *     NtOpenThreadTokenEx @ 0x1406488A0 (NtOpenThreadTokenEx.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065148C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1406527CC (IopCreateSecurityDescriptorPerType.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140652904 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140654070 (ObpVerifyAccessToBoundaryEntry.c)
 *     PiUEventInitClientRegistrationContext @ 0x140655918 (PiUEventInitClientRegistrationContext.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406AF7EC (LocalConvertStringSDToSD_Rev1.c)
 *     PopCreateNotificationName @ 0x1406CE5C0 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D64FC (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D6658 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD7A8 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE330 (_PnpGetPropertiesSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140713960 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x1407152DC (MiSessionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x140726F44 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AD8 (DbgkpCreateNotificationEvent.c)
 *     ObCreateKernelObjectsSD @ 0x14072BF7C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14072C340 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14072C538 (MiCreateMemoryEventSD.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407335A0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358E0 (CmpAdminSystemSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747CA8 (PopCreateHiberFileSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x140752E90 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407586C0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB9C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F4B70 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F5238 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140829F3C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082A170 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082A3EC (PiAuGetStateDirectorySecurityObject.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE08C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8630 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B60 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1409063AC (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x14092647C (ViInitializeLocalSystemDescriptor.c)
 *     SepInitSystemDacls @ 0x1409AD07C (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x1409ADE18 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1409AE3B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1409AE624 (SeMakeAnonymousLogonToken.c)
 *     ObInitSystem @ 0x1409B1964 (ObInitSystem.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409C68D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C6C8C (PiAuCreateStandardSecurityObject.c)
 *     WmipInitializeSecurity @ 0x1409D4198 (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1409D94B0 (PspInitializeSystemPartitionPhase0.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1409D99A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x1409D9F10 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x1409DA2F8 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x1409DBCC0 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F30 (IopApplySystemPartitionProt.c)
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
