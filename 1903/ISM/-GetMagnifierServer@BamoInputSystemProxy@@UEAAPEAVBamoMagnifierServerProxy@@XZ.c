/*
 * XREFs of ?GetMagnifierServer@BamoInputSystemProxy@@UEAAPEAVBamoMagnifierServerProxy@@XZ @ 0x18005D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180065128 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoMagnifierServerProxy *__fastcall BamoInputSystemProxy::GetMagnifierServer(BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoMagnifierServerProxy *)*((_QWORD *)this + 7);
}
