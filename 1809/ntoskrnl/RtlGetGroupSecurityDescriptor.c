/*
 * XREFs of RtlGetGroupSecurityDescriptor @ 0x1406CD310
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406F1828 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140706DB8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F5D50 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140895140 (RtlReplaceSidInSd.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetGroupSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Group,
        PBOOLEAN GroupDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 2);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Group = v4;
  *GroupDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 2) != 0;
  return 0;
}
