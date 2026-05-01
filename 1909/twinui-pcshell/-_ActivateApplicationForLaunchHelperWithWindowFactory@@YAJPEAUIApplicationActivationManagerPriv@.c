/*
 * XREFs of ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x18042F338
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x18042EE74 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18003F074 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_999dc00085dcb4e97168c8687495f75d___ @ 0x18006B694 (Windows--Internal--ComTaskPool--_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows-.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@$$QEAPEAUIUnknown@@@Z @ 0x18042EB4C (--$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microso.c)
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
  unsigned __int64 v14; // rbx
  const WCHAR *v15; // rsi
  unsigned __int64 v16; // rbx
  int v17; // edx
  APTTYPE v18; // ecx
  int v19; // eax
  unsigned int v20; // ebx
  HRESULT Site; // eax
  int v22; // eax
  __int64 v23; // rdx
  struct IInspectable *v24; // rsi
  HSTRING v25; // rbx
  IUnknown *punkSite; // [rsp+40h] [rbp-A1h] BYREF
  void *ppv; // [rsp+48h] [rbp-99h] BYREF
  IUnknown *punk; // [rsp+50h] [rbp-91h]
  struct IInspectable *v30; // [rsp+58h] [rbp-89h] BYREF
  void *v31; // [rsp+60h] [rbp-81h] BYREF
  PCWSTR sourceString; // [rsp+68h] [rbp-79h] BYREF
  __int64 v33; // [rsp+70h] [rbp-71h]
  __int64 v34; // [rsp+78h] [rbp-69h]
  _QWORD v35[2]; // [rsp+80h] [rbp-61h] BYREF
  HSTRING string; // [rsp+90h] [rbp-51h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-49h] BYREF
  HSTRING v38; // [rsp+B0h] [rbp-31h] BYREF
  HSTRING_HEADER v39; // [rsp+B8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+47h]

  v8 = a8;
  v9 = a7;
  punk = a1;
  sourceString = 0LL;
  *a8 = 0;
  v33 = 0LL;
  v34 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  v13 = -1LL;
  v33 = -1LL;
  v34 = -1LL;
  v30 = 0LL;
  v14 = -1LL;
  if ( (int)ParseAppUserModelId(a4, 0LL, (unsigned __int16 **)&sourceString) >= 0 )
    a4 = sourceString;
  do
    ++v14;
  while ( a4[v14] );
  if ( v14 > 0xFFFFFFFF )
  {
    LODWORD(v14) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(a4, v14, &hstringHeader, &string);
  v15 = &szAgent;
  v31 = string;
  v16 = -1LL;
  if ( a3 )
    v15 = a3;
  do
    ++v16;
  while ( v15[v16] );
  if ( v16 > 0xFFFFFFFF )
  {
    LODWORD(v16) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(v15, v16, &v39, &v38);
  punkSite = (IUnknown *)v38;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
  v35[0] = &punkSite;
  v35[1] = &v31;
  v19 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_999dc00085dcb4e97168c8687495f75d___(
          v18,
          v17,
          &v30,
          (__int64)v35);
  v20 = v19;
  if ( v19 >= 0 )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
    Site = IUnknown_GetSite(punk, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
    v20 = Site;
    if ( Site < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
        (const char *)(unsigned int)Site);
LABEL_30:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
      goto LABEL_31;
    }
    if ( a6 )
    {
      v31 = ppv;
      punkSite = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite);
      v22 = Microsoft::WRL::Details::MakeAndInitialize<CLaunchToMonitor,CLaunchToMonitor,HMONITOR__ * &,IUnknown *>(
              (CLaunchToMonitor **)&punkSite,
              &a6,
              &v31);
      v20 = v22;
      if ( v22 < 0 )
      {
        v23 = 54LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite);
LABEL_29:
        IUnknown_SetSite(punk, (IUnknown *)ppv);
        goto LABEL_30;
      }
      v22 = IUnknown_SetSite(punk, punkSite);
      v20 = v22;
      if ( v22 < 0 )
      {
        v23 = 55LL;
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite);
    }
    v24 = v30;
    if ( WindowsCreateStringReference(L"Windows.Launch", 0xEu, &v39, &v38) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v25 = v38;
    do
      ++v13;
    while ( a2[v13] );
    if ( v13 > 0xFFFFFFFF )
    {
      LODWORD(v13) = -1;
      RaiseException(0xC000000D, 1u, 0, 0LL);
    }
    WindowsCreateStringReference(a2, v13, &hstringHeader, &string);
    v20 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, __int64, HSTRING, struct IInspectable *, int, _DWORD *))punk->lpVtbl[1].AddRef)(
            punk,
            string,
            v9,
            v25,
            v24,
            a5,
            v8);
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (__int64)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
    (const char *)(unsigned int)v19);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  return v20;
}
