/*
 * XREFs of TpWaitForTimer @ 0x180031D10
 * Callers:
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 * Callees:
 *     sub_180031C98 @ 0x180031C98 (sub_180031C98.c)
 *     sub_1800324FC @ 0x1800324FC (sub_1800324FC.c)
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  char v4; // bp
  char v5; // si
  __int64 v6; // r8

  if ( (unsigned int)sub_1800324FC(Timer, 0LL, 0LL) )
  {
    v4 = 0;
    v5 = 0;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      ++*((_BYTE *)Timer + 355);
      LOBYTE(v6) = 1;
      v4 = sub_18003257C(Timer, *((_QWORD *)Timer + 18) + 112LL, v6);
      if ( *((_DWORD *)Timer + 14) )
        v5 = 1;
      else
        --*((_BYTE *)Timer + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    }
    sub_180031C98(Timer, CancelPendingCallbacks);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      --*((_BYTE *)Timer + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    }
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
        (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
    }
  }
}
