/*
 * XREFs of ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C0164F4C
 * Callers:
 *     xxxQueryInformationThread @ 0x1C000D498 (xxxQueryInformationThread.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007DC44 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *__fastcall UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock(
        UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *this)
{
  AutoSharedPushLock::AutoSharedPushLock(this, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  return this;
}
