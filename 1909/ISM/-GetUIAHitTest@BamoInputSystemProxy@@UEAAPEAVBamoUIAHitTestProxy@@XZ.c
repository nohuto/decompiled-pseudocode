/*
 * XREFs of ?GetUIAHitTest@BamoInputSystemProxy@@UEAAPEAVBamoUIAHitTestProxy@@XZ @ 0x18005DA00
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180064EC8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoUIAHitTestProxy *__fastcall BamoInputSystemProxy::GetUIAHitTest(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoUIAHitTestProxy *)*((_QWORD *)this + 15);
}
