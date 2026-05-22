/*
 * XREFs of ?GetControllerNavigationManager@BamoInputSystemProxy@@UEAAPEAVBamoControllerNavigationManagerProxy@@XZ @ 0x18005D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180065128 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoControllerNavigationManagerProxy *__fastcall BamoInputSystemProxy::GetControllerNavigationManager(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoControllerNavigationManagerProxy *)*((_QWORD *)this + 11);
}
