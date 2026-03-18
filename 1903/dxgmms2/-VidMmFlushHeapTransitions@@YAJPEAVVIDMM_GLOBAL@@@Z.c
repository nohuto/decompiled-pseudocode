/*
 * XREFs of ?VidMmFlushHeapTransitions@@YAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0014C90
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0081418 (-FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall VidMmFlushHeapTransitions(struct VIDMM_GLOBAL *a1)
{
  return VIDMM_GLOBAL::FlushHeapTransitions(a1);
}
