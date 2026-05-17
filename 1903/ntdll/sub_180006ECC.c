/*
 * XREFs of sub_180006ECC @ 0x180006ECC
 * Callers:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 *     sub_1800066EC @ 0x1800066EC (sub_1800066EC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwUnsubscribeWnfStateChange @ 0x18009FFB0 (ZwUnsubscribeWnfStateChange.c)
 *     sub_1800DD888 @ 0x1800DD888 (sub_1800DD888.c)
 */

__int64 __fastcall sub_180006ECC(__int64 a1)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // r8

  RtlAcquireSRWLockExclusive(qword_180166088 + 8);
  RtlAcquireSRWLockExclusive(a1 + 56);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 108), 0xFFFFFFFF) == 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
    else
      v3 = 2147353486LL;
    if ( *(_BYTE *)v3 )
      sub_1800DD888(*(_QWORD *)(a1 + 16), a1);
    ZwUnsubscribeWnfStateChange(a1 + 16);
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
  return RtlReleaseSRWLockExclusive(qword_180166088 + 8);
}
