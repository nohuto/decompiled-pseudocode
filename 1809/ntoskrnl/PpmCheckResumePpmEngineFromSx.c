/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x1401429F8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 */

void PpmCheckResumePpmEngineFromSx()
{
  if ( PpmHeteroHgsEnabled )
  {
    __writemsr(0x17D0u, (*(_QWORD *)(PpmHeteroHgsTableMdl + 48) << 12) | 1LL);
    __writemsr(0x17D1u, 1uLL);
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
}
