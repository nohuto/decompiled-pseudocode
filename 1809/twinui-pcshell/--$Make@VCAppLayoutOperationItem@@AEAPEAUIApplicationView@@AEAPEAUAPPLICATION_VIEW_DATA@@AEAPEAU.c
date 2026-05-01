/*
 * XREFs of ??$Make@VCAppLayoutOperationItem@@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@AEAPEAU3@AEAUCAppLayoutOperationItemConstructorRects@1@AEAHAEAHAEAW4APP_LAYOUT_ANIMATION_TYPE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCAppLayoutOperationItem@@@12@AEAPEAUIApplicationView@@AEAPEAUAPPLICATION_VIEW_DATA@@1AEAUCAppLayoutOperationItemConstructorRects@CAppLayoutOperationItem@@AEAH3AEAW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1803BE1A8
 * Callers:
 *     ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BE60C (-s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CAppLayoutOperationItem@@QEAA@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1AEBUCAppLayoutOperationItemConstructorRects@0@HHW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1803BE264 (--0CAppLayoutOperationItem@@QEAA@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1AEBUCAppLayou.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<CAppLayoutOperationItem,IApplicationView * &,APPLICATION_VIEW_DATA * &,APPLICATION_VIEW_DATA * &,CAppLayoutOperationItem::CAppLayoutOperationItemConstructorRects &,int &,int &,enum APP_LAYOUT_ANIMATION_TYPE &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  void *v12; // rax
  __int64 v13; // rdi

  *a1 = 0LL;
  v12 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = CAppLayoutOperationItem::CAppLayoutOperationItem(v12, *a2, *a3, *a4, a5, *a6, *a7, *a8);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v13;
  }
  return a1;
}
