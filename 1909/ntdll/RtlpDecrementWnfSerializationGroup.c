/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x1800078BC
 * Callers:
 *     RtlpDecRefWnfUserSubscription @ 0x180006E00 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180009D9C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpDecrementWnfSerializationGroup(__int64 a1)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdx

  RtlAcquireSRWLockExclusive(qword_180166090 + 48);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) != 1 )
    return RtlReleaseSRWLockExclusive(qword_180166090 + 48);
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 8) != a1 + 8 || (v4 = *(_QWORD **)(a1 + 16), *v4 != a1 + 8) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive(qword_180166090 + 48);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
