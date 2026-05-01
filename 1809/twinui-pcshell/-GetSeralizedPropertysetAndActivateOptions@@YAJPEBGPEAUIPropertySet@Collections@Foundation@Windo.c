/*
 * XREFs of ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18006327C
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_1dd5c0261d80117c1c27db3ac49c0127___ @ 0x180062B28 (ActivateExperienceWithPropertySetCore__lambda_1dd5c0261d80117c1c27db3ac49c0127___.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180026320 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x1800633D8 (-InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAU.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetSeralizedPropertysetAndActivateOptions(
        const unsigned __int16 *a1,
        struct Windows::Foundation::Collections::IPropertySet *a2,
        char a3,
        struct Windows::Storage::Streams::IBuffer **a4,
        _DWORD *a5)
{
  HSTRING_HEADER *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  int inserted; // eax
  int v14; // eax
  struct Windows::Storage::Streams::IBuffer *v16; // [rsp+20h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+28h] [rbp-48h] BYREF
  __int64 v18[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER v19; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v18[1] = -2LL;
  v18[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
  v17 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, (const WCHAR **)&off_1803C7DE0);
  v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
          (HSTRING)v9[1].Reserved.Reserved1,
          v10,
          a3 & 1);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v11);
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    inserted = InsertExperienceIdAndSerialize(a2, a1, &v16);
    v12 = inserted;
    if ( inserted < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)inserted);
    }
    else
    {
      v14 = 16777222;
      *a5 = 16777222;
      if ( (a3 & 4) != 0 )
      {
        v14 = 150994950;
        *a5 = 150994950;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v14 |= 0x10000000u;
        *a5 = v14;
      }
      if ( (a3 & 0x20) != 0 || (a3 & 1) == 0 )
      {
        v14 |= 0x40000000u;
        *a5 = v14;
      }
      if ( (a3 & 0x40) != 0 )
      {
        v14 |= 0x400000u;
        *a5 = v14;
      }
      if ( (a3 & 8) != 0 )
        *a5 = v14 & 0xFFFFFFFB;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
      *a4 = v16;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  return v12;
}
