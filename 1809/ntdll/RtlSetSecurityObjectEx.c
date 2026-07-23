/*
 * XREFs of RtlSetSecurityObjectEx @ 0x18008C400
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18007C620 (RtlpSetSecurityObject.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlSetSecurityObjectEx(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  int v7; // [rsp+28h] [rbp-20h]

  return RtlpSetSecurityObject(
           *(__int64 *)&SecurityInformation,
           SecurityInformation,
           (__int64)ModificationDescriptor,
           ObjectsSecurityDescriptor,
           AutoInheritFlags,
           v7,
           (__int64)GenericMapping,
           TokenHandle);
}
