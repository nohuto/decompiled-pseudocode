/*
 * XREFs of ??$MakeAndInitialize@VCSwitchItemGrid@@V1@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVCSwitchItemGrid@@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Z @ 0x180307A80
 * Callers:
 *     ?CSwitchItemGrid_CreateInstance@@YAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x1803080DC (-CSwitchItemGrid_CreateInstance@@YAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CSwitchItemGrid@@QEAA@XZ @ 0x180307CD0 (--0CSwitchItemGrid@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@@Z @ 0x180309414 (-RuntimeClassInitialize@CSwitchItemGrid@@QEAAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementF.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemGrid,CSwitchItemGrid,GridMetrics const &,Geometry::CSize const &,IElementFactory * &,ISwitchThumbnailFactory * &,ISwitchItemController * &,IObservableObjectArray * &>(
        CSwitchItemGrid **a1,
        const struct GridMetrics *a2,
        const struct Geometry::CSize *a3,
        struct IElementFactory **a4,
        struct ISwitchThumbnailFactory **a5,
        struct ISwitchItemController **a6,
        struct IObservableObjectArray **a7)
{
  CSwitchItemGrid *v11; // rax
  int v12; // edi
  CSwitchItemGrid *v13; // rax
  struct IElementFactory *v14; // r9
  CSwitchItemGrid *v15; // rbx
  CSwitchItemGrid *v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CSwitchItemGrid *)operator new(0x3B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = CSwitchItemGrid::CSwitchItemGrid(v11);
    v14 = *a4;
    v15 = v13;
    v17 = v13;
    v12 = CSwitchItemGrid::RuntimeClassInitialize(v13, a2, a3, v14, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v15 )
        (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v15 + 8LL))(v15);
      *a1 = v15;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
