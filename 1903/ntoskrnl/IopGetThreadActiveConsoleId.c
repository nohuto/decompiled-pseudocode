/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x14085700C
 * Callers:
 *     IoRaiseHardError @ 0x140298660 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x140306BA4 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
