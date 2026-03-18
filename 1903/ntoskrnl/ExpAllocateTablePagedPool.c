/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1406BBB64
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406BBAF0 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406BC1A8 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x14090B720 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406BC464 (ExpAllocateTablePagedPoolNoZero.c)
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
