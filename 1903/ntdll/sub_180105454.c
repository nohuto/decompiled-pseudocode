/*
 * XREFs of sub_180105454 @ 0x180105454
 * Callers:
 *     RtlQueryTagHeap @ 0x1800EF2B0 (RtlQueryTagHeap.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     RtlQueryTagHeap @ 0x1800EF2B0 (RtlQueryTagHeap.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

PWSTR __fastcall sub_180105454(
        PRTL_CRITICAL_SECTION *HeapHandle,
        int a2,
        USHORT a3,
        BOOLEAN a4,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  char v9; // si
  PWSTR TagHeap; // r14
  ULONG v11; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( sub_180019C74(HeapHandle, "RtlQueryTagHeap") )
  {
    v11 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v9 = 1;
      v11 |= 1u;
    }
    if ( (unsigned __int8)sub_1801061B8((_DWORD)HeapHandle) )
      TagHeap = RtlQueryTagHeap(HeapHandle, v11, a3, a4, TagInfo);
  }
  if ( v9 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return TagHeap;
}
