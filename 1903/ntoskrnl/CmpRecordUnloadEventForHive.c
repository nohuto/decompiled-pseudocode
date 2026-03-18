/*
 * XREFs of CmpRecordUnloadEventForHive @ 0x14069B878
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1406622B0 (CmpLinkHiveToMaster.c)
 *     CmpFreezeHive @ 0x14069A5DC (CmpFreezeHive.c)
 *     CmpResolveHiveLoadConflict @ 0x14082AB24 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRecordUnloadEventForHive(__int64 a1, void *a2)
{
  PVOID PoolWithTag; // rdi
  __int64 v5; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(*(_DWORD *)(a1 + 2912) + 1), 0x76456D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v5 = *(unsigned int *)(a1 + 2912);
  if ( (_DWORD)v5 )
  {
    memmove(PoolWithTag, *(const void **)(a1 + 2920), 8 * v5);
    ExFreePoolWithTag(*(PVOID *)(a1 + 2920), 0);
    v5 = *(unsigned int *)(a1 + 2912);
  }
  *(_QWORD *)(a1 + 2920) = PoolWithTag;
  *((_QWORD *)PoolWithTag + v5) = a2;
  ++*(_DWORD *)(a1 + 2912);
  ObfReferenceObject(a2);
  return 0LL;
}
