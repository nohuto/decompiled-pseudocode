/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_3b51b811795083c8866600a62beaf61a___ @ 0x180068EB4
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180064440 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002D504 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@AEBV0123@@Z @ 0x180061DB4 (--0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ??0?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEB_WW4TrustLevel@@@Z @ 0x18006BE44 (--0-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInternal@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_3b51b811795083c8866600a62beaf61a___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // r8
  signed __int32 v10; // edx
  int v11; // r9d
  signed int v12; // ebx
  void *v13; // rax
  __int64 v14; // rdi

  v7 = operator new(0x180uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = off_1800E01A8;
    v7[1] = *(_QWORD *)a4;
    v9 = *(_QWORD *)(a4 + 8);
    v7[2] = v9;
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 68);
      v11 = 0x7FFFFFFF;
      if ( v10 != 0x7FFFFFFF )
      {
        do
        {
          if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 68), v10 + 1, v10) )
            break;
          v10 = *(_DWORD *)(v9 + 68);
        }
        while ( v10 != 0x7FFFFFFF );
        if ( v10 != 0x7FFFFFFF )
          v11 = v10 + 1;
      }
      if ( (*(_BYTE *)(v9 + 88) & 4) == 0 && v11 == 2 )
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    v7[3] = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *((_BYTE *)v7 + 32) = 0;
    *(_BYTE *)(a4 + 24) = 1;
    v7[5] = *(_QWORD *)(a4 + 32);
    *(_QWORD *)(a4 + 32) = 0LL;
    *((_BYTE *)v7 + 48) = 0;
    *(_BYTE *)(a4 + 40) = 1;
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::TriggerManagerGetTriggeredItemsForStateActivity(
      (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)(v7 + 7),
      (const struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)(a4 + 48));
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
      v8 + 46,
      (__int64 *)(a4 + 360));
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = 0LL;
  v12 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    v13 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = 0LL;
    if ( v13 )
      v14 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *> *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
              v13,
              a1,
              L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Services.Targete"
               "dContent.Internal.TargetedContentTriggerInternal>>",
              0LL,
              -2LL);
    v12 = v14 == 0 ? 0x8007000E : 0;
    if ( v14 )
    {
      *(_QWORD *)(v14 + 256) = v8;
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 104LL))(v14 + 8);
      v8 = 0LL;
    }
    if ( v12 >= 0 )
    {
      *a2 = (v14 + 176) & -(__int64)(v14 != 0);
      v14 = 0LL;
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 16LL))(v14 + 8);
  }
  return (unsigned int)v12;
}
