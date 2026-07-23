/*
 * XREFs of RtlNewSecurityObject @ 0x18008AB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
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
           GenericMapping,
           0LL);
}
