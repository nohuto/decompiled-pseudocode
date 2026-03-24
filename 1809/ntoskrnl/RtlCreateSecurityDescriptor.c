/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x14064FE90
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1400D9E94 (SepMandatorySubProcessToken.c)
 *     RtlCheckTokenMembershipEx @ 0x1400DCB30 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x14017D0EC (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D90 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlCheckTokenCapability @ 0x1402EDAB0 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FE95C (SepBuildCapeSecurityDescriptor.c)
 *     SepVerifyDesktopAppxImage @ 0x1402FF010 (SepVerifyDesktopAppxImage.c)
 *     WdipAccessCheck @ 0x14030DD54 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326154 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BC394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065146C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1406527AC (IopCreateSecurityDescriptorPerType.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1406528E4 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140654050 (ObpVerifyAccessToBoundaryEntry.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406558F8 (PiUEventInitClientRegistrationContext.c)
 *     sub_140685840 @ 0x140685840 (sub_140685840.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB04 (PspAllocateAndQueryNotificationChannel.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406AF7CC (LocalConvertStringSDToSD_Rev1.c)
 *     PopCreateNotificationName @ 0x1406CE5A0 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D64DC (RtlpSysVolCreateSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD788 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE310 (_PnpGetPropertiesSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140713940 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x1407152BC (MiSessionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x140726F24 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AB8 (DbgkpCreateNotificationEvent.c)
 *     ObCreateKernelObjectsSD @ 0x14072BF5C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14072C320 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14072C518 (MiCreateMemoryEventSD.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140733580 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358C0 (CmpAdminSystemSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747C88 (PopCreateHiberFileSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x14074BFB8 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x140752E70 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407586A0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB7C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F4B50 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F5218 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140829F1C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082A150 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082A3CC (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x140896480 (RtlpSysVolTakeOwnership.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE06C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8610 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B40 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14090638C (ObpGetSilosRootDirectory.c)
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
 *     IopApplySystemPartitionProt @ 0x1409F4F40 (IopApplySystemPartitionProt.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

NTSTATUS __stdcall RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  memset(SecurityDescriptor, 0, 0x28uLL);
  result = 0;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
