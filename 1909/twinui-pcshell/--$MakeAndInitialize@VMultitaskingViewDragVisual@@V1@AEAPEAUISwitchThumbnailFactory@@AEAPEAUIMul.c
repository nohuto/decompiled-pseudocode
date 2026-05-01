/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEBUCSize@Geometry@@AEAN@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewDragVisual@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEBUCSize@Geometry@@AEAN@Z @ 0x1803A4218
 * Callers:
 *     ?MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@NAEBU_GUID@@PEAPEAX@Z @ 0x1803A4520 (-MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingVie.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z @ 0x1801272CC (-Attach@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@QEAAXPEAUIObjectArray@@@Z.c)
 *     ??0MultitaskingViewDragVisual@@QEAA@XZ @ 0x1803A42EC (--0MultitaskingViewDragVisual@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@N@Z @ 0x1803A4648 (-RuntimeClassInitialize@MultitaskingViewDragVisual@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMulti.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewDragVisual,MultitaskingViewDragVisual,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,Geometry::CSize const &,double &>(
        MultitaskingViewDragVisual **a1,
        struct ISwitchThumbnailFactory **a2,
        struct IMultitaskingViewElement **a3,
        struct IMultitaskingViewElement **a4,
        struct Geometry::CSize *a5,
        double *a6)
{
  MultitaskingViewDragVisual *v10; // rax
  int v11; // edi
  MultitaskingViewDragVisual *v12; // rax
  struct IMultitaskingViewElement *v13; // r9
  MultitaskingViewDragVisual *v14; // rbx
  MultitaskingViewDragVisual *v16; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (MultitaskingViewDragVisual *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = MultitaskingViewDragVisual::MultitaskingViewDragVisual(v10);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IObjectArray>::Attach((__int64 *)&v16, (__int64)v12);
    v13 = *a4;
    v14 = v16;
    v11 = MultitaskingViewDragVisual::RuntimeClassInitialize(v16, *a2, *a3, v13, a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(MultitaskingViewDragVisual *))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
