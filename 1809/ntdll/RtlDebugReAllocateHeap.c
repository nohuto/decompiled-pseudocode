/*
 * XREFs of RtlDebugReAllocateHeap @ 0x1801081A8
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x18000C320 (RtlReAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18005B1FC (RtlpGetExtraStuffPointer.c)
 *     RtlLogStackBackTraceEx @ 0x180061BC0 (RtlLogStackBackTraceEx.c)
 *     RtlpValidateHeapEntry @ 0x18006D464 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F3690 (RtlpGetTagName.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

char *__fastcall RtlDebugReAllocateHeap(_DWORD *Src, int a2, char *a3, SIZE_T a4)
{
  char *v8; // rsi
  int v10; // r14d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  struct _PEB *v14; // rax
  __int16 v15; // r8
  int v16; // edx
  unsigned __int16 v17; // cx
  wchar_t *TagName; // rax
  char *Heap; // rax
  unsigned __int64 v20; // r14
  int v21; // edx
  _WORD *ExtraStuffPointer; // rax
  _WORD *v23; // r15
  unsigned __int16 v24; // ax
  struct _PEB *v25; // rax
  wchar_t *v26; // rax
  char v27; // [rsp+30h] [rbp-48h]
  unsigned __int16 v28; // [rsp+34h] [rbp-44h]
  char *v29; // [rsp+38h] [rbp-40h]
  unsigned __int64 v30; // [rsp+40h] [rbp-38h]
  int Flags; // [rsp+88h] [rbp+10h]

  v27 = 0;
  v8 = 0LL;
  v29 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return (char *)_guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v10 = Src[29] | 0x10000100 | a2;
  Flags = v10;
  v11 = a4;
  if ( !a4 )
    v11 = 1LL;
  v12 = (*((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v11)) + 16;
  if ( v12 < a4 || v12 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *((_QWORD *)Src + 25));
LABEL_68:
    v8 = 0LL;
    goto LABEL_69;
  }
  v28 = 0;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
    v27 = 1;
    Flags = v10 | 1;
  }
  RtlpValidateHeap(Src);
  v13 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  v30 = v13;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == (char *)qword_180163850 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_180163850, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v15 = dword_180163858;
      if ( !dword_180163858 )
        goto LABEL_36;
      if ( Src[31] )
      {
        v16 = *(_DWORD *)(v30 + 8) ^ Src[34];
        *(_DWORD *)(v30 + 8) = v16;
        if ( HIBYTE(v16) != ((unsigned __int8)v16 ^ (unsigned __int8)(BYTE1(v16) ^ BYTE2(v16))) )
        {
          RtlpAnalyzeHeapFailure((__int64)Src, v30);
          v15 = dword_180163858;
        }
      }
      if ( (*(_BYTE *)(v30 + 10) & 2) != 0 )
        v17 = *(_WORD *)(RtlpGetExtraStuffPointer(v30) + 2);
      else
        v17 = *(unsigned __int8 *)(v30 + 11);
      v28 = v17;
      if ( Src[31] )
      {
        *(_BYTE *)(v30 + 11) = *(_BYTE *)(v30 + 8) ^ *(_BYTE *)(v30 + 9) ^ *(_BYTE *)(v30 + 10);
        *(_DWORD *)(v30 + 8) ^= Src[34];
      }
      if ( !v17 || v17 != v15 || *((_WORD *)Src + 104) != HIWORD(dword_180163858) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v28);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_36:
    Heap = (char *)RtlReAllocateHeap(Src, Flags, a3, a4);
    v8 = Heap;
    v29 = Heap;
    if ( Heap )
    {
      v20 = (unsigned __int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v20 -= 16LL * *(unsigned __int8 *)(v20 + 14);
      if ( Src[31] )
      {
        v21 = *(_DWORD *)(v20 + 8) ^ Src[34];
        *(_DWORD *)(v20 + 8) = v21;
        if ( HIBYTE(v21) != ((unsigned __int8)v21 ^ (unsigned __int8)(BYTE1(v21) ^ BYTE2(v21))) )
          RtlpAnalyzeHeapFailure((__int64)Src, v20);
      }
      if ( (*(_BYTE *)(v20 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v20);
        v23 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v24 = v23[1];
      }
      else
      {
        v24 = *(unsigned __int8 *)(v20 + 11);
      }
      v28 = v24;
      if ( Src[31] )
      {
        *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
        *(_DWORD *)(v20 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src);
  }
  if ( v8 )
  {
    v25 = NtCurrentPeb();
    v8 = v29;
    if ( v29 == (char *)qword_180163850 )
    {
      if ( v25->Ldr )
      {
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        v8 = v29;
      }
      else
      {
        DbgPrint("HEAP: ");
      }
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180163850, a4);
LABEL_57:
      RtlpBreakPointHeap();
      goto LABEL_69;
    }
    if ( (v25->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v28) == dword_180163858 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v26 = RtlpGetTagName((__int64)Src, v28);
      v8 = v29;
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v29, a4, v26);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v27 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)Src + 44));
  return v8;
}
