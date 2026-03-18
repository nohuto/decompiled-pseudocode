/*
 * XREFs of ?ADAPTER_RENDER_DdiNotifyFocusPresent@@YAJPEAVADAPTER_RENDER@@@Z @ 0x1C003DE20
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0037B30 (-DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiNotifyFocusPresent(struct ADAPTER_RENDER *a1, __int64 a2, const GUID *a3)
{
  return ADAPTER_RENDER::DdiNotifyFocusPresent(a1, a2, a3);
}
