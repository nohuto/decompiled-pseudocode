/*
 * XREFs of TpReleaseTimer @ 0x180031810
 * Callers:
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 *     RtlpInitializeWnf @ 0x18007C480 (RtlpInitializeWnf.c)
 *     RtlDeleteTimerQueueEx @ 0x180082C10 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppCleanupGroupMemberRelease @ 0x180031774 (TppCleanupGroupMemberRelease.c)
 *     TppTimerpValidateTimer @ 0x1800324FC (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18003257C (TppCancelTimer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpReleaseTimer(PTP_TIMER Timer)
{
  int v2; // edi
  int v3; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (unsigned int)TppTimerpValidateTimer(Timer, 1LL, 0LL) )
  {
    LOBYTE(v3) = TppCleanupGroupMemberRelease((__int64)Timer, 1LL);
    if ( v3 )
    {
      *((_QWORD *)Timer + 23) = retaddr;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      ++*((_BYTE *)Timer + 355);
      if ( (unsigned __int8)TppCancelTimer(Timer, *((_QWORD *)Timer + 18) + 112LL, 0LL) )
        v2 = 2;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, -v2) == v2 )
        (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
    }
  }
}
