/*
 * XREFs of TpWaitForTimer @ 0x18002C6D0
 * Callers:
 *     RtlDeleteTimer @ 0x18002F570 (RtlDeleteTimer.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppTimerpValidateTimer @ 0x18002C90C (TppTimerpValidateTimer.c)
 *     TppCancelTimer @ 0x18002C984 (TppCancelTimer.c)
 *     TppWorkWait @ 0x18002D368 (TppWorkWait.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpWaitForTimer(PTP_TIMER Timer, LOGICAL CancelPendingCallbacks)
{
  char v4; // bp
  char v5; // si
  __int64 v6; // r8

  if ( (unsigned int)TppTimerpValidateTimer(Timer, 0LL) )
  {
    v4 = 0;
    v5 = 0;
    if ( CancelPendingCallbacks )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
      ++*((_BYTE *)Timer + 355);
      LOBYTE(v6) = 1;
      v4 = TppCancelTimer(Timer, *((_QWORD *)Timer + 18) + 112LL, v6);
      if ( *((_DWORD *)Timer + 14) )
        v5 = 1;
      else
        --*((_BYTE *)Timer + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Timer + 30);
    }
    TppWorkWait(Timer, CancelPendingCallbacks);
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
