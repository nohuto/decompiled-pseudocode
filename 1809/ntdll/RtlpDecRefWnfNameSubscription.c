/*
 * XREFs of RtlpDecRefWnfNameSubscription @ 0x18005E718
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18005DDCC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005E058 (RtlpWnfProcessCurrentDescriptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     NtUnsubscribeWnfStateChange @ 0x1800A3B90 (NtUnsubscribeWnfStateChange.c)
 *     RtlpWnfETWEventNameSubRundown @ 0x1800DFD88 (RtlpWnfETWEventNameSubRundown.c)
 */

signed __int64 __fastcall RtlpDecRefWnfNameSubscription(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r8

  RtlAcquireSRWLockExclusive(qword_1801660D0 + 8, a2, a3, a4);
  RtlAcquireSRWLockExclusive(a1 + 56, v5, v6, v7);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 108), 0xFFFFFFFF) == 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v9 = 2147353486LL;
    if ( *(_BYTE *)v9 )
      RtlpWnfETWEventNameSubRundown(*(_QWORD *)(a1 + 16), a1);
    NtUnsubscribeWnfStateChange(a1 + 16);
    v10 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v10 + 8) != a1 + 32 || (v11 = *(_QWORD **)(a1 + 40), *v11 != a1 + 32) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    v12 = *(_QWORD *)(a1 + 120);
    if ( v12 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801660D0 + 8));
}
