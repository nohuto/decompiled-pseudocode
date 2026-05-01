/*
 * XREFs of ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x18035B530
 * Callers:
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18035B5C4 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18035B920 (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall WindowArrangementView::Cleanup(WindowArrangementView *this)
{
  __int64 *v1; // rbx
  IUnknown *v2; // rcx

  v1 = (__int64 *)((char *)this + 96);
  v2 = (IUnknown *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    IUnknown_SetSite(v2, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  }
}
