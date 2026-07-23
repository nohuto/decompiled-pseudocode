/*
 * XREFs of RtlQueryTagHeap @ 0x1800EF2B0
 * Callers:
 *     sub_180105454 @ 0x180105454 (sub_180105454.c)
 *     TpDbgDumpHeapUsage @ 0x18010EDD0 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180105454 @ 0x180105454 (sub_180105454.c)
 */

PWSTR __cdecl RtlQueryTagHeap(
        PVOID HeapHandle,
        ULONG Flags,
        USHORT TagIndex,
        BOOLEAN ResetCounters,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  int v8; // ecx
  WCHAR *v9; // rdi
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp-28h]

  v14 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0LL;
  v8 = *((_DWORD *)HeapHandle + 29);
  if ( (v8 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  v9 = 0LL;
  v10 = v8 | Flags;
  if ( ((v8 | Flags) & 0x61000000) != 0 && ((v8 | Flags) & 0x10000000) == 0 )
  {
    v9 = (WCHAR *)sub_180105454(HeapHandle, TagInfo);
  }
  else
  {
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v14 = 1;
    }
    if ( TagIndex < *((_WORD *)HeapHandle + 112) && (v11 = *((_QWORD *)HeapHandle + 29)) != 0 )
    {
      if ( TagInfo )
      {
        TagInfo->NumberOfAllocations = *(_DWORD *)(v11 + 72LL * TagIndex);
        TagInfo->NumberOfFrees = *(_DWORD *)(v11 + 72LL * TagIndex + 4);
        TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v11 + 72LL * TagIndex + 8);
      }
      if ( ResetCounters )
      {
        *(_QWORD *)(v11 + 72LL * TagIndex) = 0LL;
        *(_QWORD *)(v11 + 72LL * TagIndex + 8) = 0LL;
      }
      v9 = (WCHAR *)(v11 + 20 + 72LL * TagIndex);
    }
    else if ( (TagIndex & 0x8000u) != 0 && (TagIndex ^ 0x8000u) < 0x81 )
    {
      v12 = *((_QWORD *)HeapHandle + 41);
      if ( v12 )
      {
        v13 = v12 + 16LL * (TagIndex ^ 0x8000u);
        if ( TagInfo )
        {
          TagInfo->NumberOfAllocations = *(_DWORD *)v13;
          TagInfo->NumberOfFrees = *(_DWORD *)(v13 + 4);
          TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v13 + 8);
        }
        if ( ResetCounters )
        {
          *(_QWORD *)v13 = 0LL;
          *(_QWORD *)(v13 + 8) = 0LL;
        }
        v9 = (WCHAR *)&word_18011C2FC;
      }
    }
  }
  if ( v14 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return v9;
}
