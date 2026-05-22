/*
 * XREFs of ?Thunk_CancelDrag_0@?$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEAXPEAPEAX@Z @ 0x1800C9D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragNDropMessageCall::IDragNDrop_Receive<DragNDropProcessorLegacy>::Thunk_CancelDrag_0(
        DragNDropProcessorLegacy *a1,
        __int64 a2)
{
  return DragNDropProcessorLegacy::CancelDrag(a1, *(struct tagMsgRoutingInfo **)a2, **(_DWORD **)(a2 + 8));
}
