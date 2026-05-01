/*
 * XREFs of ?SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x180309670
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x180304F70 (-SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ??$As@UIScrollViewer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803078B8 (--$As@UIScrollViewer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

void __fastcall CSwitchItemGrid::SetChildFocus(CSwitchItemGrid *this, struct IUnknown *a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  CMultitaskingViewElementBase::SetChildFocus(this, a2);
  v6 = 0LL;
  if ( a2 && *((_QWORD *)this + 10) )
  {
    v4 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollViewer>((_QWORD *)this + 10, &v6);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v6 + 24LL))(v6, a2);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        308LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
}
