/*
 * XREFs of ?StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@I_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180069380
 * Callers:
 *     <none>
 * Callees:
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CF2C (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall DragManagerHost::StartDrag(
        DragNDropProcessor **this,
        struct BamoDragNDropContextualProcessorStub *a2,
        unsigned int a3,
        unsigned __int64 a4,
        struct BamoDragManagerClientProxy *a5)
{
  DragNDropProcessor::StartDrag(this[7], a3, a4, a5);
  return 0LL;
}
