/*
 * XREFs of PopResetIdleTime @ 0x14013B3A0
 * Callers:
 *     PopSetSystemState @ 0x1401819B4 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1401819F8 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x14018275C (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x140670540 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140747214 (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x14013B3E4 (PopTraceSystemIdleTimeReset.c)
 *     PopHandleSystemIdleReset @ 0x140300028 (PopHandleSystemIdleReset.c)
 */

__int64 PopResetIdleTime()
{
  KeGetCurrentIrql();
  if ( PopPlatformAoAc )
    return PopHandleSystemIdleReset();
  PopIsAboutToSleep = 0;
  dword_140442F08 = 0;
  byte_140442F50 = 0;
  dword_140442F40 = 0;
  return PopTraceSystemIdleTimeReset();
}
