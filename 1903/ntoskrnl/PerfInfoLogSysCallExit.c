/*
 * XREFs of PerfInfoLogSysCallExit @ 0x140330660
 * Callers:
 *     KiSystemCall64 @ 0x1401D4E80 (KiSystemCall64.c)
 *     KiTrackSystemCallExit @ 0x140880630 (KiTrackSystemCallExit.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x14001D360 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallExit(__int64 a1)
{
  __int64 ThreadServerSilo; // rax
  int v4; // [rsp+30h] [rbp-28h] BYREF
  int *v5; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v7 = 0;
  v5 = &v4;
  v4 = a1;
  v6 = 4;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  EtwTraceSiloKernelEvent(ThreadServerSilo, (int)&v5, 1, 0x40000040u, 3892, 5249026);
  return a1;
}
