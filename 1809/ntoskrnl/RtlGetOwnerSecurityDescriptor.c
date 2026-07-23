/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x1406AE460
 * Callers:
 *     CmpCheckExeOwnerForPca @ 0x14058193C (CmpCheckExeOwnerForPca.c)
 *     CmpCheckKeyOwnerForPca @ 0x140581A4C (CmpCheckKeyOwnerForPca.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D78D8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406F1828 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F5D50 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140895140 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 1);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Owner = v4;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
