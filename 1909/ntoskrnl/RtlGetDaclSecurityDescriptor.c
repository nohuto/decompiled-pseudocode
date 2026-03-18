/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x1400C9B30
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B26B8 (LocalConvertSDToStringSD_Rev1.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C6208 (ObpInsertOrLocateNamedObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14065888C (ExpWnfSpecializeSecurityDescriptor.c)
 *     SepHasCriticalAcesRemoved @ 0x1406DB948 (SepHasCriticalAcesRemoved.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FFEE4 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1407022B8 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     MiInitializeMemoryEvents @ 0x14074F91C (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x14074FEC8 (ObCleanupSecurityDescriptor.c)
 *     ObpCreateDosDevicesDirectory @ 0x140750054 (ObpCreateDosDevicesDirectory.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D7AC (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x1408D1980 (RtlReplaceSidInSd.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1408D3FF0 (RtlpSysVolCheckOwnerAndSecurity.c)
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
