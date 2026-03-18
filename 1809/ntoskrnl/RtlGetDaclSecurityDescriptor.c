/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140092330
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326054 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepHasCriticalAcesRemoved @ 0x1405B9420 (SepHasCriticalAcesRemoved.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C85A8 (ObpInsertOrLocateNamedObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14060DC2C (ExpWnfSpecializeSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D6658 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406F05A8 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     MiInitializeMemoryEvents @ 0x14072B9BC (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x14072BF3C (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072C0C8 (ObpCreateDosDevicesDirectory.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F4B70 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140893F00 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59E0 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  __int16 v5; // cx
  ACL *v6; // rax
  __int16 v7; // cx
  __int64 v8; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1) & 4;
  *DaclPresent = v5 != 0;
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v7 & 4) != 0 )
    {
      if ( v7 >= 0 )
      {
        v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v8 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v8 )
          v6 = (ACL *)((char *)SecurityDescriptor + v8);
      }
    }
    *Dacl = v6;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  return 0;
}
