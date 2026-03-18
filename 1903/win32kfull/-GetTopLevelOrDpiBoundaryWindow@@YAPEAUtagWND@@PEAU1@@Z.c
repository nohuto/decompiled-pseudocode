/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00ED5E8
 * Callers:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C00C43CC (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00ECE48 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00ED568 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00ED5A8 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C011E0B0 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E72A0 (PhysicalToLogicalInPlacePointWithParent.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C00CDE50 (IsChildWindowDpiBoundary.c)
 */

struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rbx

  v1 = a1;
  if ( !gfDwmChildWindowDpiIsolationEnabled )
    return (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( a1 )
  {
    do
    {
      if ( (unsigned int)IsTopLevelWindow((__int64)v1) )
        break;
      if ( (unsigned int)IsChildWindowDpiBoundary(v1) )
        break;
      v1 = (struct tagWND *)*((_QWORD *)v1 + 13);
    }
    while ( v1 );
  }
  return v1;
}
