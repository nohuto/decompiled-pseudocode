/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x14016CC00
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14065E81C (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  __int64 ThreadServerSilo; // rax
  _DWORD **v1; // rax

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext()
    || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
  {
    v1 = (_DWORD **)&PspHostSiloGlobals;
  }
  else
  {
    v1 = *(_DWORD ***)(ThreadServerSilo + 1256);
  }
  return *v1[140];
}
