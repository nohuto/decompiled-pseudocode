/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1800A09A0
 * Callers:
 *     RtlDeleteResource @ 0x180032AA0 (RtlDeleteResource.c)
 *     RtlpFreeDebugInfo @ 0x180035DD0 (RtlpFreeDebugInfo.c)
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003B6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpFreeUserBlock @ 0x18004AD04 (RtlpFreeUserBlock.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004D7D0 (RtlpLocalInfoAllocFromCache.c)
 *     EtwpFreeRegistration @ 0x180053958 (EtwpFreeRegistration.c)
 *     RtlInterlockedPushEntrySList @ 0x180067F00 (RtlInterlockedPushEntrySList.c)
 *     RtlStdReleaseStackTrace @ 0x1800FAF00 (RtlStdReleaseStackTrace.c)
 *     RtlpRegisterStackTrace @ 0x1801040BC (RtlpRegisterStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x180117190 (RtlFreeMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInterlockedPushEntrySList(__int128 *a1, _QWORD *a2)
{
  __int128 v5; // rax
  __int64 v6; // r8
  __int128 v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = *((_QWORD *)&v5 + 1);
    LOBYTE(v6) = BYTE8(v5) & 0xF0;
    *a2 = v6;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)a1,
           (signed __int64)a2,
           v5 + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return v6;
}
