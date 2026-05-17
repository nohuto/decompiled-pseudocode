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
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F3690 (RtlpGetTagName.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugReAllocateHeap(_DWORD *Src, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rsi
  int v10; // r14d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  struct _PEB *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int16 v17; // r8
  int v18; // edx
  unsigned __int16 v19; // cx
  wchar_t *TagName; // rax
  __int64 Heap; // rax
  unsigned __int64 v22; // r14
  int v23; // edx
  _WORD *ExtraStuffPointer; // rax
  _WORD *v25; // r15
  unsigned __int16 v26; // ax
  struct _PEB *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  wchar_t *v30; // rax
  char v31; // [rsp+30h] [rbp-48h]
  unsigned __int16 v32; // [rsp+34h] [rbp-44h]
  __int64 v33; // [rsp+38h] [rbp-40h]
  unsigned __int64 v34; // [rsp+40h] [rbp-38h]
  int v35; // [rsp+88h] [rbp+10h]

  v31 = 0;
  v8 = 0LL;
  v33 = 0LL;
  if ( (Src[29] & 0x1000000) != 0 )
    return _guard_dispatch_icall_fptr();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v10 = Src[29] | 0x10000100 | a2;
  v35 = v10;
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
  v32 = 0;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v31 = 1;
    v35 = v10 | 1;
  }
  RtlpValidateHeap(Src, 0LL);
  v13 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  v34 = v13;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == qword_180163850 )
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
      v17 = dword_180163858;
      if ( !dword_180163858 )
        goto LABEL_36;
      if ( Src[31] )
      {
        v18 = *(_DWORD *)(v34 + 8) ^ Src[34];
        *(_DWORD *)(v34 + 8) = v18;
        if ( HIBYTE(v18) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
        {
          RtlpAnalyzeHeapFailure((__int64)Src, v34);
          v17 = dword_180163858;
        }
      }
      if ( (*(_BYTE *)(v34 + 10) & 2) != 0 )
        v19 = *(_WORD *)(RtlpGetExtraStuffPointer(v34) + 2);
      else
        v19 = *(unsigned __int8 *)(v34 + 11);
      v32 = v19;
      if ( Src[31] )
      {
        *(_BYTE *)(v34 + 11) = *(_BYTE *)(v34 + 8) ^ *(_BYTE *)(v34 + 9) ^ *(_BYTE *)(v34 + 10);
        *(_DWORD *)(v34 + 8) ^= Src[34];
      }
      if ( !v19 || v19 != v17 || *((_WORD *)Src + 104) != HIWORD(dword_180163858) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v32);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap(v16, v15);
LABEL_36:
    Heap = RtlReAllocateHeap((__int64)Src, v35, a3, a4);
    v8 = Heap;
    v33 = Heap;
    if ( Heap )
    {
      v22 = Heap - 16;
      _m_prefetchw((const void *)(Heap - 16));
      if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
        v22 -= 16LL * *(unsigned __int8 *)(v22 + 14);
      if ( Src[31] )
      {
        v23 = *(_DWORD *)(v22 + 8) ^ Src[34];
        *(_DWORD *)(v22 + 8) = v23;
        if ( HIBYTE(v23) != ((unsigned __int8)v23 ^ (unsigned __int8)(BYTE1(v23) ^ BYTE2(v23))) )
          RtlpAnalyzeHeapFailure((__int64)Src, v22);
      }
      if ( (*(_BYTE *)(v22 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v22);
        v25 = ExtraStuffPointer;
        if ( (Src[28] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v26 = v25[1];
      }
      else
      {
        v26 = *(unsigned __int8 *)(v22 + 11);
      }
      v32 = v26;
      if ( Src[31] )
      {
        *(_BYTE *)(v22 + 11) = *(_BYTE *)(v22 + 8) ^ *(_BYTE *)(v22 + 9) ^ *(_BYTE *)(v22 + 10);
        *(_DWORD *)(v22 + 8) ^= Src[34];
      }
    }
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src, 0LL);
  }
  if ( v8 )
  {
    v27 = NtCurrentPeb();
    v8 = v33;
    if ( v33 == qword_180163850 )
    {
      if ( v27->Ldr )
      {
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        v8 = v33;
      }
      else
      {
        DbgPrint("HEAP: ");
      }
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_180163850, a4);
LABEL_57:
      RtlpBreakPointHeap(v29, v28);
      goto LABEL_69;
    }
    if ( (v27->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v32) == dword_180163858 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v30 = RtlpGetTagName((__int64)Src, v32);
      v8 = v33;
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v33, a4, v30);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v31 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v8;
}
