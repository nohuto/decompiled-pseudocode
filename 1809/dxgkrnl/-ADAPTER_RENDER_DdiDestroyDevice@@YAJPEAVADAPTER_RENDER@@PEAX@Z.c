/*
 * XREFs of ?ADAPTER_RENDER_DdiDestroyDevice@@YAJPEAVADAPTER_RENDER@@PEAX@Z @ 0x1C0037940
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00EED80 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiDestroyDevice(struct ADAPTER_RENDER *a1, void *a2)
{
  return ADAPTER_RENDER::DdiDestroyDevice(a1, a2);
}
