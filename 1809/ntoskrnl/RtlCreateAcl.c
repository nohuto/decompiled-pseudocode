/*
 * XREFs of RtlCreateAcl @ 0x1405CAF70
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400DCB10 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140132CF8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x14017D0CC (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D70 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlCheckTokenCapability @ 0x1402ED9B0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14030DC54 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326054 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C9190 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     SepCreateImpersonationTokenDacl @ 0x140630A44 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065148C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1406527CC (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140654070 (ObpVerifyAccessToBoundaryEntry.c)
 *     PiUEventInitClientRegistrationContext @ 0x140655918 (PiUEventInitClientRegistrationContext.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406CE5C0 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D64FC (RtlpSysVolCreateSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD7A8 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE330 (_PnpGetPropertiesSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x140713960 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x1407152DC (MiSessionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x140726F44 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AD8 (DbgkpCreateNotificationEvent.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14072909C (ObpCreateDefaultObjectTypeSD.c)
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
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F5238 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140829F3C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082A170 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082A3EC (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpComputeMergedAcl2 @ 0x140894624 (RtlpComputeMergedAcl2.c)
 *     RtlpCreateServerAcl @ 0x140894920 (RtlpCreateServerAcl.c)
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
 *     memset @ 0x1401D1780 (memset.c)
 */

NTSTATUS __stdcall RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  __int16 v3; // bx
  UCHAR v4; // si
  NTSTATUS result; // eax

  v3 = AclLength;
  v4 = AclRevision;
  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  memset(Acl, 0, AclLength);
  result = 0;
  Acl->AclRevision = v4;
  Acl->Sbz1 = 0;
  Acl->AclSize = v3 & 0xFFFC;
  *(_DWORD *)&Acl->AceCount = 0;
  return result;
}
