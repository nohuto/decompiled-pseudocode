/*
 * XREFs of ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180062184
 * Callers:
 *     ?RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z @ 0x180062124 (-RuntimeClassInitialize@CLaunchActivatedEventArgs@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180217410 (-RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWr.c)
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x18022AA50 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 *     _lambda_53b5c290c68dcef29a9df5086c06bf0e_::operator() @ 0x18024F498 (_lambda_53b5c290c68dcef29a9df5086c06bf0e_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::Initialize(HSTRING *this, HSTRING *a2)
{
  HRESULT v3; // ebx
  HSTRING v4; // rcx
  HSTRING newString; // [rsp+30h] [rbp+8h] BYREF

  v3 = WindowsDuplicateString(*a2, &newString);
  if ( v3 >= 0 )
  {
    v4 = *this;
    *this = newString;
    WindowsDeleteString(v4);
  }
  return (unsigned int)v3;
}
