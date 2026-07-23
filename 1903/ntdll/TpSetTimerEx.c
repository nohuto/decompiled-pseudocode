/*
 * XREFs of TpSetTimerEx @ 0x1800323F0
 * Callers:
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180030E70 (RtlCreateTimer.c)
 *     TpSetTimer @ 0x1800323E0 (TpSetTimer.c)
 *     sub_1800367E0 @ 0x1800367E0 (sub_1800367E0.c)
 *     sub_180044584 @ 0x180044584 (sub_180044584.c)
 *     RtlUpdateTimer @ 0x18007E540 (RtlUpdateTimer.c)
 *     sub_18008BD24 @ 0x18008BD24 (sub_18008BD24.c)
 * Callees:
 *     TpIsTimerSet @ 0x1800323A0 (TpIsTimerSet.c)
 *     sub_1800324FC @ 0x1800324FC (sub_1800324FC.c)
 *     sub_18003257C @ 0x18003257C (sub_18003257C.c)
 *     sub_1800326A0 @ 0x1800326A0 (sub_1800326A0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl TpSetTimerEx(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  __int64 v8; // r15
  bool v9; // di
  __int64 v10; // r8
  unsigned __int8 v11; // si

  if ( (unsigned int)sub_1800324FC(Timer, 0LL, DueTime != 0LL) )
  {
    v8 = *((_QWORD *)Timer + 18);
    v9 = DueTime != 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    LOBYTE(v10) = DueTime != 0LL;
    v11 = sub_18003257C(Timer, v8 + 112, v10);
    if ( DueTime && *((_BYTE *)Timer + 355) )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      v9 = 0;
    }
    if ( !v11 )
    {
      if ( !v9 )
        return v11;
      if ( TpIsTimerSet(Timer) )
      {
LABEL_11:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
        return v11;
      }
      _InterlockedIncrement((volatile signed __int32 *)Timer);
    }
    if ( !v9 )
    {
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)Timer, 0xFFFFFFFF) == 1 )
          (**((void (__fastcall ***)(PTP_TIMER))Timer + 1))(Timer);
      }
      return v11;
    }
    sub_1800326A0(Timer, v8 + 112, DueTime, Period, WindowLength);
    goto LABEL_11;
  }
  return 0;
}
