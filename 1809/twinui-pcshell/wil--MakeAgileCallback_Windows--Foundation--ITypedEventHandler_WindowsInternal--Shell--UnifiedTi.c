/*
 * XREFs of wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64___lambda_2d66124cdfcf65a08201bdfe6f61e828___ @ 0x1801FB7D4
 * Callers:
 *     _lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator() @ 0x1801FDC38 (_lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64___::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_ @ 0x1801FD1B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801FD1B0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64___lambda_2d66124cdfcf65a08201bdfe6f61e828___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64__Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64___::___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____ptr64__Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer_____ptr64_WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____ptr64_(
           v5,
           a2);
  *a1 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, 78LL, (__int64)"internal\\sdk\\inc\\wil\\wrl.h", v6);
    __debugbreak();
  }
  return a1;
}
