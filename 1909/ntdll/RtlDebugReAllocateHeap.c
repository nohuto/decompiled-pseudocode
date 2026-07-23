/*
 * XREFs of RtlDebugReAllocateHeap @ 0x1801056D8
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019C74 (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLogStackBackTraceEx @ 0x180033C9C (RtlLogStackBackTraceEx.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18006EB2C (RtlpGetExtraStuffPointer.c)
 *     RtlpValidateHeapEntry @ 0x1800706F4 (RtlpValidateHeapEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F0844 (RtlpGetTagName.c)
 *     RtlpAnalyzeHeapFailure @ 0x180101104 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1801062C8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1801062F0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1801068D0 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

char *__fastcall RtlDebugReAllocateHeap(_DWORD *Src, int a2, char *a3, SIZE_T a4)
{
  int v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  struct _PEB *v13; // rax
  __int16 v14; // dx
  unsigned __int16 v15; // cx
  wchar_t *TagName; // rax
  char *Heap; // rax
  unsigned __int64 v18; // rsi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v20; // r14
  unsigned __int16 v21; // ax
  struct _PEB *v22; // rax
  wchar_t *v23; // rax
  char v24; // [rsp+30h] [rbp-48h]
  unsigned __int16 v25; // [rsp+34h] [rbp-44h]
  char *v26; // [rsp+38h] [rbp-40h]
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]
  int Flags; // [rsp+88h] [rbp+10h]

  v24 = 0;
  v26 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return (char *)_guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v9 = Src[29] | 0x10000100 | a2;
  Flags = v9;
  v10 = a4;
  if ( !a4 )
    v10 = 1LL;
  v11 = (*((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v10)) + 16;
  if ( v11 < a4 || v11 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_68:
    v26 = 0LL;
    goto LABEL_69;
  }
  v25 = 0;
  if ( (v9 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v24 = 1;
    Flags = v9 | 1;
  }
  RtlpValidateHeap((_DWORD)Src);
  v12 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
  v27 = v12;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v12, "RtlReAllocateHeap") )
  {
    v13 = NtCurrentPeb();
    if ( a3 == (char *)qword_1801638F0 )
    {
      if ( v13->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_1801638F0, a4);
    }
    else
    {
      if ( (v13->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v14 = dword_1801638F8;
      if ( !dword_1801638F8 )
        goto LABEL_36;
      if ( Src[31] )
      {
        *(_DWORD *)(v27 + 8) ^= Src[34];
        if ( *(_BYTE *)(v27 + 11) != (*(_BYTE *)(v27 + 8) ^ (unsigned __int8)(*(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10))) )
        {
          RtlpAnalyzeHeapFailure((unsigned __int64)Src, v27);
          v14 = dword_1801638F8;
        }
      }
      if ( (*(_BYTE *)(v27 + 10) & 2) != 0 )
        v15 = *(_WORD *)(RtlpGetExtraStuffPointer(v27) + 2);
      else
        v15 = *(unsigned __int8 *)(v27 + 11);
      v25 = v15;
      if ( Src[31] )
      {
        *(_BYTE *)(v27 + 11) = *(_BYTE *)(v27 + 8) ^ *(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10);
        *(_DWORD *)(v27 + 8) ^= Src[34];
      }
      if ( !v15 || v15 != v14 || *((_WORD *)Src + 104) != HIWORD(dword_1801638F8) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v25);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_36:
    Heap = (char *)RtlReAllocateHeap(Src, Flags, a3, a4);
    v26 = Heap;
    if ( Heap )
    {
      v18 = (unsigned __int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v18 -= 16LL * *(unsigned __int8 *)(v18 + 14);
      if ( Src[31] )
      {
        *(_DWORD *)(v18 + 8) ^= Src[34];
        if ( *(_BYTE *)(v18 + 11) != (*(_BYTE *)(v18 + 8) ^ (unsigned __int8)(*(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10))) )
          RtlpAnalyzeHeapFailure((unsigned __int64)Src, v18);
      }
      if ( (*(_BYTE *)(v18 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v18);
        v20 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v21 = v20[1];
      }
      else
      {
        v21 = *(unsigned __int8 *)(v18 + 11);
      }
      v25 = v21;
      if ( Src[31] )
      {
        *(_BYTE *)(v18 + 11) = *(_BYTE *)(v18 + 8) ^ *(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10);
        *(_DWORD *)(v18 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap((_DWORD)Src);
  }
  if ( v26 )
  {
    v22 = NtCurrentPeb();
    if ( v26 == (char *)qword_1801638F0 )
    {
      if ( v22->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_1801638F0, a4);
LABEL_57:
      RtlpBreakPointHeap();
      goto LABEL_69;
    }
    if ( (v22->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v25) == dword_1801638F8 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v23 = RtlpGetTagName((__int64)Src, v25);
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v26, a4, v23);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v24 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return v26;
}
