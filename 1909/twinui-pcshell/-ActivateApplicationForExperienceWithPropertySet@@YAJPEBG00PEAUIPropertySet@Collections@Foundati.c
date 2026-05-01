/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18006B4E0
 * Callers:
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180081C68 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     _lambda_344d118cde8247a665c09f3d1d41eb56_::operator() @ 0x1800A9F74 (_lambda_344d118cde8247a665c09f3d1d41eb56_--operator().c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1801D41A0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     _lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_::operator() @ 0x1801DA6CC (_lambda_1fe66ecf7a6d9918b4f3cb70af5821e0_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f477a7d645b2baa1c309349ac0b0c21e___::Run @ 0x180352BC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f477a7d645b2baa1c309349ac0b0c21e___--Run.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18003F074 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_999dc00085dcb4e97168c8687495f75d___ @ 0x18006B694 (Windows--Internal--ComTaskPool--_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows-.c)
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x18006B7F0 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
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
  int v9; // eax
  unsigned __int16 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ebx
  __int64 v16; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int16 *v17; // [rsp+28h] [rbp-81h] BYREF
  __int64 v18; // [rsp+30h] [rbp-79h]
  __int64 v19; // [rsp+38h] [rbp-71h]
  PVOID *p_Reserved1; // [rsp+40h] [rbp-69h] BYREF
  const WCHAR *v21; // [rsp+48h] [rbp-61h]
  __int64 v22; // [rsp+50h] [rbp-59h]
  __int64 v23; // [rsp+58h] [rbp-51h]
  const WCHAR *v24; // [rsp+60h] [rbp-49h] BYREF
  PVOID Reserved1; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-39h] BYREF
  HSTRING_HEADER v27; // [rsp+80h] [rbp-29h] BYREF
  __int64 v28; // [rsp+98h] [rbp-11h]
  HSTRING_HEADER v29; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  v26[1] = -2LL;
  p_Reserved1 = (PVOID *)a2;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
  v18 = -1LL;
  v19 = -1LL;
  v9 = ParseAppUserModelId(a1, 0LL, &v17);
  v10 = (unsigned __int16 *)a1;
  if ( v9 >= 0 )
    v10 = v17;
  v24 = v10;
  v16 = 0LL;
  v26[0] = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, &v24)[1].Reserved.Reserved1;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, (const WCHAR **)&p_Reserved1)[1].Reserved.Reserved1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  p_Reserved1 = &Reserved1;
  v21 = (const WCHAR *)v26;
  v13 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_999dc00085dcb4e97168c8687495f75d___(
          v12,
          v11,
          &v16,
          &p_Reserved1);
  v14 = v13;
  v28 = 0LL;
  v30 = 0LL;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v13,
      v16);
  }
  else
  {
    p_Reserved1 = (PVOID *)a1;
    v21 = L"Windows.Launch";
    v22 = v16;
    v23 = a6;
    v14 = ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f_(a3, a4, a5, &p_Reserved1);
    if ( v14 >= 0 )
      v14 = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
  return (unsigned int)v14;
}
