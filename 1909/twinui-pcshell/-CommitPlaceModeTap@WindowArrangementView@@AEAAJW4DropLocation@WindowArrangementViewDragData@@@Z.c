/*
 * XREFs of ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803E0974
 * Callers:
 *     ?CommitCurrentPlacement@WindowArrangementView@@UEAAJXZ @ 0x1803E0910 (-CommitCurrentPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x1803E21C0 (-PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x1803E08E0 (-Cleanup@WindowArrangementView@@AEAAXXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x1803E1320 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803E22B8 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1803E33B0 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::CommitPlaceModeTap(_BYTE *a1, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1[314] )
  {
    a1[314] = 1;
    v3 = WindowArrangementView::ProcessDrop();
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x257,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)v3);
      WindowArrangementView::Hide((WindowArrangementView *)(a1 + 24), 1);
      WindowArrangementView::Cleanup((WindowArrangementView *)a1);
      TabletModeTelemetry::TMAppArrange::Stop(a1 + 328, a2);
      return v4;
    }
    WindowArrangementView::Hide((WindowArrangementView *)(a1 + 24), 1);
    WindowArrangementView::Cleanup((WindowArrangementView *)a1);
    TabletModeTelemetry::TMAppArrange::Stop(a1 + 328, a2);
  }
  return 0LL;
}
