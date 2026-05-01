/*
 * XREFs of ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x18004308C
 * Callers:
 *     ?DimStart@CStartExperienceManager@@UEAAJXZ @ 0x180082A40 (-DimStart@CStartExperienceManager@@UEAAJXZ.c)
 *     ?UnDimStart@CStartExperienceManager@@UEAAJXZ @ 0x180082A80 (-UnDimStart@CStartExperienceManager@@UEAAJXZ.c)
 *     ?OnIdleStateChanged@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x1801989B0 (-OnIdleStateChanged@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18002CE60 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003AD54 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003DBCC (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::ReactivateHelper(
        CStartExperienceManager *this,
        const unsigned __int16 *a2,
        char a3)
{
  int v5; // eax
  int v6; // ebx
  HSTRING_HEADER *v7; // rax
  __int64 v8; // r8
  int v9; // eax
  HSTRING_HEADER *v10; // rax
  int v12; // [rsp+28h] [rbp-29h]
  HSTRING v13; // [rsp+48h] [rbp-9h] BYREF
  HSTRING v14; // [rsp+50h] [rbp-1h] BYREF
  const WCHAR *v15[2]; // [rsp+58h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v15[1] = (const WCHAR *)-2LL;
  v15[0] = a2;
  v13 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v17,
         (__int64 *)&v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x387,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v12);
  }
  else
  {
    v14 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_18042C688);
    v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
           (HSTRING)v7[1].Reserved.Reserved1,
           v8,
           a3);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x389,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v9,
        v12);
    }
    else
    {
      v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v15);
      v6 = ExperienceManagerUtils::RaiseReactivatedEvent(
             *((ExperienceManagerUtils **)this + 42),
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 110),
             *((HSTRING *)this + 40),
             *((HSTRING *)this + 41),
             (HSTRING)v10[1].Reserved.Reserved1,
             v13);
      if ( v6 >= 0 )
        v6 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)v6;
}
