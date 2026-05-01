/*
 * XREFs of ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035B5C4
 * Callers:
 *     ?CommitCurrentPlacement@WindowArrangementView@@UEAAJXZ @ 0x18035B560 (-CommitCurrentPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z @ 0x18035CE00 (-PlaceModeTap@WindowArrangementView@@UEAAJUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x18035B530 (-Cleanup@WindowArrangementView@@AEAAXXZ.c)
 *     ?Hide@WindowArrangementView@@UEAAX_N@Z @ 0x18035BF60 (-Hide@WindowArrangementView@@UEAAX_N@Z.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035CEF4 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035DFC0 (-Stop@TMAppArrange@TabletModeTelemetry@@QEAAXW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 */

__int64 __fastcall WindowArrangementView::CommitPlaceModeTap(_BYTE *a1, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1[306] )
  {
    a1[306] = 1;
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
      TabletModeTelemetry::TMAppArrange::Stop(a1 + 320, a2);
      return v4;
    }
    WindowArrangementView::Hide((WindowArrangementView *)(a1 + 24), 1);
    WindowArrangementView::Cleanup((WindowArrangementView *)a1);
    TabletModeTelemetry::TMAppArrange::Stop(a1 + 320, a2);
  }
  return 0LL;
}
