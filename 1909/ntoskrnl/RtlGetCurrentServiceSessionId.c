/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1401813D0
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14061FF14 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400024F0 (PsGetThreadServerSilo.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  __int64 ThreadServerSilo; // rax
  unsigned int **v1; // rax

  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  if ( ThreadServerSilo )
    v1 = *(unsigned int ***)(ThreadServerSilo + 1256);
  else
    v1 = (unsigned int **)&PspHostSiloGlobals;
  return *v1[138];
}
