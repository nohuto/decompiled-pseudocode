/*
 * XREFs of ?GetInputDeliveryServer@BamoInputSystemProxy@@UEAAPEAVBamoInputDeliveryServerProxy@@XZ @ 0x18005D760
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180064EC8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoInputDeliveryServerProxy *__fastcall BamoInputSystemProxy::GetInputDeliveryServer(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoInputDeliveryServerProxy *)*((_QWORD *)this + 9);
}
