/*
 * XREFs of ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180071470
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180065714 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002DF1C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800703C4 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180070E1C (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800AD1E0 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
HRESULT __fastcall Windows::Services::TargetedContent::Internal::RemoveRegisteredTrigger(__int64 *a1, __int64 a2)
{
  const WCHAR *StringRawBuffer; // rbx
  _QWORD *v4; // rax
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID); // rdi
  PVOID Reserved1; // rdx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  HRESULT result; // eax
  volatile signed __int32 *v15; // rbx
  __int64 v16; // [rsp+28h] [rbp-29h] BYREF
  HSTRING string; // [rsp+30h] [rbp-21h] BYREF
  const WCHAR *v18; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-11h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-9h]
  __int64 v21; // [rsp+50h] [rbp-1h]
  __int64 *v22; // [rsp+58h] [rbp+7h]
  __int64 v23; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING_HEADER v24; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+88h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v21 = -2LL;
  v22 = a1;
  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v4 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v23,
         a1);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v4, (__int64)StringRawBuffer) )
    goto LABEL_16;
  CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v19);
  v18 = StringRawBuffer;
  v16 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v19)(
         *v19,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v16);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = v16;
    v10 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v16 + 88LL);
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v18)[1].Reserved.Reserved1;
    v5 = v10(v9, Reserved1);
    v6 = v5;
    v25 = 0LL;
    if ( v5 >= 0 )
    {
      v12 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v6 = 0;
      goto LABEL_11;
    }
    v7 = 290LL;
  }
  else
  {
    v7 = 289LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
    (const char *)(unsigned int)v5);
  v8 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_11:
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x80,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180071683LL);
  }
  v13 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
LABEL_16:
  result = WindowsDeleteString(string);
  string = 0LL;
  v15 = (volatile signed __int32 *)a1[1];
  if ( v15 )
  {
    result = _InterlockedDecrement(v15 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = _InterlockedDecrement(v15 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return result;
}
