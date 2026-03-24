/*
 * XREFs of ExpAllocateTablePagedPool @ 0x140696544
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406964D0 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140696B74 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1408CE15C (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140696D9C (ExpAllocateTablePagedPoolNoZero.c)
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
