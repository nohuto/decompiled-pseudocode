/*
 * XREFs of RtlpAddKnownAce @ 0x1405DC9F0
 * Callers:
 *     SepAppendAceToTokenObjectAcl @ 0x1405C6DC0 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1405DC770 (SepCreateImpersonationTokenDacl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406158DC (PspAllocateAndQueryNotificationChannel.c)
 *     RtlAddAccessAllowedAce @ 0x140680120 (RtlAddAccessAllowedAce.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140680270 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140681580 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406819F8 (PiUEventInitClientRegistrationContext.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1406D4650 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1406ED6F4 (PopCreateNotificationName.c)
 *     LocalGetAclForString @ 0x1406F85C8 (LocalGetAclForString.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FE104 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140719AF0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140719FE0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x14073AF20 (RtlAddAccessAllowedAceEx.c)
 *     BiCreateKeySecurityDescriptor @ 0x14073DD04 (BiCreateKeySecurityDescriptor.c)
 *     MiSessionObjectCreate @ 0x14073FCC0 (MiSessionObjectCreate.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14074A954 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14074F478 (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14074F860 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14074FA58 (MiCreateMemoryEventSD.c)
 *     RtlAddAccessDeniedAceEx @ 0x1407549E0 (RtlAddAccessDeniedAceEx.c)
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
 *     RtlAddAccessAllowedObjectAce @ 0x1408D08C0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1408D0920 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessAce @ 0x1408D0B8C (RtlAddAuditAccessAce.c)
 *     RtlAddAuditAccessAceEx @ 0x1408D0BC0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAuditAccessObjectAce @ 0x1408D0C10 (RtlAddAuditAccessObjectAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1408D4A0C (RtlpSysVolCreateSecurityDescriptor.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408EB02C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140915890 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x140942174 (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1409449DC (ObpGetSilosRootDirectory.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlValidAcl @ 0x1405DD490 (RtlValidAcl.c)
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
