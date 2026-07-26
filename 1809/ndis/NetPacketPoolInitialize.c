/*
 * XREFs of NetPacketPoolInitialize @ 0x1C0129640
 * Callers:
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00B4378 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ?RebalanceExtensions@@YAXXZ @ 0x1C00D1A74 (-RebalanceExtensions@@YAXXZ.c)
 */

void NetPacketPoolInitialize()
{
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C00A1EB8);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_1C00A1EC0);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  qword_1C00A1E98 = 0LL;
  g_NetPacketStateUpdateWorkItem.List.Flink = 0LL;
  qword_1C00A1E90 = (__int64)NetPacketStateUpdateWorker;
  RebalanceExtensions();
}
