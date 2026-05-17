/*
 * XREFs of sub_180104AC0 @ 0x180104AC0
 * Callers:
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 * Callees:
 *     sub_180033C9C @ 0x180033C9C (sub_180033C9C.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     sub_180106190 @ 0x180106190 (sub_180106190.c)
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 */

void *__fastcall sub_180104AC0(int a1, char *a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  int VirtualMemory; // r15d
  __int64 Heap; // rax
  void *v15; // rdi
  char *v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+50h] [rbp-28h]

  if ( a3 <= 0x10 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid ReserveSize parameter - %Ix\n", a3);
LABEL_6:
    sub_180106190(v11, v10);
    return 0LL;
  }
  if ( a3 < a4 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid CommitSize parameter - %Ix\n", a4);
    goto LABEL_6;
  }
  if ( (a1 & 1) != 0 && a5 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not specify Lock parameter with HEAP_NO_SERIALIZE\n");
    goto LABEL_6;
  }
  if ( a2 )
  {
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory < 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) invalid,  Status = %lx\n", a2, VirtualMemory);
      goto LABEL_6;
    }
    if ( v16 != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) != to BaseAddress (%p)\n", a2, v16);
      goto LABEL_6;
    }
    if ( v17 == 0x10000 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Specified HeapBase (%p) is free or not writable\n", v16);
      goto LABEL_6;
    }
  }
  Heap = RtlCreateHeap(a1 | 0x10000060u, a2, a3, a4, a5, a6);
  v15 = (void *)Heap;
  if ( Heap )
  {
    if ( (*(_DWORD *)(Heap + 112) & 0x8000000) != 0 )
      *(_WORD *)(Heap + 304) = sub_180033C9C(1u);
    sub_180106798(v15);
  }
  return v15;
}
