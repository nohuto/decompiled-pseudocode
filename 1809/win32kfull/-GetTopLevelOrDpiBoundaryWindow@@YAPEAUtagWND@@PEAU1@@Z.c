/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004134C
 * Callers:
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C0041428 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C01159CC (LogicalToPhysicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C011E6C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01D26B8 (PhysicalToLogicalInPlacePointWithParent.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C011190C (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(struct tagWND *a1)
{
  struct tagWND *v1; // rdi
  struct tagWND **v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int16 WindowCoordinateSpaceDpi; // bx

  v1 = a1;
  if ( !gfDwmChildWindowDpiIsolationEnabled )
    return (struct tagWND *)GetTopLevelWindow(a1);
  if ( a1 )
  {
    do
    {
      v2 = (struct tagWND **)((char *)v1 + 80);
      v3 = *((_QWORD *)v1 + 10);
      if ( v3 )
      {
        v4 = *((_QWORD *)v1 + 3);
        v5 = 0LL;
        if ( v4 )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( v6 )
            v5 = *(_QWORD *)(v6 + 24);
        }
        if ( v3 == v5 )
          break;
        v7 = *((_QWORD *)v1 + 3);
        v8 = 0LL;
        if ( v7 )
        {
          v9 = *(_QWORD *)(v7 + 8);
          if ( v9 )
            v8 = *(_QWORD *)(v9 + 24);
        }
        if ( v3 != v8
          && (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)v1 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
        {
          WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v1);
          if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*v2) )
            break;
        }
      }
      v1 = *v2;
    }
    while ( *v2 );
  }
  return v1;
}
