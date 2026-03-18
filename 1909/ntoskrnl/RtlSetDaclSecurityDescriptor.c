/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x1405D6250
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x14018B860 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x14030BCE0 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14031C5BC (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14032B368 (WdipAccessCheck.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C72C0 (SepAppendAceToTokenObjectAcl.c)
 *     NtOpenThreadTokenEx @ 0x1405D62D0 (NtOpenThreadTokenEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140621AFC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x14069E710 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14069FAE0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14069FBC0 (IopCreateSecurityDescriptorPerType.c)
 *     PiUEventInitClientRegistrationContext @ 0x14069FF58 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1406A1344 (PopCreateNotificationName.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D3D30 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406FA150 (LocalConvertStringSDToSD_Rev1.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FFEE4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14071B8E0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14071BDD0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x14073FC04 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140741BC0 (MiSessionObjectCreate.c)
 *     ObCreateKernelObjectsSD @ 0x14074FF08 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407502F0 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1407504E8 (MiCreateMemoryEventSD.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075B930 (PopCreateHiberFileSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x14075D5C8 (DbgkpCreateNotificationEvent.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14076351C (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407656C8 (CmpAdminSystemSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x14077BBD0 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140780C20 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407857FC (_PnpGetEnumSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D7AC (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DE3C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140863D88 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140863FE4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140864270 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1408D3FF0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1408D430C (RtlpSysVolCreateSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408EA934 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1409152F0 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140941BE4 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14094444C (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140964954 (ViInitializeLocalSystemDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409F6FC0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7388 (PiAuCreateStandardSecurityObject.c)
 *     SepInitSystemDacls @ 0x140A00C5C (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140A01A5C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A02014 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A022A8 (SeMakeAnonymousLogonToken.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A100B0 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     WmipInitializeSecurity @ 0x140A18DBC (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A1C2B8 (PspInitializeSystemPartitionPhase0.c)
 *     IopCreateUmdfDirectory @ 0x140A1CE88 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x140A1DF20 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A1EA00 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A3A284 (IopApplySystemPartitionProt.c)
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
