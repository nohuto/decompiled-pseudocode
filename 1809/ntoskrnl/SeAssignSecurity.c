/*
 * XREFs of SeAssignSecurity @ 0x1405AE0F0
 * Callers:
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 * Callees:
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 */

NTSTATUS __stdcall SeAssignSecurity(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR ExplicitDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PGENERIC_MAPPING GenericMapping,
        POOL_TYPE PoolType)
{
  int v7; // r10d

  v7 = 0;
  if ( ParentDescriptor )
  {
    if ( (!ExplicitDescriptor || (*((_BYTE *)ExplicitDescriptor + 2) & 4) == 0)
      && (*((_WORD *)ParentDescriptor + 1) & 0x400) != 0 )
    {
      v7 = 1;
    }
    if ( (!ExplicitDescriptor || (*((_BYTE *)ExplicitDescriptor + 2) & 0x10) == 0)
      && (*((_WORD *)ParentDescriptor + 1) & 0x800) != 0 )
    {
      v7 |= 2u;
    }
  }
  return RtlpNewSecurityObject(
           (int)ParentDescriptor,
           (int)ExplicitDescriptor,
           (int)NewDescriptor,
           0,
           0,
           IsDirectoryObject,
           v7,
           (__int64)SubjectContext,
           (__int64)GenericMapping,
           0LL);
}
