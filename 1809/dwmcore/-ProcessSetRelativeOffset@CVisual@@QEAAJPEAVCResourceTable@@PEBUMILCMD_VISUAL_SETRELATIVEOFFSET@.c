/*
 * XREFs of ?ProcessSetRelativeOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRELATIVEOFFSET@@@Z @ 0x1801B7B7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18009EC60 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRelativeOffset(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETRELATIVEOFFSET *a3)
{
  CVisual::SetRelativeOffset(this, *((double *)a3 + 1), *((double *)a3 + 2), *((double *)a3 + 3));
  return 0LL;
}
