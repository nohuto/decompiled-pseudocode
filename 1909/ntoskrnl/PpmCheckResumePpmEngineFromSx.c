/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x14015E3D4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 */

LONG PpmCheckResumePpmEngineFromSx()
{
  if ( PpmHeteroHgsEnabled )
  {
    __writemsr(0x17D0u, (*(_QWORD *)(PpmHeteroHgsTableMdl + 48) << 12) | 1LL);
    __writemsr(0x17D1u, 1uLL);
  }
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
