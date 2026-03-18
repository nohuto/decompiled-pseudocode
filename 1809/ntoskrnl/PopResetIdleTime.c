/*
 * XREFs of PopResetIdleTime @ 0x140138B80
 * Callers:
 *     PopSetSystemState @ 0x140177794 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1401777D8 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1401786CC (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1405B04E0 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14071C5DC (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x140138BE8 (PopTraceSystemIdleTimeReset.c)
 *     PopQueueWorkItem @ 0x140138CA8 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopResetIdleTime(unsigned int a1)
{
  KeGetCurrentIrql();
  if ( !PopPlatformAoAc || a1 - 3 > 1 )
  {
    dword_140417628 = 0;
    byte_140417670 = 0;
    PopQueueWorkItem(&PopSIdleUpdateNotificationWorkItem, 1LL);
  }
  if ( !PopPlatformAoAc )
    PopIsAboutToSleep = 0;
  dword_140417660 = 0;
  return PopTraceSystemIdleTimeReset(a1);
}
