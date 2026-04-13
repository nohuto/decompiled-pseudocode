/*
 * XREFs of ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006EC2C
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006F7DC (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VIS_ea_18006F7DC.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18006F890 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006FD34 (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072B2C (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012CA4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x18006EFEC (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::CreateTriggerKey(HSTRING *a1, __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  HSTRING v12; // rbx
  HSTRING v13; // rsi
  PCWSTR v14; // rdi
  PCWSTR v15; // rbx
  PCWSTR v16; // rax
  int v17; // eax
  HSTRING v18; // rbx
  HSTRING v19; // rsi
  HSTRING v20; // r15
  PCWSTR StringRawBuffer; // r14
  PCWSTR v22; // rdi
  PCWSTR v23; // rbx
  PCWSTR v24; // rax
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  void *v27; // rbx
  int v28; // eax
  HSTRING v30[3]; // [rsp+38h] [rbp-40h] BYREF
  LPVOID pv[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  HSTRING v33; // [rsp+C8h] [rbp+50h] BYREF
  HSTRING string; // [rsp+D0h] [rbp+58h] BYREF
  HSTRING v35; // [rsp+D8h] [rbp+60h] BYREF

  v30[2] = (HSTRING)-2LL;
  WindowsDeleteString(0LL);
  v30[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL))(a2, v30);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_15;
  v35 = 0LL;
  WindowsDeleteString(0LL);
  v35 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL))(a2, &v35);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x26F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL))(a2, &string);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x271,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v33 = 0LL;
  WindowsDeleteString(0LL);
  v33 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, &v33);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x273,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_19;
  }
  memset(pv, 0, 24);
  if ( !WindowsIsStringEmpty(string) )
  {
    v18 = v33;
    v19 = v35;
    v20 = v30[0];
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v22 = WindowsGetStringRawBuffer(v18, 0LL);
    v23 = WindowsGetStringRawBuffer(v19, 0LL);
    v24 = WindowsGetStringRawBuffer(v20, 0LL);
    v25 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)pv,
            L"%s_%s_%s_%s",
            v24,
            v23,
            v22,
            StringRawBuffer,
            0);
    v26 = retaddr;
    if ( v25 >= 0 )
      goto LABEL_9;
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v26,
      (void *)0x284,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v25);
    JUMPOUT(0x18006EF0ELL);
  }
  v12 = v35;
  v13 = v30[0];
  v14 = WindowsGetStringRawBuffer(v33, 0LL);
  v15 = WindowsGetStringRawBuffer(v12, 0LL);
  v16 = WindowsGetStringRawBuffer(v13, 0LL);
  v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s_%s_%s",
          v16,
          v15,
          v14);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v17);
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x26D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_16;
  }
LABEL_9:
  *a1 = 0LL;
  v27 = pv[0];
  v30[1] = (HSTRING)pv[0];
  v28 = Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(a1);
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x288,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v28);
    __debugbreak();
  }
  if ( v27 )
    CoTaskMemFree(v27);
  WindowsDeleteString(v33);
  v33 = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v35);
  v35 = 0LL;
  WindowsDeleteString(v30[0]);
  return a1;
}
