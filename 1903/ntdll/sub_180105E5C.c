/*
 * XREFs of sub_180105E5C @ 0x180105E5C
 * Callers:
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_1800704A4 @ 0x1800704A4 (sub_1800704A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_180105E5C(unsigned __int64 a1, int a2, __int64 a3)
{
  char v6; // r14
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned __int64 v10; // rdx

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_18015FA50)(a1);
  v8 = -1LL;
  if ( sub_180019C74((_DWORD *)a1, "RtlSizeHeap") )
  {
    v9 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 |= 1u;
      v6 = 1;
    }
    sub_1801061B8(a1, 0LL);
    v10 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( sub_1800704A4(a1, v10, "RtlSizeHeap") )
      v8 = RtlSizeHeap(a1, v9, a3);
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v8;
}
