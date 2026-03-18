/*
 * XREFs of ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0014DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0129740 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 */

void __fastcall ADAPTER_RENDER_NotifyDeferredDestructionComplete(
        struct ADAPTER_RENDER *a1,
        struct DXGTERMINATIONTRACKER *a2)
{
  ADAPTER_RENDER::NotifyDeferredDestructionComplete(a1, a2);
}
