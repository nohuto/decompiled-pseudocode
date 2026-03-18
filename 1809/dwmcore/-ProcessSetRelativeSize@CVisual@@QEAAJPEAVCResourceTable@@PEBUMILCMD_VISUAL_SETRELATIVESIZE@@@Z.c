/*
 * XREFs of ?ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRELATIVESIZE@@@Z @ 0x1801B7BB0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18009FD28 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRelativeSize(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETRELATIVESIZE *a3)
{
  CVisual::SetRelativeSize(this, *((double *)a3 + 1), *((double *)a3 + 2));
  return 0LL;
}
