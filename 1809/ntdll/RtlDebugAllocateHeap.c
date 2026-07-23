/*
 * XREFs of RtlDebugAllocateHeap @ 0x1801071A0
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18005B1FC (RtlpGetExtraStuffPointer.c)
 *     RtlLogStackBackTraceEx @ 0x180061BC0 (RtlLogStackBackTraceEx.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F3690 (RtlpGetTagName.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

PVOID __fastcall RtlDebugAllocateHeap(_DWORD *Src, int a2, SIZE_T a3)
{
  ULONG v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  SIZE_T v10; // rax
  PVOID Heap; // rdi
  unsigned __int64 v12; // rdi
  int v13; // edx
  _WORD *ExtraStuffPointer; // rax
  _WORD *v15; // r14
  unsigned __int16 v16; // ax
  struct _PEB *v17; // rax
  wchar_t *TagName; // rax
  char v19; // [rsp+20h] [rbp-38h]
  PVOID v20; // [rsp+28h] [rbp-30h]
  unsigned __int16 v21; // [rsp+78h] [rbp+20h]

  v19 = 0;
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
    Heap = 0LL;
    goto LABEL_47;
  }
  if ( (v7 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v19 = 1;
    v7 |= 1u;
  }
  RtlpValidateHeap(Src);
  Heap = RtlAllocateHeap(Src, v7, a3);
  v20 = Heap;
  RtlpValidateHeapHeaders(Src);
  if ( !Heap )
    goto LABEL_47;
  v12 = (unsigned __int64)Heap - 16;
  _m_prefetchw((const void *)v12);
  if ( *(_BYTE *)(v12 + 15) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  if ( Src[31] )
  {
    v13 = *(_DWORD *)(v12 + 8) ^ Src[34];
    *(_DWORD *)(v12 + 8) = v13;
    if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
      RtlpAnalyzeHeapFailure((__int64)Src, v12);
  }
  if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v12);
    v15 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    else
      *ExtraStuffPointer = 0;
    v16 = v15[1];
  }
  else
  {
    v16 = *(unsigned __int8 *)(v12 + 11);
  }
  v21 = v16;
  if ( Src[31] )
  {
    *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
    *(_DWORD *)(v12 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap(Src);
  v17 = NtCurrentPeb();
  Heap = v20;
  if ( v20 == (PVOID)RtlpHeapStopOn )
  {
    if ( v17->Ldr )
    {
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      Heap = v20;
    }
    else
    {
      DbgPrint("HEAP: ");
    }
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
LABEL_33:
    RtlpBreakPointHeap();
    goto LABEL_47;
  }
  if ( (v17->NtGlobalFlag & 0x800) != 0 && v21 && v21 == word_180163848 && *((_WORD *)Src + 104) == word_18016384A )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName((__int64)Src, v21);
    Heap = v20;
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v20, a3, TagName);
    goto LABEL_33;
  }
LABEL_47:
  if ( v19 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return Heap;
}
