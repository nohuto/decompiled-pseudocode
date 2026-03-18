/*
 * XREFs of PerfInfoLogSysCallExit @ 0x1403122B0
 * Callers:
 *     KiSystemCall64 @ 0x1401CF000 (KiSystemCall64.c)
 *     KiTrackSystemCallExit @ 0x140844DA0 (KiTrackSystemCallExit.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5E0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1400891E0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42CC (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 __fastcall PerfInfoLogSysCallExit(__int64 a1)
{
  __int64 ThreadServerSilo; // rcx
  int v4; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v5[2]; // [rsp+38h] [rbp-20h] BYREF

  v5[1] = 4LL;
  v4 = a1;
  v5[0] = &v4;
  if ( !KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)v5, 1, 0x40000040u, 3892, 5249026);
  return a1;
}
