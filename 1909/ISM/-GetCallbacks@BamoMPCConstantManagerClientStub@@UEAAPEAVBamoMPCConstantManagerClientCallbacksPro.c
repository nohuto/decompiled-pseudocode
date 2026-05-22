/*
 * XREFs of ?GetCallbacks@BamoMPCConstantManagerClientStub@@UEAAPEAVBamoMPCConstantManagerClientCallbacksProxy@@XZ @ 0x180089620
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180064EC8 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoMPCConstantManagerClientCallbacksProxy *__fastcall BamoMPCConstantManagerClientStub::GetCallbacks(
        BamoMPCConstantManagerClientStub *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 24LL));
  return (struct BamoMPCConstantManagerClientCallbacksProxy *)*((_QWORD *)this + 9);
}
