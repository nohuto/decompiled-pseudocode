/*
 * XREFs of ?GetSystemCursorController@BamoInputSystemProxy@@UEAAPEAVBamoSystemCursorControllerProxy@@XZ @ 0x18005DBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180065128 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoSystemCursorControllerProxy *__fastcall BamoInputSystemProxy::GetSystemCursorController(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoSystemCursorControllerProxy *)*((_QWORD *)this + 13);
}
