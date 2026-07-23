/*
 * XREFs of RtlSetSecurityObjectEx @ 0x180089430
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
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

  return sub_18007B540(
           *(__int64 *)&SecurityInformation,
           SecurityInformation,
           (__int64)ModificationDescriptor,
           ObjectsSecurityDescriptor,
           AutoInheritFlags,
           v7,
           GenericMapping,
           TokenHandle);
}
