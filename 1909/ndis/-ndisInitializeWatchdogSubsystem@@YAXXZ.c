/*
 * XREFs of ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C0144078
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00FC4EC (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void ndisInitializeWatchdogSubsystem(void)
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_ndisWatchdogLock);
  qword_1C00E6960 = (__int64)&g_ndisWatchdogList;
  g_ndisWatchdogList.Flink = &g_ndisWatchdogList;
}
