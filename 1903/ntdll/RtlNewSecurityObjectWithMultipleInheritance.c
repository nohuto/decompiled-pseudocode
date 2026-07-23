/*
 * XREFs of RtlNewSecurityObjectWithMultipleInheritance @ 0x180088310
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 */

NTSTATUS __cdecl RtlNewSecurityObjectWithMultipleInheritance(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID **ObjectType,
        ULONG GuidCount,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  return sub_1800100C4(
           (__int64)ParentDescriptor,
           CreatorDescriptor,
           NewDescriptor,
           (__int64)ObjectType,
           GuidCount,
           IsDirectoryObject,
           AutoInheritFlags,
           Token,
           GenericMapping);
}
