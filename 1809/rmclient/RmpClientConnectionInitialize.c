/*
 * XREFs of RmpClientConnectionInitialize @ 0x18000876C
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x180008650 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     HamIpcChannelInitialize @ 0x180008804 (HamIpcChannelInitialize.c)
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 */

__int64 __fastcall RmpClientConnectionInitialize(_QWORD *a1)
{
  _QWORD *v2; // rax

  memset_0(a1, 0, 0x68uLL);
  memset_0(a1 + 3, 0, 0x50uLL);
  HamIpcChannelInitialize(
    RmpClientSubscriptionDeliverPayload,
    HampConnectionObjectCompareToObject,
    RmpClientCallbackCompareToPayload,
    a1 + 3);
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v2 = (_QWORD *)qword_180022688;
  if ( *(__int64 **)qword_180022688 != &RmpClientConnectionListHead )
    __fastfail(3u);
  *a1 = &RmpClientConnectionListHead;
  a1[1] = v2;
  *v2 = a1;
  qword_180022688 = (__int64)a1;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
