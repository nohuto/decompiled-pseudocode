/*
 * XREFs of sub_180105CC8 @ 0x180105CC8
 * Callers:
 *     RtlSetUserValueHeap @ 0x18006E6A0 (RtlSetUserValueHeap.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     RtlSetUserValueHeap @ 0x18006E6A0 (RtlSetUserValueHeap.c)
 *     sub_1800704A4 @ 0x1800704A4 (sub_1800704A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

BOOLEAN __fastcall sub_180105CC8(PRTL_CRITICAL_SECTION *HeapHandle, int a2, char *a3, void *a4)
{
  BOOLEAN v8; // si
  char v9; // r14
  ULONG v11; // edi
  unsigned __int64 v12; // rdx

  v8 = 0;
  v9 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_18015FA30)();
  if ( sub_180019C74(HeapHandle, "RtlSetUserValueHeap") )
  {
    v11 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(HeapHandle[44]);
      v9 = 1;
      v11 |= 1u;
    }
    sub_1801061B8((_DWORD)HeapHandle);
    v12 = (unsigned __int64)(a3 - 16);
    _m_prefetchw(a3 - 16);
    if ( *(a3 - 1) == 5 )
      v12 -= 16LL * *(unsigned __int8 *)(v12 + 14);
    if ( sub_1800704A4((unsigned __int64)HeapHandle, v12, "RtlSetUserValueHeap") )
    {
      v8 = RtlSetUserValueHeap(HeapHandle, v11, a3, a4);
      sub_1801061B8((_DWORD)HeapHandle);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v9 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return v8;
}
