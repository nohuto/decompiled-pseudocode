/*
 * XREFs of PopResetIdleTime @ 0x140138BA0
 * Callers:
 *     PopSetSystemState @ 0x1401777B4 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1401777F8 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1401786EC (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1405B04E0 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14071C5BC (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x140138C08 (PopTraceSystemIdleTimeReset.c)
 *     PopQueueWorkItem @ 0x140138CC8 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopResetIdleTime(unsigned int a1)
{
  KeGetCurrentIrql();
  if ( !PopPlatformAoAc || a1 - 3 > 1 )
  {
    dword_140417648 = 0;
    byte_140417690 = 0;
    PopQueueWorkItem(&PopSIdleUpdateNotificationWorkItem, 1LL);
  }
  if ( !PopPlatformAoAc )
    PopIsAboutToSleep = 0;
  dword_140417680 = 0;
  return PopTraceSystemIdleTimeReset(a1);
}
