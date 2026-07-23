/*
 * XREFs of RtlNewSecurityObject @ 0x18008A160
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 */

NTSTATUS __cdecl RtlNewSecurityObject(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  return RtlpNewSecurityObject(
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
