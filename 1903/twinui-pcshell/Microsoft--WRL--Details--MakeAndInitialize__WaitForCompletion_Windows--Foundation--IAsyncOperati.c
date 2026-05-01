/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager____Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager______::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager____Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager______::_2_::FTMEventDelegate_ @ 0x1801DA46C
 * Callers:
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1801DA918 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease @ 0x1801D3384 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801DAD9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IAsyncOperationCompletedHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager____Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager______::_2_::FTMEventDelegate__WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager____Windows::Foundation::IAsyncOperation_WindowsInternal::Shell::UnifiedTile::UnifiedTileManager______::_2_::FTMEventDelegate_(
        __int64 *a1)
{
  void *v2; // rax
  __int64 v3; // rbx
  signed int v4; // edi
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (__int64)v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Microsoft::WRL::FtmBase>(v2);
    *(_DWORD *)(v3 + 48) = 0;
    *(_QWORD *)(v3 + 56) = 0LL;
    *(_QWORD *)v3 = off_18043EA90;
    v8 = v3;
    *(_QWORD *)(v3 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *(_QWORD *)(v3 + 56) = Event;
    if ( Event )
    {
      v4 = 0;
    }
    else
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
    Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
