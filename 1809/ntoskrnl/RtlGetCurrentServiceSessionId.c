/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x14016CB00
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14065D65C (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DAC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5E0 (PsGetThreadServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B42EC (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  __int64 ThreadServerSilo; // rax
  unsigned int **v1; // rax

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext()
    || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
  {
    v1 = (unsigned int **)&PspHostSiloGlobals;
  }
  else
  {
    v1 = *(unsigned int ***)(ThreadServerSilo + 1256);
  }
  return *v1[140];
}
