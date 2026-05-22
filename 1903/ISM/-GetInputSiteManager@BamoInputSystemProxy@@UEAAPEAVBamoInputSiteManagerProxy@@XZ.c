/*
 * XREFs of ?GetInputSiteManager@BamoInputSystemProxy@@UEAAPEAVBamoInputSiteManagerProxy@@XZ @ 0x18005DA20
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180065128 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoInputSiteManagerProxy *__fastcall BamoInputSystemProxy::GetInputSiteManager(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoInputSiteManagerProxy *)*((_QWORD *)this + 10);
}
