/*
 * XREFs of ?ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C001A940
 * Callers:
 *     ?ndisPplAllocate@@YAPEAXPEAXKPEAK@Z @ 0x1C001A794 (-ndisPplAllocate@@YAPEAXPEAXKPEAK@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisAllocateFromNPagedPool(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  _QWORD *PoolWithTagPriority; // rax

  if ( NumberOfBytes + 32 < NumberOfBytes )
    return 0LL;
  PoolWithTagPriority = ExAllocatePoolWithTagPriority(NonPagedPoolNx, NumberOfBytes + 32, Tag, NormalPoolPriority);
  if ( !PoolWithTagPriority )
    return 0LL;
  *PoolWithTagPriority = 0LL;
  return PoolWithTagPriority + 4;
}
