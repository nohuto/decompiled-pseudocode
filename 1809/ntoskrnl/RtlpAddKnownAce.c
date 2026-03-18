/*
 * XREFs of RtlpAddKnownAce @ 0x1406315A0
 * Callers:
 *     SepAppendAceToTokenObjectAcl @ 0x1405C9190 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x140630A44 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x14065148C (PspAllocateAndQueryProcessNotificationChannel.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140652904 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140654070 (ObpVerifyAccessToBoundaryEntry.c)
 *     RtlAddAccessAllowedAce @ 0x1406555A0 (RtlAddAccessAllowedAce.c)
 *     PiUEventInitClientRegistrationContext @ 0x140655918 (PiUEventInitClientRegistrationContext.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     LocalGetAclForString @ 0x1406AFCAC (LocalGetAclForString.c)
 *     PopCreateNotificationName @ 0x1406CE5C0 (PopCreateNotificationName.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D64FC (RtlpSysVolCreateSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD7A8 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE330 (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x14070ED40 (RtlAddAccessAllowedAceEx.c)
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
 *     RtlAddAccessDeniedAceEx @ 0x140739D40 (RtlAddAccessDeniedAceEx.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747CA8 (PopCreateHiberFileSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x140752E90 (PfpCreateEvent.c)
 *     NtSetUuidSeed @ 0x1407586C0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB9C (_PnpGetEnumSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F5238 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140829F3C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082A170 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082A3EC (PiAuGetStateDirectorySecurityObject.c)
 *     RtlAddAccessAllowedObjectAce @ 0x140892660 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1408926C0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x140892934 (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x140892970 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1408929C0 (RtlAddAuditAccessObjectAce.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE08C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8630 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B60 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1409063AC (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     RtlValidAcl @ 0x140631700 (RtlValidAcl.c)
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
