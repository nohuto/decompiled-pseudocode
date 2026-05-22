/*
 * XREFs of ?OnSpatialNavigationCanceled@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCanceledEventArgs@3456@@Z @ 0x180090850
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z @ 0x18008EC58 (--$GestureRecognizer_GestureDetected@AEAY0O@$$CBG@ISMTracing@@SAXAEAY0O@$$CBG@Z.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x18009010C (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCanceled(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationCanceledEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  ISMTracing *v6; // rcx

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    *(_DWORD *)(v3 + 656) = 2;
  if ( *((_DWORD *)this + 42) == 1 )
  {
    if ( ISMTracing::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<ISMTracing>::get(v5, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::GestureRecognizer_GestureDetected_(v6, L"ScrollCanceled");
    }
  }
  else
  {
    ISMTracing::GestureRecognizer_GestureDetected<unsigned short const (&)[14]>(L"ZoomCanceled");
  }
  *((_BYTE *)this + 172) = 0;
  return 0LL;
}
