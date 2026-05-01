/*
 * XREFs of ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x180188780
 * Callers:
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x18018A758 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800783D0 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x180188E2C (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow(HWND *this)
{
  HWND lpParam; // rsi
  HRESULT v3; // ebx
  HWND Window; // rax
  WNDCLASSEXW v5; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  LPCWSTR lpWindowName; // [rsp+E8h] [rbp+67h] BYREF
  void *ppv; // [rsp+F0h] [rbp+6Fh] BYREF

  lpParam = CortanaDesktopExperienceView::GetHwnd((CortanaDesktopExperienceView *)this);
  v5.cbSize = 80;
  memset_0(&v5.style, 0, 0x4CuLL);
  v5.style = 512;
  v5.lpfnWndProc = (WNDPROC)CortanaDesktopExperienceView::s_CortanaAltTabProxyWndProc;
  v5.hInstance = &_ImageBase;
  v5.lpszClassName = L"Shell_CortanaProxy";
  v5.cbWndExtra = 8;
  RegisterClassExW(&v5);
  lpWindowName = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpWindowName,
    0LL);
  lpWindowName = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v3 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4100u,
         L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &ppv);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(void *, _QWORD, LPCWSTR *))(*(_QWORD *)ppv + 40LL))(ppv, 0LL, &lpWindowName);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2913LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  Window = CreateWindowExW(
             0x240000u,
             v5.lpszClassName,
             lpWindowName,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0LL,
             0LL,
             &_ImageBase,
             lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,0,std::nullptr_t>>::reset(
    this + 32,
    Window);
  if ( lpWindowName )
    CoTaskMemFree((LPVOID)lpWindowName);
}
