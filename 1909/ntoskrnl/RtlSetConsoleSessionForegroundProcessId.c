/*
 * XREFs of RtlSetConsoleSessionForegroundProcessId @ 0x1405BB2D0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140002880 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall RtlSetConsoleSessionForegroundProcessId(_QWORD *a1)
{
  _QWORD *result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = PsGetCurrentServerSiloGlobals();
    *(_QWORD *)(result[138] + 8LL) = a1;
  }
  else
  {
    result = a1;
    MEMORY[0xFFFFF78000000338] = a1;
  }
  return result;
}
