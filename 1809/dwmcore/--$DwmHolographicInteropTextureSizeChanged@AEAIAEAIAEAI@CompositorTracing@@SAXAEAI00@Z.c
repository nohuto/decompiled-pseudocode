/*
 * XREFs of ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x18020CFD4
 * Callers:
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x18020E390 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICI.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800785A0 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800785C4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicInteropTextureSizeChanged_@CompositorTracing@@QEAAXIII@Z @ 0x18020D8FC (-DwmHolographicInteropTextureSizeChanged_@CompositorTracing@@QEAAXIII@Z.c)
 */

void __fastcall CompositorTracing::DwmHolographicInteropTextureSizeChanged<unsigned int &,unsigned int &,unsigned int &>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v6; // rcx
  CompositorTracing *v7; // rcx

  if ( CompositorTracing::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v6,
      (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::DwmHolographicInteropTextureSizeChanged_(v7, *a1, *a2, *a3);
  }
}
