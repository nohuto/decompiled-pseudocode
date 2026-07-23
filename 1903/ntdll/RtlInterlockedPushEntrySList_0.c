/*
 * XREFs of RtlInterlockedPushEntrySList_0 @ 0x1800A01F0
 * Callers:
 *     RtlDeleteResource @ 0x180032AA0 (RtlDeleteResource.c)
 *     sub_180035DD0 @ 0x180035DD0 (sub_180035DD0.c)
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_18004AC64 @ 0x18004AC64 (sub_18004AC64.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 *     sub_18004D730 @ 0x18004D730 (sub_18004D730.c)
 *     sub_1800538B8 @ 0x1800538B8 (sub_1800538B8.c)
 *     RtlInterlockedPushEntrySList @ 0x180067CB0 (RtlInterlockedPushEntrySList.c)
 *     sub_1800FAE20 @ 0x1800FAE20 (sub_1800FAE20.c)
 *     sub_180103FDC @ 0x180103FDC (sub_180103FDC.c)
 *     RtlFreeMemoryBlockLookaside @ 0x180117190 (RtlFreeMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __cdecl RtlInterlockedPushEntrySList_0(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  _SLIST_HEADER v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v5.Alignment + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return Region;
}
