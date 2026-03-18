/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x14085670C
 * Callers:
 *     IoRaiseHardError @ 0x1402983C0 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x140306654 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
