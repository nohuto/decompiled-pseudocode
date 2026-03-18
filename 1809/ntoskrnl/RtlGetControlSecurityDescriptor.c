/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x1405B95F0
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x1401B7A28 (AdtpIsSDValidSelfRelative.c)
 *     SepHasCriticalAcesRemoved @ 0x1405B9420 (SepHasCriticalAcesRemoved.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C85A8 (ObpInsertOrLocateNamedObject.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140705B38 (PiDevCfgGetKeySecurityDescriptor.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59E0 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetControlSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR_CONTROL Control,
        PULONG Revision)
{
  *Revision = *(unsigned __int8 *)SecurityDescriptor;
  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  *Control = *((_WORD *)SecurityDescriptor + 1);
  return 0;
}
