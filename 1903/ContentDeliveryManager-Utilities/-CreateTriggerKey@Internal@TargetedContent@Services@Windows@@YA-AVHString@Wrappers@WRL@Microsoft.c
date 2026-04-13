/*
 * XREFs of ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800703C4
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180070F20 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VIS_ea_180070F20.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x180070FD4 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180071470 (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180074300 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012FD4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::CreateTriggerKey(HSTRING *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rbx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  HSTRING v16; // rbx
  HSTRING v17; // rsi
  PCWSTR v18; // rdi
  PCWSTR v19; // rbx
  PCWSTR v20; // rax
  int v21; // eax
  HSTRING v22; // rbx
  HSTRING v23; // rsi
  HSTRING v24; // r15
  PCWSTR StringRawBuffer; // r14
  PCWSTR v26; // rdi
  PCWSTR v27; // rbx
  PCWSTR v28; // rax
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  WCHAR *v31; // rbx
  unsigned __int64 v32; // rdi
  UINT32 v33; // edx
  const WCHAR *v34; // rcx
  HRESULT v35; // eax
  HSTRING v37[2]; // [rsp+38h] [rbp-30h] BYREF
  LPVOID pv[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  HSTRING v40; // [rsp+B8h] [rbp+50h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+58h] BYREF
  HSTRING v42; // [rsp+C8h] [rbp+60h] BYREF

  v37[1] = (HSTRING)-2LL;
  v37[0] = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL);
  WindowsDeleteString(0LL);
  v37[0] = 0LL;
  v5 = v4(a2, v37);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_23;
  v42 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL);
  WindowsDeleteString(0LL);
  v42 = 0LL;
  v8 = v7(a2, &v42);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x272,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_25;
  }
  string = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v11 = v10(a2, &string);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x274,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_26;
  }
  v40 = 0LL;
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL);
  WindowsDeleteString(0LL);
  v40 = 0LL;
  v14 = v13(a2, &v40);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x276,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_27;
  }
  memset(pv, 0, 24);
  if ( !WindowsIsStringEmpty(string) )
  {
    v22 = v40;
    v23 = v42;
    v24 = v37[0];
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v26 = WindowsGetStringRawBuffer(v22, 0LL);
    v27 = WindowsGetStringRawBuffer(v23, 0LL);
    v28 = WindowsGetStringRawBuffer(v24, 0LL);
    v29 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)pv,
            L"%s_%s_%s_%s",
            v28,
            v27,
            v26,
            StringRawBuffer,
            0);
    v30 = retaddr;
    if ( v29 >= 0 )
      goto LABEL_9;
LABEL_27:
    wil::details::in1diag3::Throw_Hr(
      v30,
      (void *)0x287,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v29);
    JUMPOUT(0x1800706F3LL);
  }
  v16 = v42;
  v17 = v37[0];
  v18 = WindowsGetStringRawBuffer(v40, 0LL);
  v19 = WindowsGetStringRawBuffer(v16, 0LL);
  v20 = WindowsGetStringRawBuffer(v17, 0LL);
  v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s_%s_%s",
          v20,
          v19,
          v18);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v21);
LABEL_23:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x270,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_24;
  }
LABEL_9:
  *a1 = 0LL;
  v31 = (WCHAR *)pv[0];
  if ( pv[0] )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *((_WORD *)pv[0] + v32) );
    if ( v32 > 0xFFFFFFFF )
    {
      v35 = -2147024362;
      goto LABEL_17;
    }
    WindowsDeleteString(0LL);
    v33 = v32;
    v34 = v31;
  }
  else
  {
    WindowsDeleteString(0LL);
    v33 = 0;
    v34 = &Src;
  }
  *a1 = 0LL;
  v35 = WindowsCreateString(v34, v33, a1);
LABEL_17:
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v35);
    __debugbreak();
  }
  if ( v31 )
    CoTaskMemFree(v31);
  WindowsDeleteString(v40);
  v40 = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v42);
  v42 = 0LL;
  WindowsDeleteString(v37[0]);
  return a1;
}
