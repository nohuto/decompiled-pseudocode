/*
 * XREFs of RtlDebugFreeHeap @ 0x1801050F0
 * Callers:
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180019C74 (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
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

__int64 __fastcall RtlDebugFreeHeap(PRTL_CRITICAL_SECTION *Src, int a2, char *a3)
{
  LOGICAL v6; // r14d
  int v8; // esi
  unsigned __int64 v9; // rdx
  struct _PEB *v10; // rax
  __int16 v11; // dx
  unsigned __int16 v12; // cx
  wchar_t *TagName; // rax
  char v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int16 v17; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v14 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned __int8)_guard_dispatch_icall_fptr();
  if ( RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v8 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
    Flags = v8;
    if ( (v8 & 1) == 0 )
    {
      RtlEnterCriticalSection(Src[44]);
      v14 = 1;
      Flags = v8 | 1;
    }
    RtlpValidateHeap((_DWORD)Src);
    v9 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
    v15 = v9;
    if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v9, "RtlFreeHeap") )
      goto LABEL_34;
    v10 = NtCurrentPeb();
    if ( a3 == (char *)qword_180163900 )
    {
      if ( v10->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_180163900);
    }
    else
    {
      if ( (v10->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v11 = unk_180163908;
      if ( !unk_180163908 )
        goto LABEL_33;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_DWORD *)(v15 + 8) ^= *((_DWORD *)Src + 34);
        if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
        {
          RtlpAnalyzeHeapFailure((unsigned __int64)Src, v15);
          v11 = unk_180163908;
        }
      }
      if ( (*(_BYTE *)(v15 + 10) & 2) != 0 )
        v12 = *(_WORD *)(RtlpGetExtraStuffPointer(v15) + 2);
      else
        v12 = *(unsigned __int8 *)(v15 + 11);
      v17 = v12;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
        *(_DWORD *)(v15 + 8) ^= *((_DWORD *)Src + 34);
      }
      if ( !v12 || v12 != v11 || *((_WORD *)Src + 104) != word_18016390A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v17);
      DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
    }
    RtlpBreakPointHeap();
LABEL_33:
    v6 = RtlFreeHeap(Src, Flags, a3);
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap((_DWORD)Src);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v14 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
