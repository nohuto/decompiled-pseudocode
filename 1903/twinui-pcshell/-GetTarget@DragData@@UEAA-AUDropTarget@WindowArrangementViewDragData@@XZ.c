/*
 * XREFs of ?GetTarget@DragData@@UEAA?AUDropTarget@WindowArrangementViewDragData@@XZ @ 0x180085DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DragData::GetTarget(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 + 88);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 72);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
