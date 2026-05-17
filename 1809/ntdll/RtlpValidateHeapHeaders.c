/*
 * XREFs of RtlpValidateHeapHeaders @ 0x180109404
 * Callers:
 *     RtlDebugAllocateHeap @ 0x1801071A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180107568 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateHeap @ 0x1801076BC (RtlDebugCreateHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1801079B0 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180107BB4 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 * Callees:
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemory @ 0x1800A4A60 (RtlCompareMemory.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

char __fastcall RtlpValidateHeapHeaders(void **Src, char a2)
{
  void **v3; // rsi
  void *v4; // rcx
  size_t v5; // r8
  SIZE_T v6; // rdi
  size_t v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rax
  size_t v12; // [rsp+50h] [rbp+18h]

  if ( !RtlpValidateHeapHdrsEnable )
    return 1;
  v3 = Src + 27;
  v4 = Src[27];
  if ( v4 )
    goto LABEL_5;
  if ( (int)ZwAllocateVirtualMemory() < 0 )
    return 1;
  v4 = *v3;
  a2 = 1;
LABEL_5:
  v5 = *((unsigned __int16 *)Src + 105);
  v12 = v5;
  if ( a2 )
  {
    memmove(v4, Src, v5);
    v7 = v12;
    v6 = v12;
  }
  else
  {
    v6 = RtlCompareMemory(Src, v4, v5);
    v7 = v12;
  }
  if ( v7 == v6 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap %p - headers modified (%p is %lx instead of %lx)\n",
    Src,
    (char *)Src + v6,
    *(_DWORD *)((char *)Src + v6),
    *(_DWORD *)((char *)*v3 + v6));
  v8 = 0;
  if ( "Entry" )
  {
    v9 = 0LL;
    v10 = 0LL;
    while ( v6 < *(unsigned int *)((char *)&RtlpHeapHeaderFieldOffsets + v10)
         || v6 >= *((unsigned int *)&RtlpHeapHeaderFieldOffsets + 4 * v8 + 4) )
    {
      v10 = 16LL * ++v8;
      v9 = v8;
      if ( !*(_QWORD *)((char *)&RtlpHeapHeaderFieldOffsets + v10 + 8) )
        return 0;
    }
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "    This is located in the %s field of the heap header.\n",
      *((const char **)&RtlpHeapHeaderFieldOffsets + 2 * v9 + 1));
  }
  return 0;
}
