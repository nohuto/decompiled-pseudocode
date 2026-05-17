/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1800A09E0
 * Callers:
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpHpHeapCompact @ 0x18004F1D0 (RtlpHpHeapCompact.c)
 *     RtlInterlockedFlushSList @ 0x18006E0C0 (RtlInterlockedFlushSList.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpInterlockedFlushSList(__int128 *a1)
{
  __int128 v1; // rax
  signed __int64 v2; // rbx
  __int128 v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(a1);
  v1 = *a1;
  do
  {
    v2 = v1;
    LOWORD(v2) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)a1, 0LL, v2, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  return BYTE8(v1) & 0xF0;
}
