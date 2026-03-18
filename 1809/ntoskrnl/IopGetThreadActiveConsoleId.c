/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x14081CF84
 * Callers:
 *     IoRaiseHardError @ 0x140283150 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5E0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1402E94C4 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
