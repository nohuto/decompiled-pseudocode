/*
 * XREFs of RtlInterlockedFlushSList_0 @ 0x1800A0230
 * Callers:
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 *     RtlInterlockedFlushSList @ 0x18006DE70 (RtlInterlockedFlushSList.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __cdecl RtlInterlockedFlushSList_0(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
