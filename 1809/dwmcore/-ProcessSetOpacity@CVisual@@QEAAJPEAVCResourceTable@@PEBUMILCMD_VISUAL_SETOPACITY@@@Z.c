/*
 * XREFs of ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPACITY@@@Z @ 0x1801B7AC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x1800A2818 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetOpacity(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETOPACITY *a3)
{
  CVisual::SetOpacity(this, *((float *)a3 + 2));
  return 0LL;
}
