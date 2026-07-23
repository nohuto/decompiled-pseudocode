/*
 * XREFs of RtlSetSecurityObject @ 0x18007C5F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18007C620 (RtlpSetSecurityObject.c)
 */

NTSTATUS __cdecl RtlSetSecurityObject(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  int v6; // [rsp+28h] [rbp-20h]

  return RtlpSetSecurityObject(
           SecurityInformation,
           SecurityInformation,
           (int)ModificationDescriptor,
           (int)ObjectsSecurityDescriptor,
           0,
           v6,
           (__int64)GenericMapping,
           TokenHandle);
}
