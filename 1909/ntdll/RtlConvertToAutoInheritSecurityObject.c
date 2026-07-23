/*
 * XREFs of RtlConvertToAutoInheritSecurityObject @ 0x1800D6D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlConvertToAutoInheritSecurityObject(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CurrentSecurityDescriptor,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping)
{
  return RtlpConvertToAutoInheritSecurityObject(
           ParentDescriptor,
           CurrentSecurityDescriptor,
           NewSecurityDescriptor,
           ObjectType,
           IsDirectoryObject,
           GenericMapping);
}
