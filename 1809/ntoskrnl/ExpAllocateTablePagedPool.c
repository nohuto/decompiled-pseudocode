/*
 * XREFs of ExpAllocateTablePagedPool @ 0x140697704
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x140697690 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140697D34 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1408CF41C (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140697F5C (ExpAllocateTablePagedPoolNoZero.c)
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
