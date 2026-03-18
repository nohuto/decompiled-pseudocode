/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CC1C8
 * Callers:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C0065A9C (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00CBA28 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00CC148 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00CC188 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C00F8670 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E7120 (PhysicalToLogicalInPlacePointWithParent.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F520 (IsChildWindowDpiBoundary.c)
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
