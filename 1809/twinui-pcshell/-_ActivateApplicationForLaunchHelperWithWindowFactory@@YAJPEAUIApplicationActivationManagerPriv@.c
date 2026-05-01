/*
 * XREFs of ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1803ADA68
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1803AD5A4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18002CFBC (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___ @ 0x180063510 (Windows--Internal--ComTaskPool--_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows-.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@$$QEAPEAUIUnknown@@@Z @ 0x1803AD27C (--$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microso.c)
 */

__int64 __fastcall _ActivateApplicationForLaunchHelperWithWindowFactory(
        IUnknown *a1,
        const WCHAR *a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  _DWORD *v8; // r12
  __int64 v9; // r13
  unsigned __int64 v13; // rdi
  bool v14; // sf
  unsigned __int64 v15; // rax
  UINT32 v16; // ebx
  const WCHAR *v17; // rbx
  unsigned __int64 v18; // rax
  UINT32 v19; // esi
  int v20; // edx
  APTTYPE v21; // ecx
  int v22; // eax
  unsigned int v23; // ebx
  HRESULT Site; // eax
  int v25; // eax
  __int64 v26; // rdx
  struct IInspectable *v27; // r14
  HSTRING v28; // rsi
  UINT32 v29; // ebx
  IUnknown *punkSite; // [rsp+40h] [rbp-A1h] BYREF
  void *ppv; // [rsp+48h] [rbp-99h] BYREF
  IUnknown *punk; // [rsp+50h] [rbp-91h]
  struct IInspectable *v34; // [rsp+58h] [rbp-89h] BYREF
  void *v35; // [rsp+60h] [rbp-81h] BYREF
  PCWSTR sourceString; // [rsp+68h] [rbp-79h] BYREF
  __int64 v37; // [rsp+70h] [rbp-71h]
  __int64 v38; // [rsp+78h] [rbp-69h]
  _QWORD v39[2]; // [rsp+80h] [rbp-61h] BYREF
  HSTRING string; // [rsp+90h] [rbp-51h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-49h] BYREF
  HSTRING v42; // [rsp+B0h] [rbp-31h] BYREF
  HSTRING_HEADER v43; // [rsp+B8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+47h]

  v8 = a8;
  v9 = a7;
  punk = a1;
  sourceString = 0LL;
  *a8 = 0;
  v37 = 0LL;
  v38 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  v13 = -1LL;
  v37 = -1LL;
  v38 = -1LL;
  v14 = (int)ParseAppUserModelId(a4, 0LL, (unsigned __int16 **)&sourceString) < 0;
  v34 = 0LL;
  v15 = -1LL;
  if ( !v14 )
    a4 = sourceString;
  do
    ++v15;
  while ( a4[v15] );
  v16 = -1;
  if ( v15 > 0xFFFFFFFF )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  else
    v16 = v15;
  WindowsCreateStringReference(a4, v16, &hstringHeader, &string);
  v17 = &word_180411F30;
  v35 = string;
  v18 = -1LL;
  if ( a3 )
    v17 = a3;
  do
    ++v18;
  while ( v17[v18] );
  v19 = -1;
  if ( v18 > 0xFFFFFFFF )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  else
    v19 = v18;
  WindowsCreateStringReference(v17, v19, &v43, &v42);
  punkSite = (IUnknown *)v42;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
  v39[0] = &punkSite;
  v39[1] = &v35;
  v22 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___(
          v21,
          v20,
          &v34,
          (__int64)v39);
  v23 = v22;
  if ( v22 >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
    Site = IUnknown_GetSite(punk, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
    v23 = Site;
    if ( Site < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
        (const char *)(unsigned int)Site);
LABEL_33:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
      goto LABEL_34;
    }
    if ( a6 )
    {
      v35 = ppv;
      punkSite = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite);
      v25 = Microsoft::WRL::Details::MakeAndInitialize<CLaunchToMonitor,CLaunchToMonitor,HMONITOR__ * &,IUnknown *>(
              (CLaunchToMonitor **)&punkSite,
              &a6,
              &v35);
      v23 = v25;
      if ( v25 < 0 )
      {
        v26 = 54LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (__int64)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
          (const char *)(unsigned int)v25);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite);
LABEL_32:
        IUnknown_SetSite(punk, (IUnknown *)ppv);
        goto LABEL_33;
      }
      v25 = IUnknown_SetSite(punk, punkSite);
      v23 = v25;
      if ( v25 < 0 )
      {
        v26 = 55LL;
        goto LABEL_22;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite);
    }
    v27 = v34;
    if ( WindowsCreateStringReference(L"Windows.Launch", 0xEu, &v43, &v42) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v28 = v42;
    do
      ++v13;
    while ( a2[v13] );
    v29 = -1;
    if ( v13 > 0xFFFFFFFF )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    else
      v29 = v13;
    WindowsCreateStringReference(a2, v29, &hstringHeader, &string);
    v23 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, __int64, HSTRING, struct IInspectable *, int, _DWORD *))punk->lpVtbl[1].AddRef)(
            punk,
            string,
            v9,
            v28,
            v27,
            a5,
            v8);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (__int64)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
    (const char *)(unsigned int)v22);
LABEL_34:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  return v23;
}
