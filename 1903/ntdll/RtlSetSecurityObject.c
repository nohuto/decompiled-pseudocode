/*
 * XREFs of RtlSetSecurityObject @ 0x18007B510
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 */

NTSTATUS __cdecl RtlSetSecurityObject(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  int v6; // [rsp+28h] [rbp-20h]

  return sub_18007B540(
           SecurityInformation,
           SecurityInformation,
           (int)ModificationDescriptor,
           (int)ObjectsSecurityDescriptor,
           0,
           v6,
           (__int64)GenericMapping,
           TokenHandle);
}
