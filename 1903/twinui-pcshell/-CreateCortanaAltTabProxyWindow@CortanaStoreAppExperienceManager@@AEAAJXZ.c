/*
 * XREFs of ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BC544
 * Callers:
 *     ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1801BEE44 (-SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18000F610 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18007C2E8 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     _Init_thread_footer @ 0x180086D88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180086DF0 (_Init_thread_header.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ @ 0x1801BCFC8 (-GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  void *lpParam; // r14
  CortanaUndockingHelpers *v4; // rcx
  const WCHAR *v5; // rbx
  HRESULT v6; // ebx
  HWND Window; // rax
  HWND v8; // rax
  WNDCLASSEXW v10; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  LPCWSTR lpWindowName; // [rsp+F8h] [rbp+67h] BYREF
  void *ppv; // [rsp+100h] [rbp+6Fh] BYREF

  lpParam = (void *)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 31), a2);
  v10.cbSize = 80;
  memset_0(&v10.style, 0, 0x4CuLL);
  v10.style = 512;
  v10.lpfnWndProc = (WNDPROC)CortanaStoreAppExperienceManager::CortanaAltTabProxyWndProc;
  v10.hInstance = &_ImageBase;
  v10.lpszClassName = L"Shell_CortanaStoreAppProxy";
  v10.cbWndExtra = 8;
  RegisterClassExW(&v10);
  if ( dword_18059B6B8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18059B6B8);
    if ( dword_18059B6B8 == -1 )
    {
      pszItem = CortanaUndockingHelpers::GetStoreCortanaAumId(v4);
      Init_thread_footer(&dword_18059B6B8);
    }
  }
  lpWindowName = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpWindowName,
    0LL);
  v5 = pszItem;
  lpWindowName = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v6 = SHCreateItemInKnownFolder(&FOLDERID_AppsFolder, 0x4100u, v5, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(void *, _QWORD, LPCWSTR *))(*(_QWORD *)ppv + 40LL))(ppv, 0LL, &lpWindowName);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4E4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  Window = CreateWindowExW(
             0,
             v10.lpszClassName,
             lpWindowName,
             0x8000000u,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0LL,
             0LL,
             &_ImageBase,
             lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 49,
    Window);
  v8 = CreateWindowExW(
         0x200000u,
         v10.lpszClassName,
         lpWindowName,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         0x80000000,
         *((HWND *)this + 49),
         0LL,
         &_ImageBase,
         lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 48,
    v8);
  if ( lpWindowName )
    CoTaskMemFree((LPVOID)lpWindowName);
  return 0LL;
}
