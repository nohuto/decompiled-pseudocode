/*
 * XREFs of PopResetIdleTime @ 0x140138CA0
 * Callers:
 *     PopSetSystemState @ 0x1401778B4 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x1401778F8 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1401787EC (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1405B14E0 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14071D85C (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x140138D08 (PopTraceSystemIdleTimeReset.c)
 *     PopQueueWorkItem @ 0x140138DC8 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopResetIdleTime(unsigned int a1)
{
  KeGetCurrentIrql();
  if ( !PopPlatformAoAc || a1 - 3 > 1 )
  {
    dword_1404186C8 = 0;
    byte_140418710 = 0;
    PopQueueWorkItem(&PopSIdleUpdateNotificationWorkItem, 1LL);
  }
  if ( !PopPlatformAoAc )
    PopIsAboutToSleep = 0;
  dword_140418700 = 0;
  return PopTraceSystemIdleTimeReset(a1);
}
