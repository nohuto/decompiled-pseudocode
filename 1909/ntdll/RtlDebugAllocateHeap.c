/*
 * XREFs of RtlDebugAllocateHeap @ 0x1801046F0
 * Callers:
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019C74 (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x180033C9C (RtlLogStackBackTraceEx.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18006EB2C (RtlpGetExtraStuffPointer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F0844 (RtlpGetTagName.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1801062C8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1801062F0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1801068D0 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

PVOID __fastcall RtlDebugAllocateHeap(_DWORD *Src, int a2, SIZE_T a3)
{
  ULONG v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  SIZE_T v10; // rax
  PVOID Heap; // rbx
  unsigned __int64 v12; // rbx
  _WORD *ExtraStuffPointer; // rax
  _WORD *v14; // r14
  unsigned __int16 v15; // ax
  struct _PEB *v16; // rax
  wchar_t *TagName; // rax
  char v18; // [rsp+20h] [rbp-38h]
  PVOID v19; // [rsp+28h] [rbp-30h]
  unsigned __int16 v20; // [rsp+78h] [rbp+20h]

  v18 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (PVOID)_guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_46;
  v7 = Src[29] | 0x10000100 | a2;
  v8 = a3;
  if ( !a3 )
    v8 = 1LL;
  v9 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v8);
  if ( v9 < 0x20 )
    v9 = 32LL;
  v10 = v9 + 16;
  if ( v10 < a3 || v10 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_46:
    v19 = 0LL;
    goto LABEL_47;
  }
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v18 = 1;
    v7 |= 1u;
  }
  RtlpValidateHeap((_DWORD)Src);
  Heap = RtlAllocateHeap(Src, v7, a3);
  v19 = Heap;
  RtlpValidateHeapHeaders(Src);
  if ( !Heap )
    goto LABEL_47;
  v12 = (unsigned __int64)Heap - 16;
  _m_prefetchw((const void *)v12);
  if ( *(_BYTE *)(v12 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v12 + 8) ^= Src[34];
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
      RtlpAnalyzeHeapFailure((unsigned __int64)Src, v12);
  }
  if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v12);
    v14 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    else
      *ExtraStuffPointer = 0;
    v15 = v14[1];
  }
  else
  {
    v15 = *(unsigned __int8 *)(v12 + 11);
  }
  v20 = v15;
  if ( Src[31] )
  {
    *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
    *(_DWORD *)(v12 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap((_DWORD)Src);
  v16 = NtCurrentPeb();
  if ( v19 == (PVOID)RtlpHeapStopOn )
  {
    if ( v16->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
LABEL_33:
    RtlpBreakPointHeap();
    goto LABEL_47;
  }
  if ( (v16->NtGlobalFlag & 0x800) != 0 && v20 && v20 == word_1801638E8 && *((_WORD *)Src + 104) == word_1801638EA )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v20);
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v19, a3, TagName);
    goto LABEL_33;
  }
LABEL_47:
  if ( v18 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return v19;
}
