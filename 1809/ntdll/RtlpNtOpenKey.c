/*
 * XREFs of RtlpNtOpenKey @ 0x180081A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpNtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  if ( ObjectAttributes )
    ObjectAttributes->Attributes &= 0xFFFFFFCF;
  return NtOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
