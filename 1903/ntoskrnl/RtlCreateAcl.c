/*
 * XREFs of RtlCreateAcl @ 0x1405C8930
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1401335B8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x14018AED0 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x14030C230 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14032B918 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034793C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C6DC0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     SepCreateImpersonationTokenDacl @ 0x1405DC770 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140680270 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140681660 (IopCreateSecurityDescriptorPerType.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406819F8 (PiUEventInitClientRegistrationContext.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D4650 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     RtlpCreateServerAcl @ 0x1406DD2D0 (RtlpCreateServerAcl.c)
 *     PopCreateNotificationName @ 0x1406ED6F4 (PopCreateNotificationName.c)
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
 *     ObpCreateDefaultObjectTypeSD @ 0x14075A158 (ObpCreateDefaultObjectTypeSD.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14075EBF8 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140760CC0 (CmpAdminSystemSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1407785F0 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x14077E200 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14078349C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DFC0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140864688 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408648E4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140864B70 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpComputeMergedAcl2 @ 0x1408D27A4 (RtlpComputeMergedAcl2.c)
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
 *     memset @ 0x1401D6BC0 (memset.c)
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
