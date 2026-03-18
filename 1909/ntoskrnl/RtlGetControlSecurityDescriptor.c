/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x1406DBB10
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B26B8 (LocalConvertSDToStringSD_Rev1.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C6208 (ObpInsertOrLocateNamedObject.c)
 *     SepHasCriticalAcesRemoved @ 0x1406DB948 (SepHasCriticalAcesRemoved.c)
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
