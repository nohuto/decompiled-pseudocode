/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x1401123DC
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140033B30 (KiCheckForTimerExpiration.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     KiSetClockInterval @ 0x140111E80 (KiSetClockInterval.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x1402B03BC (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14009E740 (RtlGetInterruptTimePrecise.c)
 *     KiSetClockTickRate @ 0x1401124A4 (KiSetClockTickRate.c)
 *     KiGetClockIntervalOneShot @ 0x140112674 (KiGetClockIntervalOneShot.c)
 */

__int64 __fastcall KiSetClockIntervalToMinimumRequested(__int64 a1, __int64 a2)
{
  unsigned __int64 Min; // rax
  __int64 v3; // rbp
  bool v4; // di
  unsigned int v5; // ebx
  char v6; // si
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned int v8; // eax
  __int64 result; // rax
  __int16 v10; // [rsp+30h] [rbp-8h]
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Min == (_RTL_BALANCED_NODE *)1 )
      Min = 0LL;
    else
      Min = (unsigned __int64)KiClockIntervalRequests.Min ^ ((unsigned __int64)&KiClockIntervalRequests.Root + 1);
  }
  else
  {
    Min = (unsigned __int64)KiClockIntervalRequests.Min;
  }
  v3 = KiClockOwnerOneShotRequest;
  v4 = 0;
  v5 = *(_DWORD *)(Min + 28);
  v6 = 0;
  if ( KiClockOwnerOneShotRequest )
  {
    _disable();
    v4 = (v10 & 0x200) != 0;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiGetClockIntervalOneShot)(
           v3,
           (LARGE_INTEGER)InterruptTimePrecise.QuadPart);
    if ( v8 < v5 )
    {
      v5 = v8;
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
