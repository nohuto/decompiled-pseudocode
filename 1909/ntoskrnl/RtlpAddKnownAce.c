/*
 * XREFs of RtlpAddKnownAce @ 0x1405DD190
 * Callers:
 *     SepAppendAceToTokenObjectAcl @ 0x1405C72C0 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1405DCF10 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     RtlAddAccessAllowedAce @ 0x14069D1C0 (RtlAddAccessAllowedAce.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x14069E710 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14069FAE0 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x14069FF58 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1406A1344 (PopCreateNotificationName.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D3D30 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FFEE4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14071B8E0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14071BDD0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x14073CE80 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x14073FC04 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x140741BC0 (MiSessionObjectCreate.c)
 *     ObCreateKernelObjectsSD @ 0x14074FF08 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407502F0 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x1407504E8 (MiCreateMemoryEventSD.c)
 *     RtlAddAccessDeniedAceEx @ 0x140755470 (RtlAddAccessDeniedAceEx.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075B930 (PopCreateHiberFileSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x14075D5C8 (DbgkpCreateNotificationEvent.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14075E9E8 (ObpCreateDefaultObjectTypeSD.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14076351C (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407656C8 (CmpAdminSystemSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x14077BBD0 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x140780C20 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407857FC (_PnpGetEnumSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14082DE3C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140863D88 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x140863FE4 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x140864270 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1408D01C0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1408D0220 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1408D048C (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1408D04C0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1408D0510 (RtlAddAuditAccessObjectAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1408D430C (RtlpSysVolCreateSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408EA934 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1409152F0 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140941BE4 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x14094444C (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     RtlValidAcl @ 0x1405DDC30 (RtlValidAcl.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Src, UCHAR a6)
{
  UCHAR v7; // bp
  UCHAR AclRevision; // cl
  UCHAR v10; // si
  unsigned int v11; // eax
  PACL v12; // rcx
  unsigned int v13; // edx
  ACL *v14; // r8
  USHORT v15; // dx
  __int64 result; // rax

  v7 = a3;
  if ( (unsigned __int64)Src <= 0x7FFFFFFF0000LL || (*Src & 0xF) != 1 || Src[1] > 0xFu )
    return 3221225592LL;
  AclRevision = Acl->AclRevision;
  if ( AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = AclRevision;
  if ( AclRevision <= (unsigned __int8)a2 )
    v10 = a2;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v11 = a3 & 0xFFFFFF20;
    }
    else if ( !a6 )
    {
      v11 = a3 & 0xFFFFFFC0;
    }
    if ( v11 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) )
    return 3221225591LL;
  v12 = Acl + 1;
  v13 = 0;
  if ( Acl->AceCount )
  {
    while ( v12 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v13;
      v12 = (PACL)((char *)v12 + v12->AclSize);
      if ( v13 >= Acl->AceCount )
        goto LABEL_13;
    }
    return 3221225591LL;
  }
LABEL_13:
  v14 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (Src[1] + 4);
  if ( !v12 || (PACL)((char *)v12 + v15) > v14 )
    return 3221225625LL;
  v12->AclSize = v15;
  v12->Sbz1 = v7;
  v12->AclRevision = a6;
  *(_DWORD *)&v12->AceCount = a4;
  memmove(&v12[1], Src, 4LL * Src[1] + 8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = v10;
  return result;
}
