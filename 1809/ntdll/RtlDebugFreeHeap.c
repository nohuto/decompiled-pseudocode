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
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F3690 (RtlpGetTagName.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180108DD8 (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugFreeHeap(PRTL_CRITICAL_SECTION *Src, int a2, char *a3)
{
  LOGICAL v6; // r14d
  int v8; // esi
  unsigned __int64 v9; // rdx
  struct _PEB *v10; // rax
  __int16 v11; // r8
  int v12; // edx
  unsigned __int16 v13; // cx
  wchar_t *TagName; // rax
  char v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int16 v18; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v15 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned __int8)_guard_dispatch_icall_fptr();
  if ( RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v8 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    Flags = v8;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v15 = 1;
      Flags = v8 | 1;
    }
    RtlpValidateHeap(Src);
    v9 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    v16 = v9;
    if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v9, "RtlFreeHeap") )
      goto LABEL_34;
    v10 = NtCurrentPeb();
    if ( a3 == (char *)qword_180163860 )
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
      v11 = unk_180163868;
      if ( !unk_180163868 )
        goto LABEL_33;
      if ( *((_DWORD *)Src + 31) )
      {
        v12 = *(_DWORD *)(v16 + 8) ^ *((_DWORD *)Src + 34);
        *(_DWORD *)(v16 + 8) = v12;
        if ( HIBYTE(v12) != ((unsigned __int8)v12 ^ (unsigned __int8)(BYTE1(v12) ^ BYTE2(v12))) )
        {
          RtlpAnalyzeHeapFailure((__int64)Src, v16);
          v11 = unk_180163868;
        }
      }
      if ( (*(_BYTE *)(v16 + 10) & 2) != 0 )
        v13 = *(_WORD *)(RtlpGetExtraStuffPointer(v16) + 2);
      else
        v13 = *(unsigned __int8 *)(v16 + 11);
      v18 = v13;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_BYTE *)(v16 + 11) = *(_BYTE *)(v16 + 8) ^ *(_BYTE *)(v16 + 9) ^ *(_BYTE *)(v16 + 10);
        *(_DWORD *)(v16 + 8) ^= *((_DWORD *)Src + 34);
      }
      if ( !v13 || v13 != v11 || *((_WORD *)Src + 104) != word_18016386A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v18);
      DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
    }
    RtlpBreakPointHeap();
LABEL_33:
    v6 = RtlFreeHeap(Src, Flags, a3);
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v15 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
