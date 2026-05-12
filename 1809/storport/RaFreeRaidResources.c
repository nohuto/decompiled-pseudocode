/*
 * XREFs of RaFreeRaidResources @ 0x1C004BFF8
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C001E9EC (RaidAdapterCompleteInitialization.c)
 *     RaInitializeRaidResources @ 0x1C001EC34 (RaInitializeRaidResources.c)
 *     RaidAdapterReleaseResources @ 0x1C0073DA0 (RaidAdapterReleaseResources.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 */

void __fastcall RaFreeRaidResources(PSLIST_HEADER ListHead, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v6; // rsi
  PSLIST_ENTRY v7; // rax
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rsi
  struct _IO_WORKITEM *v10; // rcx

  v3 = *(_QWORD *)(a2 + 64);
  if ( *(_DWORD *)v3 == 1 )
    v3 = *(_QWORD *)(v3 + 24);
  v6 = 0LL;
  if ( LODWORD(ListHead[4].Alignment) )
  {
    do
    {
      while ( 1 )
      {
        v8 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(ListHead->Alignment + 8 * v6));
        if ( !v8 )
          break;
        if ( a3 )
          StorFreeContiguousIoResources(v3, (__int64)v8);
        else
          ExFreePoolWithTag(v8, 0x53526152u);
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < LODWORD(ListHead[4].Alignment) );
  }
  else if ( *((_DWORD *)&ListHead[4].HeaderX64 + 2) )
  {
    do
    {
      v7 = ExpInterlockedPopEntrySList(ListHead);
      if ( !v7 )
        break;
      if ( a3 )
        StorFreeContiguousIoResources(v3, (__int64)v7);
      else
        ExFreePoolWithTag(v7, 0x53526152u);
      LODWORD(v6) = v6 + 1;
    }
    while ( (unsigned int)v6 < *((_DWORD *)&ListHead[4].HeaderX64 + 2) );
  }
  *((_DWORD *)&ListHead[4].HeaderX64 + 2) = 0;
  if ( LODWORD(ListHead[4].Alignment) )
  {
    v9 = 0LL;
    do
    {
      ExFreePoolWithTag(*(PVOID *)(ListHead->Alignment + 8 * v9), 0x53526152u);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < LODWORD(ListHead[4].Alignment) );
    ExFreePoolWithTag((PVOID)ListHead->Alignment, 0x53526152u);
    LODWORD(ListHead[4].Alignment) = 0;
  }
  v10 = *(struct _IO_WORKITEM **)(v3 + 5864);
  if ( v10 )
  {
    IoFreeWorkItem(v10);
    *(_QWORD *)(v3 + 5864) = 0LL;
  }
}
