/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18040FA90
 * Callers:
 *     ?GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1A80 (-GetIids@CLaunchActivatedEventArgs@@W7EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1A90 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventAr.c)
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1AA0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCAct_ea_1800C1AA0.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1AB0 (-GetIids@CLaunchActivatedEventArgs@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WII@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1AC0 (-GetIids@CLaunchActivatedEventArgs@@WII@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WJA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1AD0 (-GetIids@CLaunchActivatedEventArgs@@WJA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WMA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1AE0 (-GetIids@CLaunchActivatedEventArgs@@WMA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WNI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1AF0 (-GetIids@CLaunchActivatedEventArgs@@WNI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WOA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1B00 (-GetIids@CLaunchActivatedEventArgs@@WOA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CLaunchActivatedEventArgs@@WOI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C1B10 (-GetIids@CLaunchActivatedEventArgs@@WOI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@@Details@23@UIWeakReferenceSource@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@89Windows@@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18040F9D0 (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U-$ImplementsMa.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  LPVOID v7; // r8
  __int64 v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v7 = CoTaskMemAlloc(0x80uLL);
  if ( v7 )
  {
    v10 = 0;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<CActivatedEventArgsWithPrelaunchAndViewIdBase>,IWeakReferenceSource,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::FillArrayWithIid(
      v6,
      &v10,
      (__int64)v7);
    *a2 = 8;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
