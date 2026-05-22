/*
 * XREFs of ?GetPenEventsDispatcher@BamoInputSystemProxy@@UEAAPEAVBamoPenEventsDispatcherProxy@@XZ @ 0x18002E770
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180065128 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoPenEventsDispatcherProxy *__fastcall BamoInputSystemProxy::GetPenEventsDispatcher(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoPenEventsDispatcherProxy *)*((_QWORD *)this + 17);
}
