/*
 * XREFs of ?GetDragNDropContextualProcessor@BamoInputSystemProxy@@UEAAPEAVBamoDragNDropContextualProcessorProxy@@XZ @ 0x18005D800
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x180065128 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

struct BamoDragNDropContextualProcessorProxy *__fastcall BamoInputSystemProxy::GetDragNDropContextualProcessor(
        BamoInputSystemProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  return (struct BamoDragNDropContextualProcessorProxy *)*((_QWORD *)this + 5);
}
