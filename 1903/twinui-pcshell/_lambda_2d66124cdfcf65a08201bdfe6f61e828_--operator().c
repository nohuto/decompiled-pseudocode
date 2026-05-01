/*
 * XREFs of _lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator() @ 0x180250CFC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___::Invoke @ 0x180252C70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180252C70.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?end@?$vector_range@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVvector_iterator@12@XZ @ 0x180120444 (-end@-$vector_range@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collecti.c)
 *     ?UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180253F2C (-UpdateViewFromCollectionTile@DefaultIconManager@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@Win.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_2d66124cdfcf65a08201bdfe6f61e828_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int i; // eax
  __int64 (__fastcall *v6)(_QWORD, _QWORD, struct WindowsInternal::Shell::UnifiedTile::ICollectionTile **); // rbx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  unsigned int v10; // [rsp+30h] [rbp-38h]
  struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *v11; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  try
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 64LL))(a3);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        379LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
        (const char *)(unsigned int)v4);
    v16 = 0LL;
    v10 = 0;
    v11 = 0LL;
    wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
      &v16,
      (__int64)v12);
    for ( i = 0; i != v13; i = ++v10 )
    {
      v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, struct WindowsInternal::Shell::UnifiedTile::ICollectionTile **))(MEMORY[0] + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      v7 = v6(0LL, v10, &v11);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5421LL,
          (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
          (const char *)(unsigned int)v7);
      DefaultIconManager::UpdateViewFromCollectionTile(*(DefaultIconManager **)(a1 + 8), v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x184,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
                           v8);
  }
  return result;
}
