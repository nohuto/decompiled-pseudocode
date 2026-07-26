/*
 * XREFs of PplpCreateOneLookasideList @ 0x1C0023180
 * Callers:
 *     PplCreateLookasideList @ 0x1C0022FAC (PplCreateLookasideList.c)
 *     PplHotAddProcStartNotify @ 0x1C008284C (PplHotAddProcStartNotify.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

struct _LOOKASIDE_LIST_EX *__fastcall PplpCreateOneLookasideList(
        PALLOCATE_FUNCTION_EX Allocate,
        PFREE_FUNCTION_EX Free,
        POOL_TYPE PoolType,
        ULONG Flags,
        SIZE_T Size,
        ULONG a6,
        USHORT Depth,
        ULONG Tag,
        unsigned __int64 a9,
        char a10)
{
  struct _LOOKASIDE_LIST_EX *PoolWithTagPriority; // rax
  struct _LOOKASIDE_LIST_EX *v15; // rdi

  PoolWithTagPriority = (struct _LOOKASIDE_LIST_EX *)ExAllocatePoolWithTagPriority(
                                                       NonPagedPoolNxCacheAligned,
                                                       0x80uLL,
                                                       Tag,
                                                       LowPoolPriority);
  v15 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    memset(PoolWithTagPriority, 0, 0x80uLL);
    v15[1].L.ListHead.Alignment = a9;
    LOBYTE(v15[1].L.Depth) = a10;
    KeInitializeSpinLock(&v15[1].L.ListHead.Region);
    if ( !a10 || ExInitializeLookasideListEx(v15, Allocate, Free, PoolType, Flags, Size, a6, Depth) >= 0 )
      return v15;
    ExFreePoolWithTag(v15, Tag);
  }
  return 0LL;
}
