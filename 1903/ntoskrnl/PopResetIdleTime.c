/*
 * XREFs of PopResetIdleTime @ 0x1400EE900
 * Callers:
 *     PopSetSystemState @ 0x1401812C4 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x140181308 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x14018206C (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1406A1D00 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140745314 (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x1400EE944 (PopTraceSystemIdleTimeReset.c)
 *     PopHandleSystemIdleReset @ 0x140300578 (PopHandleSystemIdleReset.c)
 */

__int64 PopResetIdleTime()
{
  KeGetCurrentIrql();
  if ( PopPlatformAoAc )
    return PopHandleSystemIdleReset();
  PopIsAboutToSleep = 0;
  dword_140442F68 = 0;
  byte_140442FB0 = 0;
  dword_140442FA0 = 0;
  return PopTraceSystemIdleTimeReset();
}
