/*
 * XREFs of RtlpDecRefWnfNameSubscription @ 0x180006ECC
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000645C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x1800066EC (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     NtUnsubscribeWnfStateChange @ 0x1800A0760 (NtUnsubscribeWnfStateChange.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800DD948 (RtlpWnfETWEventNameSubRundown.c)
 */

__int64 __fastcall RtlpDecRefWnfNameSubscription(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // r8

  RtlAcquireSRWLockExclusive(qword_180166090 + 8);
  RtlAcquireSRWLockExclusive(a1 + 56);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 108), 0xFFFFFFFF) == 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v3 = 2147353486LL;
    if ( *(_BYTE *)v3 )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    v4 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v4 + 8) != a1 + 32 || (v5 = *(_QWORD **)(a1 + 40), *v5 != a1 + 32) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    RtlReleaseSRWLockExclusive(a1 + 56);
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v6);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive(a1 + 56);
  }
  return RtlReleaseSRWLockExclusive(qword_180166090 + 8);
}
