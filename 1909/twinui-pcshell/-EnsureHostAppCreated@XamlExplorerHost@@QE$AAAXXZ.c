/*
 * XREFs of ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1802D4458
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802D4090 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802D24BC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802D2F28 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x1802D485C (-GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA-AV-$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ.c)
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1802D6938 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 */

// Hidden C++ exception states: #wind=7
wil::details::in1diag3 **__fastcall XamlExplorerHost::EnsureHostAppCreated(__int64 a1)
{
  wil::details::in1diag3 **result; // rax
  _QWORD *RuntimeSiteAggregator; // rbx
  int v4; // eax
  void *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h]

  result = &retaddr;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    v9 = 0LL;
    RuntimeSiteAggregator = (_QWORD *)XamlExplorerHost::GetRuntimeSiteAggregator(a1, &v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*RuntimeSiteAggregator)(
           *RuntimeSiteAggregator,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v9);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        73LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v5 = Platform::Details::Heap::Allocate(0xE0uLL, 0xF8uLL);
    v10 = (__int64)v5;
    v6 = __abi_winrt_cast_to(0, v9, (__int64)&_uuidof__AUIXamlMetadataProvider_Markup_Xaml_UI_Windows__);
    v11 = v6;
    v7 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp(
           v5,
           v6,
           *(_QWORD *)(a1 + 40));
    v10 = v7;
    __abi_winrt_ptr_assign((__int64 *)(a1 + 88), v7);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return (wil::details::in1diag3 **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  return result;
}
