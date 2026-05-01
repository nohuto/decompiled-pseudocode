/*
 * XREFs of ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035B678
 * Callers:
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035CEF4 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x18035D140 (-QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrange.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x18035EAB4 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowArrangementView::DropLocationToArrangementAction(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 0:
      return 1LL;
    case 1:
      return 2LL;
    case 2:
      return 3LL;
    case 3:
      return 4LL;
  }
  result = 5LL;
  if ( a2 == 6 )
    return 6LL;
  return result;
}
