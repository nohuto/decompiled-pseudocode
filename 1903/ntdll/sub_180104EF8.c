/*
 * XREFs of sub_180104EF8 @ 0x180104EF8
 * Callers:
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 */

char __fastcall sub_180104EF8(__int64 a1)
{
  __int64 v3; // rcx
  ULONG_PTR v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (PVOID)a1 == NtCurrentPeb()->ProcessHeap )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("May not destroy the process heap at %p\n", (const void *)a1);
    return 0;
  }
  if ( !sub_180019C74((_DWORD *)a1, "RtlDestroyHeap") || !(unsigned __int8)sub_1801061B8(a1) )
    return 0;
  *(_DWORD *)(a1 + 152) = 0;
  if ( *(_QWORD *)(a1 + 216) )
  {
    v4 = 0LL;
    sub_180048120(v3, (PVOID *)(a1 + 216), &v4, 0x8000u);
  }
  return 1;
}
