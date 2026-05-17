/*
 * XREFs of sub_180104DB4 @ 0x180104DB4
 * Callers:
 *     RtlCreateTagHeap @ 0x18007C500 (RtlCreateTagHeap.c)
 * Callees:
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     RtlCreateTagHeap @ 0x18007C500 (RtlCreateTagHeap.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

__int64 __fastcall sub_180104DB4(_DWORD *Src, int a2, __int64 a3, _WORD *a4)
{
  char v8; // si
  unsigned int TagHeap; // r14d
  int v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( sub_180019C74(Src, "RtlCreateTagHeap") )
  {
    v10 = Src[29] | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v8 = 1;
      v10 |= 1u;
    }
    if ( (unsigned __int8)sub_1801061B8(Src, 0LL) )
      TagHeap = RtlCreateTagHeap(Src, v10, a3, a4);
    sub_180106798(Src);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return TagHeap;
}
