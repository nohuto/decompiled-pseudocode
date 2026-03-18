/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x140112DEC
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140033740 (KiCheckForTimerExpiration.c)
 *     KeClockInterruptNotify @ 0x140034500 (KeClockInterruptNotify.c)
 *     KiSetClockInterval @ 0x140112890 (KiSetClockInterval.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B065C (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     KiSetClockTickRate @ 0x140112EB4 (KiSetClockTickRate.c)
 *     KiGetClockIntervalOneShot @ 0x140113084 (KiGetClockIntervalOneShot.c)
 */

__int64 __fastcall KiSetClockIntervalToMinimumRequested(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbp
  bool v4; // di
  unsigned int v5; // ebx
  char v6; // si
  __int64 InterruptTimePrecise; // rax
  unsigned int ClockIntervalOneShot; // eax
  __int64 result; // rax
  __int16 v10; // [rsp+30h] [rbp-8h]
  LARGE_INTEGER v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (qword_140503C90 & 1) != 0 )
  {
    if ( qword_140503C90 == 1 )
      v2 = 0LL;
    else
      v2 = qword_140503C90 ^ ((unsigned __int64)&KiClockIntervalRequests + 1);
  }
  else
  {
    v2 = qword_140503C90;
  }
  v3 = KiClockOwnerOneShotRequest;
  v4 = 0;
  v5 = *(_DWORD *)(v2 + 28);
  v6 = 0;
  if ( KiClockOwnerOneShotRequest )
  {
    _disable();
    v4 = (v10 & 0x200) != 0;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v11);
    ClockIntervalOneShot = KiGetClockIntervalOneShot(v3, InterruptTimePrecise);
    if ( ClockIntervalOneShot < v5 )
    {
      v5 = ClockIntervalOneShot;
      v6 = 1;
    }
  }
  if ( KiClockOwnerOneShotRequestState != 2 && (v5 == KiLastRequestedTimeIncrement || v5 == KeTimeIncrement) )
  {
    result = (unsigned int)KeTimeIncrement;
  }
  else
  {
    LOBYTE(a2) = v6;
    result = KiSetClockTickRate(v5, a2);
  }
  if ( v4 )
    _enable();
  return result;
}
