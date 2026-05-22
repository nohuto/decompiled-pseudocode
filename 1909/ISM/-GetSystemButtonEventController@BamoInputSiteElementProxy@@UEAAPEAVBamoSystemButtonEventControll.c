/*
 * XREFs of ?GetSystemButtonEventController@BamoInputSiteElementProxy@@UEAAPEAVBamoSystemButtonEventControllerProxy@@XZ @ 0x18002F430
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180064EC8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoSystemButtonEventControllerProxy *__fastcall BamoInputSiteElementProxy::GetSystemButtonEventController(
        BamoInputSiteElementProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoSystemButtonEventControllerProxy *)*((_QWORD *)this + 18);
}
