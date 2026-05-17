/*
 * XREFs of RtlDebugFreeHeap @ 0x180107BB4
 * Callers:
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18005B1FC (RtlpGetExtraStuffPointer.c)
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

__int64 __fastcall RtlDebugFreeHeap(_DWORD *Src, int a2, unsigned __int64 a3)
{
  unsigned int v6; // r14d
  int v8; // esi
  unsigned __int64 v9; // rdx
  struct _PEB *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // r8
  int v14; // edx
  unsigned __int16 v15; // cx
  wchar_t *TagName; // rax
  char v17; // [rsp+20h] [rbp-38h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]
  unsigned int v19; // [rsp+68h] [rbp+10h]
  unsigned __int16 v20; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v17 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned __int8)_guard_dispatch_icall_fptr();
  if ( RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v8 = Src[29] | 0x10000000 | a2;
    v19 = v8;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v17 = 1;
      v19 = v8 | 1;
    }
    RtlpValidateHeap(Src, 0LL);
    v9 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    v18 = v9;
    if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v9, "RtlFreeHeap") )
      goto LABEL_34;
    v10 = NtCurrentPeb();
    if ( a3 == qword_180163860 )
    {
      if ( v10->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_180163860);
    }
    else
    {
      if ( (v10->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v13 = unk_180163868;
      if ( !unk_180163868 )
        goto LABEL_33;
      if ( Src[31] )
      {
        v14 = *(_DWORD *)(v18 + 8) ^ Src[34];
        *(_DWORD *)(v18 + 8) = v14;
        if ( HIBYTE(v14) != ((unsigned __int8)v14 ^ (unsigned __int8)(BYTE1(v14) ^ BYTE2(v14))) )
        {
          RtlpAnalyzeHeapFailure((__int64)Src, v18);
          v13 = unk_180163868;
        }
      }
      if ( (*(_BYTE *)(v18 + 10) & 2) != 0 )
        v15 = *(_WORD *)(RtlpGetExtraStuffPointer(v18) + 2);
      else
        v15 = *(unsigned __int8 *)(v18 + 11);
      v20 = v15;
      if ( Src[31] )
      {
        *(_BYTE *)(v18 + 11) = *(_BYTE *)(v18 + 8) ^ *(_BYTE *)(v18 + 9) ^ *(_BYTE *)(v18 + 10);
        *(_DWORD *)(v18 + 8) ^= Src[34];
      }
      if ( !v15 || v15 != v13 || *((_WORD *)Src + 104) != word_18016386A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v20);
      DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
    }
    RtlpBreakPointHeap(v12, v11);
LABEL_33:
    v6 = RtlFreeHeap((__int64)Src, v19, a3);
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src, 0LL);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v17 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v6;
}
