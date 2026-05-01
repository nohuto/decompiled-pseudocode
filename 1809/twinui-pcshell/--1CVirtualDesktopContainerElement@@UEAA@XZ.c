/*
 * XREFs of ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x180320D44
 * Callers:
 *     ??_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z @ 0x180320EA0 (--_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180061030 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease @ 0x180091624 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister @ 0x180276574 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 */

void __fastcall CVirtualDesktopContainerElement::~CVirtualDesktopContainerElement(
        CVirtualDesktopContainerElement *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rbx
  void *v4; // rcx
  unsigned __int64 v5; // rbx

  v2 = (void *)*((_QWORD *)this + 105);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 106) )
    {
      do
        Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 105) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 106) );
      v2 = (void *)*((_QWORD *)this + 105);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 105) = 0LL;
  }
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 108) = 0LL;
  v4 = (void *)*((_QWORD *)this + 99);
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_QWORD *)this + 100) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 99) + 8 * v5++));
      while ( v5 < *((_QWORD *)this + 100) );
      v4 = (void *)*((_QWORD *)this + 99);
    }
    CoTaskMemFree(v4);
    *((_QWORD *)this + 99) = 0LL;
  }
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister((__int64)this + 280);
  Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_____ptr64______ptr64__::_2_::CompletionDelegate_::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  *((_DWORD *)this + 59) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
