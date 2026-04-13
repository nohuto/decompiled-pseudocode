/*
 * XREFs of ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180064440
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1800206A0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002D504 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180060374 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_.c)
 *     ??0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@AEBV0123@@Z @ 0x180061DB4 (--0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x180061E7C (-StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@B.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x1800625C0 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     _lambda_3b51b811795083c8866600a62beaf61a_::__lambda_3b51b811795083c8866600a62beaf61a_ @ 0x180064F74 (_lambda_3b51b811795083c8866600a62beaf61a_--__lambda_3b51b811795083c8866600a62beaf61a_.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800652DC (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_3b51b811795083c8866600a62beaf61a___ @ 0x180068EB4 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync(
        __int64 a1,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        _QWORD *a5)
{
  __int64 v8; // rsi
  const wchar_t *StringRawBuffer; // rdi
  const wchar_t *v10; // rbx
  HRESULT v11; // eax
  int v12; // edi
  HRESULT v13; // eax
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // edx
  signed __int32 v17; // r8d
  int v18; // r8d
  signed __int32 v19; // r8d
  __int64 v20; // r8
  volatile signed __int32 *v21; // rbx
  int v23[2]; // [rsp+28h] [rbp-E0h]
  HSTRING string; // [rsp+30h] [rbp-D8h]
  HSTRING v25; // [rsp+40h] [rbp-C8h]
  HSTRING v26[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  HSTRING newString; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  _QWORD v32[4]; // [rsp+88h] [rbp-80h] BYREF
  int v33; // [rsp+A8h] [rbp-60h]
  int *v34; // [rsp+B0h] [rbp-58h]
  int *v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+C0h] [rbp-48h] BYREF
  char v37; // [rsp+C4h] [rbp-44h]
  int v38; // [rsp+E8h] [rbp-20h] BYREF
  const char *v39; // [rsp+F0h] [rbp-18h]
  __int64 v40; // [rsp+F8h] [rbp-10h]
  char v41; // [rsp+100h] [rbp-8h]
  __int64 v42; // [rsp+108h] [rbp+0h]
  _BYTE v43[144]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v44; // [rsp+1A0h] [rbp+98h]
  __int64 v45; // [rsp+1A8h] [rbp+A0h]
  __int64 v46; // [rsp+1B0h] [rbp+A8h]
  __int64 v47; // [rsp+1B8h] [rbp+B0h]
  _QWORD v48[3]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v49; // [rsp+1E0h] [rbp+D8h]
  HSTRING v50; // [rsp+1E8h] [rbp+E0h]
  char v51; // [rsp+1F0h] [rbp+E8h]
  _BYTE v52[312]; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v53[3]; // [rsp+330h] [rbp+228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+390h] [rbp+288h]

  v31 = -2LL;
  *a5 = 0LL;
  Windows::Services::TargetedContent::Internal::GetCorrelationVector((char *)&v29, a4);
  v8 = v29;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v10 = WindowsGetStringRawBuffer(a2, 0LL);
  v32[1] = 0LL;
  v32[2] = v32;
  v32[3] = 0LL;
  v33 = 0;
  v34 = &v38;
  v35 = &v36;
  v36 = 0;
  v37 = 0;
  v41 = 0;
  v38 = 0;
  v39 = "TriggerManagerGetTriggeredItemsForStateActivity";
  v40 = 0LL;
  v42 = 1LL;
  v44 = 0LL;
  memset_0(v43, 0, sizeof(v43));
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v32[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v32,
    v10,
    StringRawBuffer,
    (const char *)(v8 + 8));
  string = 0LL;
  v11 = WindowsDuplicateString(a2, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x172,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v11);
  }
  else
  {
    string = newString;
    WindowsDeleteString(0LL);
    v13 = WindowsDuplicateString(a3, &v28);
    v12 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v13);
    }
    else
    {
      v25 = v28;
      WindowsDeleteString(0LL);
      v14 = a1 - 40;
      v15 = a1 - 40;
      *(_QWORD *)v23 = a1 - 40;
      v16 = 0x7FFFFFFF;
      if ( a1 != 40 )
      {
        v17 = *(_DWORD *)(v14 + 68);
        if ( v17 == 0x7FFFFFFF )
          goto LABEL_9;
        do
        {
          if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 68), v17 + 1, v17) )
            break;
          v17 = *(_DWORD *)(v14 + 68);
        }
        while ( v17 != 0x7FFFFFFF );
        if ( v17 == 0x7FFFFFFF )
LABEL_9:
          v18 = 0x7FFFFFFF;
        else
          v18 = v17 + 1;
        v15 = a1 - 40;
        if ( (*(_BYTE *)(*(_QWORD *)v23 + 88LL) & 4) == 0 && v18 == 2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
          v15 = a1 - 40;
        }
      }
      v48[0] = a1 - 40;
      v48[1] = v15;
      if ( v15 )
      {
        v19 = *(_DWORD *)(v15 + 68);
        if ( v19 != 0x7FFFFFFF )
        {
          do
          {
            if ( v19 == _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 68), v19 + 1, v19) )
              break;
            v19 = *(_DWORD *)(v15 + 68);
          }
          while ( v19 != 0x7FFFFFFF );
          if ( v19 != 0x7FFFFFFF )
            v16 = v19 + 1;
        }
        v15 = a1 - 40;
        if ( (*(_BYTE *)(*(_QWORD *)v23 + 88LL) & 4) == 0 && v16 == 2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
          v15 = a1 - 40;
        }
      }
      v48[2] = string;
      string = 0LL;
      v49 = 0;
      v50 = v25;
      v51 = 0;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::TriggerManagerGetTriggeredItemsForStateActivity(
        (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v52,
        (const struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v32);
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
        v53,
        &v29);
      HIDWORD(v26[0]) = 3;
      v26[1] = (HSTRING)130;
      v12 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64____Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64_Windows::Internal::ComTaskPoolHandler__lambda_3b51b811795083c8866600a62beaf61a___(
              (char *)v26 + 4,
              a5,
              v20,
              v48);
      lambda_3b51b811795083c8866600a62beaf61a_::__lambda_3b51b811795083c8866600a62beaf61a_(v48);
      if ( v12 >= 0 )
        v12 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AA,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v12);
      if ( v15 )
        Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v15);
    }
  }
  if ( string )
    WindowsDeleteString(string);
  v32[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v32);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v32);
  v21 = v30;
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return (unsigned int)v12;
}
