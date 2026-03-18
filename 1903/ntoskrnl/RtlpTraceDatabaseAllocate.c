/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x14031496C
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1403145B0 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140314994 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall RtlpTraceDatabaseAllocate(SIZE_T NumberOfBytes, char a2, ULONG a3)
{
  bool v3; // zf
  POOL_TYPE v5; // ecx

  v3 = (a2 & 4) == 0;
  v5 = NonPagedPoolNx;
  if ( v3 )
    v5 = PagedPool;
  return ExAllocatePoolWithTag(v5, NumberOfBytes, a3);
}
