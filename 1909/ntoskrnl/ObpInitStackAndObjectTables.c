/*
 * XREFs of ObpInitStackAndObjectTables @ 0x14089F44C
 * Callers:
 *     ObpStartRuntimeStackTrace @ 0x14089FA98 (ObpStartRuntimeStackTrace.c)
 *     ObpInitStackTrace @ 0x140A1F760 (ObpInitStackTrace.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1401CC5F0 (RtlpInterlockedFlushSList.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 ObpInitStackAndObjectTables()
{
  char *PoolWithTag; // rax
  char *v1; // rbx
  PVOID v2; // rax
  _WORD *v3; // rbx
  PVOID v4; // rax
  int v5; // ebx
  _SLIST_ENTRY *v6; // rax
  PSLIST_ENTRY v8; // rbx
  PSLIST_ENTRY v9; // rcx
  void *v10; // rcx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x8088uLL, 0x7452624Fu);
  ObpStackTable = PoolWithTag;
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    memset(v1 + 136, 255, 0x7FFAuLL);
    v2 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x7452624Fu);
    v3 = ObpStackTable;
    *((_QWORD *)ObpStackTable + 1) = v2;
    if ( v2 )
    {
      memset(v2, 0, 0x20000uLL);
      v3[1] = 1024;
      v4 = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC88uLL, 0x7452624Fu);
      ObpObjectTable = v4;
      if ( !v4 )
      {
LABEL_14:
        v10 = (void *)*((_QWORD *)ObpStackTable + 1);
        if ( v10 )
          ExFreePoolWithTag(v10, 0x7452624Fu);
        ExFreePoolWithTag(ObpStackTable, 0x7452624Fu);
        return 3221225495LL;
      }
      memset(v4, 0, 0xC88uLL);
      if ( ((unsigned __int8)&ObpWorkItemFreeList & 0xF) != 0 )
        RtlRaiseStatus(-2147483646);
      v5 = 0;
      ObpWorkItemFreeList = 0uLL;
      while ( 1 )
      {
        v6 = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x7452624Fu);
        if ( !v6 )
          break;
        RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, v6);
        if ( (unsigned int)++v5 >= 0x1F4 )
          return 0LL;
      }
      v8 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      while ( v8 )
      {
        v9 = v8;
        v8 = v8->Next;
        ExFreePoolWithTag(v9, 0x7452624Fu);
      }
    }
    if ( ObpObjectTable )
      ExFreePoolWithTag(ObpObjectTable, 0x7452624Fu);
    goto LABEL_14;
  }
  return 3221225495LL;
}
