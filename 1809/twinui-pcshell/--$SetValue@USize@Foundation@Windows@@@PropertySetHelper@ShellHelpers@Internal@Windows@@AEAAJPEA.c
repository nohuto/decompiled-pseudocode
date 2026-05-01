/*
 * XREFs of ??$SetValue@USize@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJUSize@63@PEAPEAUIInspectable@@@Z1@Z @ 0x180071548
 * Callers:
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076970 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??$As@UIPropertyValue@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180025F94 (--$As@UIPropertyValue@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x180027474 (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@4@@Z @ 0x1800718E4 (-GetPropertyValueFactory@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAUIPropertyV.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BMA@AA @ 0x18009DFAC (--_9IPropertyValue@Foundation@Windows@@$BMA@AA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<Windows::Foundation::Size>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        __int64 a4)
{
  Windows::Internal::ShellHelpers::PropertySetHelper *v7; // rcx
  int PropertyValueFactory; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  struct Windows::Foundation::IPropertyValueStatics *v13; // [rsp+20h] [rbp-30h] BYREF
  struct Windows::Foundation::IPropertyValue *v14[3]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF

  v16 = a3;
  v14[1] = (struct Windows::Foundation::IPropertyValue *)-2LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  PropertyValueFactory = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropertyValueFactory(v7, &v13);
  v9 = PropertyValueFactory;
  if ( PropertyValueFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)PropertyValueFactory);
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v10 =  Windows::Foundation::IPropertyValue::`vcall'{192,{flat}}(v13, a4, &v16);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v10);
    }
    else
    {
      v14[0] = 0LL;
      v11 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValue>(&v16, (__int64 *)v14);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
          (const char *)(unsigned int)v11);
      }
      else
      {
        v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetPropVal(this, a2, v14[0]);
        if ( v9 >= 0 )
          v9 = 0;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v9;
}
