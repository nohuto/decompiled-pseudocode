/*
 * XREFs of PerfInfoLogSysCallEntry @ 0x140312320
 * Callers:
 *     KiSystemCall64 @ 0x1401CF100 (KiSystemCall64.c)
 *     KiTrackSystemCallEntry @ 0x140844C80 (KiTrackSystemCallEntry.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5E0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1400891E0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42EC (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 __fastcall PerfInfoLogSysCallEntry(__int64 a1)
{
  __int64 ThreadServerSilo; // rcx
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[2]; // [rsp+38h] [rbp-20h] BYREF

  v4 = a1;
  v5[0] = &v4;
  v5[1] = 8LL;
  if ( !KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)v5, 1, 0x40000040u, 3891, 5249026);
  return a1;
}
