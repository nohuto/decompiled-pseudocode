/*
 * XREFs of ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETSIZE@@@Z @ 0x1801B7BDC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800A5B60 (-SetSize@CVisual@@QEAAXMM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetSize(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETSIZE *a3)
{
  CVisual::SetSize(this, *((double *)a3 + 1), *((double *)a3 + 2));
  return 0LL;
}
