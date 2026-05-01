/*
 * XREFs of _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::TileImageResourceCandidate_____ptr64______ptr64__::_2_::CompletionDelegate::CompletionDelegate @ 0x1801FD250
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::TileImageResourceCandidate_____ptr64______ptr64__::_2_::CompletionDelegate__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::TileImageResourceCandidate_____ptr64______ptr64__::_2_::CompletionDelegate_ @ 0x1801FB884 (Microsoft--WRL--Details--MakeAndInitialize__wil--details--WaitForCompletion_Windows_ea_1801FB884.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800364B4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::TileImageResourceCandidate_____ptr64______ptr64__::_2_::CompletionDelegate::CompletionDelegate(
        __int64 a1)
{
  _QWORD *v2; // rdi

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v2 = (_QWORD *)(a1 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::TileImageResourceCandidate *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::TileImageResourceCandidate *>'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::TileImageResourceCandidate *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_1803DF558;
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::TileImageResourceCandidate *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  return a1;
}
