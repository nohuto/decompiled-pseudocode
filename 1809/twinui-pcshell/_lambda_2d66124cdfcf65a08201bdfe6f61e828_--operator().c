/*
 * XREFs of _lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator() @ 0x1801FDAB4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_::Invoke @ 0x1801FFA40 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801FFA40.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?end@?$VectorRange@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVVectorIterator@12@XZ @ 0x1800FA898 (-end@-$VectorRange@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collectio.c)
 *     ?UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180200D94 (-UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@Win.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int i; // eax
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  unsigned int v9; // [rsp+30h] [rbp-38h]
  struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *v10; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  __int64 v13[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF

  try
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 64LL))(a3);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        379LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v4);
    v15 = 0LL;
    v9 = 0;
    v10 = 0LL;
    wil::VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
      &v15,
      (__int64)v11);
    for ( i = 0; i != v12; i = ++v9 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct WindowsInternal::Shell::UnifiedTile::ICollectionTile **))(MEMORY[0] + 48LL))(
             0LL,
             v9,
             &v10);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5800LL,
          (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
          (const char *)(unsigned int)v6);
      DefaultIconManager::UpdateViewFromCollectionTile(*(DefaultIconManager **)(a1 + 8), v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x184,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
                           v7);
  }
  return result;
}
