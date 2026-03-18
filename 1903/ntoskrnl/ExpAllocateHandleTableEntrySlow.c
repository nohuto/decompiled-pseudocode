/*
 * XREFs of ExpAllocateHandleTableEntrySlow @ 0x1406BC1A8
 * Callers:
 *     ExpAllocateHandleTableEntry @ 0x1405E6B00 (ExpAllocateHandleTableEntry.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     ExDupHandleTable @ 0x1406BBBA0 (ExDupHandleTable.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x140692E20 (ExpFreeTablePagedPool.c)
 *     ExpAllocateMidLevelTable @ 0x1406BBAF0 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1406BBB64 (ExpAllocateTablePagedPool.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x1406BC300 (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x1406BC430 (ExpAllocateLowLevelTable.c)
 */

char __fastcall ExpAllocateHandleTableEntrySlow(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rsi
  __int64 LowLevelTable; // rax
  __int64 v8; // r9
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rsi
  unsigned __int64 TablePagedPool; // rsi
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *((_QWORD *)a1 + 1) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*((_QWORD *)a1 + 1) & 3) == 0 )
  {
    v10 = ExpAllocateMidLevelTable((__int64)a1, &v17, *a1);
    if ( !v10 )
      return 0;
    v10[1] = *v10;
    *v10 = v4;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, (unsigned __int64)v10 | 1);
    goto LABEL_9;
  }
  if ( (a1[2] & 3) != 1 )
  {
    v11 = (unsigned int)v3 >> 19;
    if ( (unsigned int)v11 >= 0x80 )
      return 0;
    v12 = *(_QWORD *)(v4 + 8 * v11);
    v13 = (unsigned int)v11;
    if ( v12 )
    {
      LowLevelTable = ExpAllocateLowLevelTable(a1, *a1);
      v17 = LowLevelTable;
      if ( LowLevelTable )
      {
        *(_QWORD *)(v12 + 8 * ((v3 >> 10) & 0x1FF)) = LowLevelTable;
        goto LABEL_6;
      }
      return 0;
    }
    v16 = ExpAllocateMidLevelTable((__int64)a1, &v17, *a1);
    if ( !v16 )
      return 0;
    *(_QWORD *)(v4 + 8 * v13) = v16;
LABEL_9:
    LowLevelTable = v17;
    goto LABEL_6;
  }
  v6 = (unsigned int)v3 >> 10;
  if ( (unsigned int)v6 >= 0x200 )
  {
    TablePagedPool = (unsigned __int64)ExpAllocateTablePagedPool(*((_QWORD *)a1 + 2), 0x400uLL);
    if ( !TablePagedPool )
      return 0;
    v15 = ExpAllocateMidLevelTable((__int64)a1, &v17, v3);
    if ( !v15 )
    {
      ExpFreeTablePagedPool(*((struct _KPROCESS **)a1 + 2), (void *)TablePagedPool, 1024LL);
      return 0;
    }
    *(_QWORD *)TablePagedPool = v4;
    *(_QWORD *)(TablePagedPool + 8) = v15;
    _InterlockedExchange64((volatile __int64 *)a1 + 1, TablePagedPool | 2);
    goto LABEL_9;
  }
  LowLevelTable = ExpAllocateLowLevelTable(a1, (unsigned int)v3);
  v17 = LowLevelTable;
  if ( LowLevelTable )
  {
    *(_QWORD *)(v4 + 8 * v6) = LowLevelTable;
LABEL_6:
    LOBYTE(v8) = a2 != 0;
    ExpInsertLowLevelTableIntoFreeList(a1, LowLevelTable, a2, v8);
    return 1;
  }
  return 0;
}
