/*
 * XREFs of sub_18010496C @ 0x18010496C
 * Callers:
 *     RtlCompactHeap @ 0x180089480 (RtlCompactHeap.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     RtlCompactHeap @ 0x180089480 (RtlCompactHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_18010496C(_DWORD *Src, int a2)
{
  char v4; // si
  __int64 v6; // rbx
  int v7; // ebx

  v4 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_DWORD *))qword_18015FA58)(Src);
  if ( sub_180019C74(Src, "RtlCompactHeap") )
  {
    v7 = Src[29] | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v4 = 1;
      v7 |= 1u;
    }
    sub_1801061B8(Src, 0LL);
    v6 = RtlCompactHeap((char *)Src, v7);
    sub_180106798(Src);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v6;
}
