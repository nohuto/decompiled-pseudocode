/*
 * XREFs of ?OnSpatialNavigationCompleted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialNavigationCompletedEventArgs@3456@@Z @ 0x180050BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z @ 0x180051E0C (-GestureRecognizer_GestureDetected_@ISMTracing@@QEAAXPEBG@Z.c)
 */

__int64 __fastcall MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCompleted(
        MPCSpatialGestureRecognizerHandler *this,
        struct Windows::UI::Input::Spatial::ISpatialGestureRecognizer *a2,
        struct Windows::UI::Input::Spatial::ISpatialNavigationCompletedEventArgs *a3)
{
  int v4; // ebx
  _DWORD *v5; // rdx
  ISMTracing *v6; // rcx
  const unsigned __int16 *v7; // rdx
  __int64 result; // rax

  *(_DWORD *)(*((_QWORD *)this + 13) + 1096LL) = 2;
  v4 = *((_DWORD *)this + 42);
  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 == 1 )
  {
    if ( v5 && *v5 )
    {
      ISMTracing::Instance();
      v7 = L"ScrollCompleted";
LABEL_8:
      ISMTracing::GestureRecognizer_GestureDetected_(v6, v7);
    }
  }
  else if ( v5 && *v5 )
  {
    ISMTracing::Instance();
    v7 = L"ZoomCompleted";
    goto LABEL_8;
  }
  result = 0LL;
  *((_BYTE *)this + 172) = 0;
  return result;
}
