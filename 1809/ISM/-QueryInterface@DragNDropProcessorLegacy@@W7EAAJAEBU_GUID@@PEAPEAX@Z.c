/*
 * XREFs of ?QueryInterface@DragNDropProcessorLegacy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C9D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragNDropProcessorLegacy::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        DragNDropProcessorLegacy **a3)
{
  return DragNDropProcessorLegacy::QueryInterface((DragNDropProcessorLegacy *)(a1 - 8), a2, a3);
}
