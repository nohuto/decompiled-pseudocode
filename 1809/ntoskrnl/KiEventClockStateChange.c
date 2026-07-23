/*
 * XREFs of KiEventClockStateChange @ 0x1400FCFB4
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140060910 (KeResumeClockTimerFromIdle.c)
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 *     KePrepareClockTimerForIdle @ 0x1400FC8F0 (KePrepareClockTimerForIdle.c)
 *     KiSetClockTickRate @ 0x1400FCE54 (KiSetClockTickRate.c)
 *     KiResumeClockTimer @ 0x1401435CC (KiResumeClockTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall KiEventClockStateChange(int a1, char a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-20h]
  __int64 *v7; // [rsp+48h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+54h] [rbp-Ch]

  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v4 = 0LL;
    BYTE1(v4) = a2;
    v5 = 0LL;
    v6 = 0LL;
    LOBYTE(v4) = a1;
    if ( a1 >= 0 )
    {
      if ( a1 <= 1 )
      {
        v5 = *a3;
        v6 = *a4;
      }
      else if ( a1 == 2 )
      {
        v5 = KiClockTimerNextTickTime;
      }
    }
    v9 = 0;
    v7 = &v4;
    v8 = 24;
    EtwTraceKernelEvent((__int64)&v7, 1u, 0x40100000u, 0xF57u, 0x602u);
  }
}
