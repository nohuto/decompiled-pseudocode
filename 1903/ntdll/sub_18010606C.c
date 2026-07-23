/*
 * XREFs of sub_18010606C @ 0x18010606C
 * Callers:
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     RtlZeroHeap @ 0x1800F2950 (RtlZeroHeap.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_18010606C(PRTL_CRITICAL_SECTION *HeapHandle, int a2)
{
  char v4; // si
  ULONG v6; // ebx
  unsigned __int32 v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_18015FA60)(HeapHandle);
  if ( !sub_180019C74(HeapHandle, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(HeapHandle[44]);
    v4 = 1;
    v6 |= 1u;
  }
  if ( (unsigned __int8)sub_1801061B8((_DWORD)HeapHandle) )
    v7 = RtlZeroHeap(HeapHandle, v6);
  else
LABEL_7:
    v7 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return v7;
}
