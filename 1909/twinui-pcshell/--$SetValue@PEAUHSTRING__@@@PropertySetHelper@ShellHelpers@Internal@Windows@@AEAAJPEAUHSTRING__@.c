/*
 * XREFs of ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x180062270
 * Callers:
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180040F80 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x18006C598 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     ?Relaunch@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@@Z @ 0x18009F1EC (-Relaunch@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801B4004 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1801BCD20 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ @ 0x1801F2A70 (-InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803AF96C (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18002447C (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIPropertyValue@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180062558 (--$As@UIPropertyValue@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x1800628B8 (-GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyV.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@$BJA@AA @ 0x1800D4130 (--_9type@-$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v7; // rcx
  int PropertyValueFactory; // eax
  int v9; // ebx
  struct Windows::Foundation::IPropertyValueStatics *v10; // rbx
  int v11; // eax
  int v12; // eax
  struct Windows::Foundation::IPropertyValueStatics *v14; // [rsp+20h] [rbp-20h] BYREF
  struct Windows::Foundation::IPropertyValue *v15[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF

  v17 = a3;
  v15[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropertyValueFactory(v7, &v14);
  v9 = PropertyValueFactory;
  if ( PropertyValueFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)PropertyValueFactory,
      (int)v14);
  }
  else
  {
    v17 = 0LL;
    v10 = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v11 =  winrt::impl::abi<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::type::`vcall'{144,{flat}}(
            v10,
            a4);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v11,
        (int)v14);
    }
    else
    {
      v15[0] = 0LL;
      v12 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValue>(&v17, v15);
      v9 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (unsigned int)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v12,
          (int)v14);
      }
      else
      {
        v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v15[0]);
        if ( v9 >= 0 )
          v9 = 0;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v9;
}
