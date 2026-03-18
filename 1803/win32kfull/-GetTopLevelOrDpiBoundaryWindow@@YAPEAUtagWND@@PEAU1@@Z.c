/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F95BC
 * Callers:
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F9398 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C00F9564 (PhysicalToLogicalInPlacePointWithParent.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C01AF81C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C01AF920 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 * Callees:
 *     IsChildWindowDpiBoundary @ 0x1C002A5A8 (IsChildWindowDpiBoundary.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
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
      v1 = (struct tagWND *)*((_QWORD *)v1 + 10);
    }
    while ( v1 );
  }
  return v1;
}
