/*
 * XREFs of ExpAllocateTablePagedPool @ 0x140696564
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406964F0 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140696B94 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1408CE17C (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140696DBC (ExpAllocateTablePagedPoolNoZero.c)
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
