/*
 * XREFs of RtlSetActiveConsoleId @ 0x140749C00
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 */

unsigned __int64 __fastcall RtlSetActiveConsoleId(unsigned int a1)
{
  unsigned __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = (unsigned __int64)PsGetCurrentServerSiloGlobals();
    *(_DWORD *)(*(_QWORD *)(result + 1104) + 4LL) = a1;
  }
  else
  {
    result = a1;
    MEMORY[0xFFFFF780000002D8] = a1;
  }
  return result;
}
