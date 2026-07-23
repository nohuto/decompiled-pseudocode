/*
 * XREFs of RtlNewSecurityObject @ 0x180089AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 */

NTSTATUS __cdecl RtlNewSecurityObject(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  return sub_1800100C4(
           (__int64)ParentDescriptor,
           CreatorDescriptor,
           NewDescriptor,
           0LL,
           0,
           IsDirectoryObject,
           0,
           Token,
           GenericMapping);
}
