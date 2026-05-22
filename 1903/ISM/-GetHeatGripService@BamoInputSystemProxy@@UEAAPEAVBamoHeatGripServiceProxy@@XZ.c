/*
 * XREFs of ?GetHeatGripService@BamoInputSystemProxy@@UEAAPEAVBamoHeatGripServiceProxy@@XZ @ 0x18005D910
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180065128 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoHeatGripServiceProxy *__fastcall BamoInputSystemProxy::GetHeatGripService(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoHeatGripServiceProxy *)*((_QWORD *)this + 8);
}
