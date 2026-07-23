/*
 * XREFs of SeAssignSecurityEx @ 0x1406AED80
 * Callers:
 *     <none>
 * Callees:
 *     SeAssignSecurityEx2 @ 0x1400A8E70 (SeAssignSecurityEx2.c)
 */

NTSTATUS __stdcall SeAssignSecurityEx(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR ExplicitDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PGENERIC_MAPPING GenericMapping,
        POOL_TYPE PoolType)
{
  return SeAssignSecurityEx2(
           (int)ParentDescriptor,
           (int)ExplicitDescriptor,
           (int)NewDescriptor,
           (__int64)ObjectType,
           IsDirectoryObject,
           AutoInheritFlags,
           0LL,
           (__int64)SubjectContext,
           (__int64)GenericMapping);
}
