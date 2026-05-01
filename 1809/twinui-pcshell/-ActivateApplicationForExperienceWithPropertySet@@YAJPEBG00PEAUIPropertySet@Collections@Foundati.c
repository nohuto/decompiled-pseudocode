/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800629D0
 * Callers:
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18007CB70 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     _lambda_6920fd0394d91195244b848df2c49eea_::operator() @ 0x180092D3C (_lambda_6920fd0394d91195244b848df2c49eea_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fbc78532fd0fd9b1042c65c7016d56c9___::Run @ 0x180094F00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fbc78532fd0fd9b1042c65c7016d56c9___--Run.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x180184B30 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18002CFBC (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ActivateExperienceWithPropertySetCore__lambda_1dd5c0261d80117c1c27db3ac49c0127___ @ 0x180062B28 (ActivateExperienceWithPropertySetCore__lambda_1dd5c0261d80117c1c27db3ac49c0127___.c)
 *     Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___ @ 0x180063510 (Windows--Internal--ComTaskPool--_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows-.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ActivateApplicationForExperienceWithPropertySet(
        const unsigned __int16 *a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  int v8; // eax
  unsigned __int16 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // eax
  __int64 v17; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 *v18; // [rsp+30h] [rbp-71h] BYREF
  __int64 v19; // [rsp+38h] [rbp-69h]
  __int64 v20; // [rsp+40h] [rbp-61h]
  PVOID *p_Reserved1; // [rsp+48h] [rbp-59h] BYREF
  const WCHAR *v22; // [rsp+50h] [rbp-51h]
  __int64 v23; // [rsp+58h] [rbp-49h]
  __int64 v24; // [rsp+60h] [rbp-41h]
  const WCHAR *v25; // [rsp+68h] [rbp-39h] BYREF
  PVOID Reserved1; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v27[2]; // [rsp+78h] [rbp-29h] BYREF
  HSTRING_HEADER v28; // [rsp+88h] [rbp-19h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-1h]
  HSTRING_HEADER v30; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v31; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]

  v27[1] = -2LL;
  p_Reserved1 = (PVOID *)a2;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
  v19 = -1LL;
  v20 = -1LL;
  v8 = ParseAppUserModelId(a1, 0LL, &v18);
  v9 = (unsigned __int16 *)a1;
  if ( v8 >= 0 )
    v9 = v18;
  v25 = v9;
  v17 = 0LL;
  v27[0] = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v25)[1].Reserved.Reserved1;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)&p_Reserved1)[1].Reserved.Reserved1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  p_Reserved1 = &Reserved1;
  v22 = (const WCHAR *)v27;
  v12 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___(
          v11,
          v10,
          &v17,
          &p_Reserved1);
  v14 = v12;
  v29 = 0LL;
  v31 = 0LL;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v12);
  }
  else
  {
    p_Reserved1 = (PVOID *)a1;
    v22 = L"Windows.Launch";
    v23 = v17;
    v24 = a6;
    v15 = ActivateExperienceWithPropertySetCore__lambda_1dd5c0261d80117c1c27db3ac49c0127_(a3, v13, a5, &p_Reserved1);
    v14 = 0;
    if ( v15 < 0 )
      v14 = v15;
    if ( v14 >= 0 )
      v14 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
  return (unsigned int)v14;
}
