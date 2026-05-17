/*
 * XREFs of sub_180105AFC @ 0x180105AFC
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_1800704A4 @ 0x1800704A4 (sub_1800704A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

char __fastcall sub_180105AFC(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  char v9; // di
  char v10; // r14
  int v12; // esi
  unsigned __int64 v13; // rdx

  v9 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_18015FA40)(a1);
  if ( ((a5 | a4) & 0xFFFFF1FF) != 0 )
    return 0;
  if ( sub_180019C74((_DWORD *)a1, "RtlSetUserFlagsHeap") )
  {
    v12 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v10 = 1;
      v12 |= 1u;
    }
    sub_1801061B8(a1, 0LL);
    v13 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
    if ( sub_1800704A4(a1, v13, "RtlSetUserFlagsHeap") )
    {
      v9 = RtlSetUserFlagsHeap(a1, v12, a3, a4, a5);
      sub_1801061B8(a1, 0LL);
    }
  }
  else
  {
    v9 = 0;
  }
  if ( v10 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v9;
}
