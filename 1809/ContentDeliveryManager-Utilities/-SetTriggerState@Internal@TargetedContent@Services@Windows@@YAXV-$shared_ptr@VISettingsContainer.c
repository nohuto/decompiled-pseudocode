/*
 * XREFs of ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18006F890
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180063EC4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     _lambda_02fe688a78f487a3e0fbf37a6735e1e7_::operator() @ 0x180073980 (_lambda_02fe688a78f487a3e0fbf37a6735e1e7_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002D504 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x18002E644 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006EC2C (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x18006EF18 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18006F238 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006F354 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18006F6D8 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180073F10 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800A92A0 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
HRESULT __fastcall Windows::Services::TargetedContent::Internal::SetTriggerState(__int64 *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rdi
  PCWSTR StringRawBuffer; // rdx
  HSTRING v8; // rsi
  struct Windows::Foundation::Collections::IPropertySet *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // eax
  struct Windows::Foundation::Collections::IPropertySet *v14; // rax
  struct Windows::Foundation::Collections::IPropertySet *v15; // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *v17; // rcx
  wchar_t *v18; // rax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rbx
  HRESULT result; // eax
  volatile signed __int32 *v26; // rbx
  __int64 v27; // [rsp+28h] [rbp-49h] BYREF
  __int64 v28; // [rsp+30h] [rbp-41h] BYREF
  char *v29; // [rsp+38h] [rbp-39h]
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+40h] [rbp-31h] BYREF
  HSTRING string; // [rsp+48h] [rbp-29h] BYREF
  __int64 v32; // [rsp+50h] [rbp-21h] BYREF
  __int64 v33; // [rsp+58h] [rbp-19h]
  struct Windows::Foundation::Collections::IPropertySet *v34; // [rsp+68h] [rbp-9h]
  __int64 *v35; // [rsp+70h] [rbp-1h] BYREF
  __int64 v36; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v37; // [rsp+80h] [rbp+Fh] BYREF
  volatile signed __int32 *v38; // [rsp+88h] [rbp+17h]
  __int64 v39; // [rsp+90h] [rbp+1Fh]
  __int64 v40; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v42; // [rsp+F0h] [rbp+7Fh] BYREF

  v39 = -2LL;
  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  v5 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v40,
         a1);
  v6 = (unsigned __int64)retaddr;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v5, (__int64)StringRawBuffer) )
    goto LABEL_61;
  CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v37);
  v8 = string;
  v9 = 0LL;
  v34 = 0LL;
  v27 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v37)(
          *v37,
          &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
          &v27);
  v6 = (unsigned int)v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v10);
LABEL_4:
    v11 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_42;
  }
  v28 = 0LL;
  LODWORD(v29) = 0;
  v35 = &v28;
  v36 = 0LL;
  v6 = (*(unsigned int (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, v8, &v36);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v35);
  if ( (v6 & 0x80000000) != 0LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v6);
    if ( v28 && (((_DWORD)v29 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v28 + 16LL))();
    goto LABEL_4;
  }
  v12 = (int)v29;
  if ( (int)v29 < 0 )
  {
    v6 = (unsigned int)v29;
    goto LABEL_21;
  }
  if ( (_DWORD)v29 )
  {
    if ( (_DWORD)v29 == 1 || (_DWORD)v29 == 3 )
    {
      v42 = 13;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 48LL))(v28, &v42);
      v6 = (unsigned int)v13;
      v12 = (int)v29;
      if ( v13 < 0 )
        goto LABEL_21;
    }
  }
  else
  {
    v42 = 0;
  }
  v6 = 0LL;
LABEL_21:
  if ( (v6 & 0x80000000) != 0LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v6);
    if ( v28 && (((_DWORD)v29 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v28 + 16LL))();
    goto LABEL_4;
  }
  v14 = 0LL;
  v30 = 0LL;
  if ( v42 == 13 )
  {
    v6 = (**(unsigned int (__fastcall ***)(__int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v28)(
           v28,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v30);
    v12 = (int)v29;
    v14 = v30;
  }
  else
  {
    v6 = 2147549183LL;
  }
  if ( (v6 & 0x80000000) != 0LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v6);
    v15 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( v28 && (((_DWORD)v29 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v28 + 16LL))();
    goto LABEL_4;
  }
  v9 = v14;
  v30 = 0LL;
  v34 = v14;
  if ( v28 && ((v12 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v16 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v6 = 0LL;
LABEL_42:
  v17 = retaddr;
  if ( (v6 & 0x80000000) != 0LL )
  {
LABEL_62:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x73,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_63;
  }
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)&v32,
    v9);
  v18 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(a3);
  v19 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
          (__int64)&v32,
          L"triggerState",
          v18);
  v20 = retaddr;
  if ( v19 < 0 )
  {
LABEL_63:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v19);
    JUMPOUT(0x18006FD2DLL);
  }
  v21 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
          v37,
          string,
          v32);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v21);
LABEL_61:
    wil::details::in1diag3::Throw_Hr(
      (wil::details::in1diag3 *)v6,
      (void *)0x6F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    goto LABEL_62;
  }
  v22 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 16LL))(v9);
  v24 = v38;
  if ( v38 )
  {
    if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  result = WindowsDeleteString(string);
  string = 0LL;
  v26 = (volatile signed __int32 *)a1[1];
  if ( v26 )
  {
    result = _InterlockedDecrement(v26 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
      result = _InterlockedDecrement(v26 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
    }
  }
  return result;
}
