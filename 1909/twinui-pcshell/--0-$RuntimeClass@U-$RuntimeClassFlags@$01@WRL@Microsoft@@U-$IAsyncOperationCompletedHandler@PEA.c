/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801FA3EC
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager____Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager______::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager____Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager______::_2_::FTMEventDelegate_ @ 0x1801F9ABC (Microsoft--WRL--Details--MakeAndInitialize__WaitForCompletion_Windows--Foundation--IAsyncOperati.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager_______::_2_::CompletionDelegate__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager_______::_2_::CompletionDelegate_ @ 0x18026DB7C (Microsoft--WRL--Details--MakeAndInitialize__wil--details--WaitForCompletion_Windows_ea_18026DB7C.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002B4E8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
