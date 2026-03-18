/*
 * XREFs of ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1801B7A8C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1800A3D0C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetOffset(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETOFFSET *a3)
{
  CVisual::SetOffset(this, *((double *)a3 + 1), *((double *)a3 + 2), *((double *)a3 + 3));
  return 0LL;
}
