/*
 * XREFs of ??$MakeAndInitialize@VCScrollViewer@@V1@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollViewer@@AEBU_MARGINS@@AEANAEAIAEAW4ScrollViewerFlags@@AEAPEAUIMultitaskingViewElement@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x18039BEC8
 * Callers:
 *     ?CScrollViewer_CreateInstance@@YAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x18039C404 (-CScrollViewer_CreateInstance@@YAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElem.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z @ 0x1801272CC (-Attach@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z.c)
 *     ??0CScrollViewer@@QEAA@XZ @ 0x18039C320 (--0CScrollViewer@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x18039C8A8 (-RuntimeClassInitialize@CScrollViewer@@QEAAJAEBU_MARGINS@@NIW4ScrollViewerFlags@@PEAUIMultitaski.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CScrollViewer,CScrollViewer,_MARGINS const &,double &,unsigned int &,enum ScrollViewerFlags &,IMultitaskingViewElement * &,ISwitchThumbnailFactory * &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  CScrollViewer *v10; // rax
  int v11; // edi
  CScrollViewer *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CScrollViewer *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CScrollViewer::CScrollViewer(v10);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IObjectArray>::Attach(&v17, (__int64)v12);
    v13 = *a4;
    v14 = v17;
    v11 = CScrollViewer::RuntimeClassInitialize(v17, a2, v15, v13, *a5, *a6, *a7);
    if ( v11 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
