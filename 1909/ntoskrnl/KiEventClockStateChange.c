/*
 * XREFs of KiEventClockStateChange @ 0x140112604
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140033DF0 (KeResumeClockTimerFromIdle.c)
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 *     KePrepareClockTimerForIdle @ 0x140111FD0 (KePrepareClockTimerForIdle.c)
 *     KiSetClockTickRate @ 0x1401124A4 (KiSetClockTickRate.c)
 *     KiResumeClockTimer @ 0x14015F380 (KiResumeClockTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall KiEventClockStateChange(int a1, char a2, __int64 *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-20h]
  __int64 *v8; // [rsp+48h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+54h] [rbp-Ch]

  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v5 = 0LL;
    BYTE1(v5) = a2;
    v6 = 0LL;
    v7 = 0LL;
    LOBYTE(v5) = a1;
    if ( a1 >= 0 )
    {
      if ( a1 <= 1 )
      {
        v6 = *a3;
        v7 = *a4;
      }
      else if ( a1 == 2 )
      {
        v6 = KiClockTimerNextTickTime;
      }
    }
    v10 = 0;
    v8 = &v5;
    v9 = 24;
    return EtwTraceKernelEvent((unsigned int)&v8, 1, 1074790400, 3927, 1538);
  }
  return result;
}
