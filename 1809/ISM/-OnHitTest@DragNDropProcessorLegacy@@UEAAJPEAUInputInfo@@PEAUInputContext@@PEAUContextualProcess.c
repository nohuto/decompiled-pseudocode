/*
 * XREFs of ?OnHitTest@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800C9000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragNDropProcessorLegacy::OnHitTest(
        DragNDropProcessorLegacy *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  *(_DWORD *)a4 = (*(_DWORD *)a2 & 0x1A) != 0 ? 3 : 0;
  return 0LL;
}
