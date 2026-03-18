/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1406B7384
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406B7310 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406B79C8 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x14090B180 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406B7C84 (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, size_t a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = (void *)ExpAllocateTablePagedPoolNoZero();
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset(TablePagedPoolNoZero, 0, a2);
  return v4;
}
