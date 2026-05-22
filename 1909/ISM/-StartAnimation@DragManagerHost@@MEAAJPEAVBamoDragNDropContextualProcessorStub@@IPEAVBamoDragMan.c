/*
 * XREFs of ?StartAnimation@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x180068FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006C8C0 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall DragManagerHost::StartAnimation(
        DragNDropProcessor **this,
        struct BamoDragNDropContextualProcessorStub *a2,
        unsigned int a3,
        struct BamoDragManagerClientProxy *a4)
{
  DragNDropProcessor::StartAnimation(this[7], a3, a4);
  return 0LL;
}
