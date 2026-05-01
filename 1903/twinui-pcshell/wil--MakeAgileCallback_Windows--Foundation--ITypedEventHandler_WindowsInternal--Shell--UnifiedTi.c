/*
 * XREFs of wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____lambda_2d66124cdfcf65a08201bdfe6f61e828___ @ 0x18024E4EC
 * Callers:
 *     _lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator() @ 0x180250E9C (_lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____::_)(WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___ @ 0x180250424 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180250424.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs_____lambda_2d66124cdfcf65a08201bdfe6f61e828___(
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
    v4 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer____Windows::Foundation::Internal::AggregateType_WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs_____::___WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_WindowsInternal::Shell::UnifiedTile::TileCollectionContainer___WindowsInternal::Shell::UnifiedTile::ContentsChangedEventArgs____Microsoft::WRL::FtmBase___lambda_2d66124cdfcf65a08201bdfe6f61e828___1_WindowsInternal::Shell::UnifiedTile::ITileCollectionContainer___WindowsInternal::Shell::UnifiedTile::IContentsChangedEventArgs___(
           v5,
           a2);
  *a1 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      69LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v6);
    __debugbreak();
  }
  return a1;
}
