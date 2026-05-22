/*
 * XREFs of ?GetInputObserverManager@BamoInputSystemProxy@@UEAAPEAVBamoInputObserverManagerProxy@@XZ @ 0x18005D790
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180064EC8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoInputObserverManagerProxy *__fastcall BamoInputSystemProxy::GetInputObserverManager(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoInputObserverManagerProxy *)*((_QWORD *)this + 14);
}
