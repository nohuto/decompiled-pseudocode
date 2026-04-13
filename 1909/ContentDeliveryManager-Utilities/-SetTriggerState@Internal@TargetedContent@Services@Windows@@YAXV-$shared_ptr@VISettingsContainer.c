/*
 * XREFs of ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180071204
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800659C4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     _lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator() @ 0x180075348 (_lambda_e34527cb48b3e2822e62a7657f7a4fcf_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002E35C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x18002F4D4 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800705F4 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x18007092C (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x180070BA8 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180070CC4 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18007104C (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800758DC (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800AD370 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
HRESULT __fastcall Windows::Services::TargetedContent::Internal::SetTriggerState(__int64 *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rbx
  wil::details::in1diag3 *v6; // rdi
  PCWSTR StringRawBuffer; // rdx
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  struct Windows::Foundation::Collections::IPropertySet *v12; // rax
  struct Windows::Foundation::Collections::IPropertySet *v13; // rcx
  _QWORD *v14; // rcx
  wil::details::in1diag3 *v15; // rcx
  wchar_t *v16; // rax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v22; // rcx
  volatile signed __int32 *v23; // rbx
  HRESULT result; // eax
  volatile signed __int32 *v25; // rbx
  _QWORD *v26; // [rsp+28h] [rbp-49h] BYREF
  __int64 v27; // [rsp+30h] [rbp-41h] BYREF
  char *v28; // [rsp+38h] [rbp-39h]
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+40h] [rbp-31h] BYREF
  HSTRING string; // [rsp+48h] [rbp-29h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+50h] [rbp-21h]
  __int64 v32; // [rsp+58h] [rbp-19h] BYREF
  __int64 v33; // [rsp+60h] [rbp-11h]
  __int64 *v34; // [rsp+70h] [rbp-1h] BYREF
  __int64 v35; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v36; // [rsp+80h] [rbp+Fh] BYREF
  volatile signed __int32 *v37; // [rsp+88h] [rbp+17h]
  __int64 v38; // [rsp+90h] [rbp+1Fh]
  __int64 v39[6]; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v41; // [rsp+F0h] [rbp+7Fh] BYREF

  v38 = -2LL;
  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  v5 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         v39,
         a1);
  v6 = retaddr;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v5, (__int64)StringRawBuffer) )
    goto LABEL_61;
  CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v36);
  v6 = (wil::details::in1diag3 *)string;
  v31 = 0LL;
  v26 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))*v36)(
         *v36,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v26);
  LODWORD(v5) = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v8);
LABEL_4:
    v9 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    }
    goto LABEL_42;
  }
  v27 = 0LL;
  LODWORD(v28) = 0;
  v10 = *v26;
  v34 = &v27;
  v35 = 0LL;
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD *, wil::details::in1diag3 *, __int64 *))(v10 + 48))(v26, v6, &v35);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v34);
  if ( (int)v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
    if ( v27 && (((_DWORD)v28 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v27 + 16LL))();
    goto LABEL_4;
  }
  v11 = (int)v28;
  if ( (int)v28 < 0 )
  {
    LODWORD(v5) = (_DWORD)v28;
    goto LABEL_21;
  }
  if ( (_DWORD)v28 )
  {
    if ( (_DWORD)v28 == 1 || (_DWORD)v28 == 3 )
    {
      v41 = 13;
    }
    else
    {
      LODWORD(v5) = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 48LL))(v27, &v41);
      v11 = (int)v28;
      if ( (int)v5 < 0 )
        goto LABEL_21;
    }
  }
  else
  {
    v41 = 0;
  }
  LODWORD(v5) = 0;
LABEL_21:
  if ( (int)v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
    if ( v27 && (((_DWORD)v28 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v27 + 16LL))();
    goto LABEL_4;
  }
  v12 = 0LL;
  v29 = 0LL;
  if ( v41 == 13 )
  {
    LODWORD(v5) = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v27)(
                    v27,
                    &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
                    &v29);
    v11 = (int)v28;
    v12 = v29;
  }
  else
  {
    LODWORD(v5) = -2147418113;
  }
  if ( (int)v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v5);
    v13 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v27 && (((_DWORD)v28 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v27 + 16LL))();
    goto LABEL_4;
  }
  v29 = 0LL;
  v31 = v12;
  if ( v27 && ((v11 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v14 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  }
  LODWORD(v5) = 0;
LABEL_42:
  v15 = retaddr;
  if ( (int)v5 < 0 )
  {
LABEL_62:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x73,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_63;
  }
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)&v32,
    v31);
  v16 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(a3);
  v17 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
          (__int64)&v32,
          L"triggerState",
          v16);
  v18 = retaddr;
  if ( v17 < 0 )
  {
LABEL_63:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v17);
    JUMPOUT(0x180071697LL);
  }
  v19 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
          v36,
          string,
          v32);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v19);
LABEL_61:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x6F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    goto LABEL_62;
  }
  v20 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v37;
  if ( v37 )
  {
    if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  result = WindowsDeleteString(string);
  string = 0LL;
  v25 = (volatile signed __int32 *)a1[1];
  if ( v25 )
  {
    result = _InterlockedDecrement(v25 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      result = _InterlockedDecrement(v25 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  return result;
}
