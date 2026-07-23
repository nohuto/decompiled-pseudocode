/*
 * XREFs of RtlpDecrementWnfSerializationGroup @ 0x1800078BC
 * Callers:
 *     RtlpDecRefWnfUserSubscription @ 0x180006E00 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180009D9C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpDecrementWnfSerializationGroup(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_180166090 + 48));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v2 + 8) != a1 + 8 || (v3 = *(_QWORD **)(a1 + 16), *v3 != a1 + 8) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_180166090 + 48));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_180166090 + 48));
  }
}
