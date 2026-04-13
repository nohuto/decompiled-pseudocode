/*
 * XREFs of ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006CB04
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006DA80 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006DE40 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006E0FC (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012CA4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003148C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006C68C (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18006C7E4 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x18006C8B8 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006C98C (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  char *StringRawBuffer; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  PCWSTR v11; // rbx
  __int64 v12; // rax
  void **v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  void *v16; // rbx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  char *v19; // rdx
  int v20; // eax
  char *v21; // rdx
  unsigned __int64 v22; // r8
  int v24[2]; // [rsp+28h] [rbp-79h]
  HSTRING v25; // [rsp+48h] [rbp-59h] BYREF
  HSTRING v26; // [rsp+50h] [rbp-51h] BYREF
  int v27; // [rsp+58h] [rbp-49h] BYREF
  HSTRING string; // [rsp+60h] [rbp-41h] BYREF
  void *Src; // [rsp+68h] [rbp-39h] BYREF
  __int64 v30; // [rsp+70h] [rbp-31h]
  __int64 v31; // [rsp+78h] [rbp-29h]
  LPVOID pv[4]; // [rsp+80h] [rbp-21h] BYREF
  void *v33[2]; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+Fh]
  unsigned __int64 v35; // [rsp+B8h] [rbp+17h]
  void *v36[3]; // [rsp+C0h] [rbp+1Fh] BYREF
  unsigned __int64 v37; // [rsp+D8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  pv[3] = (LPVOID)-2LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v27);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_30;
  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&string, a2);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  Windows::Services::TargetedContent::Internal::NormalizedString(v36, StringRawBuffer);
  v25 = 0LL;
  if ( (Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v27) & 0x100) == 0 )
  {
    WindowsDeleteString(v25);
    v25 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &v25);
    v8 = retaddr;
    if ( v7 < 0 )
      goto LABEL_31;
  }
  v26 = 0LL;
  WindowsDeleteString(0LL);
  v26 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 144LL))(a2, &v26);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0xBA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_33;
  }
  if ( WindowsIsStringEmpty(v26) )
    v11 = (PCWSTR)L"Initial";
  else
    v11 = WindowsGetStringRawBuffer(v26, 0LL);
  v12 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v27);
  memset(pv, 0, 24);
  v13 = v36;
  if ( v37 >= 8 )
    v13 = (void **)v36[0];
  v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s%s%s",
          v12,
          L":",
          v13);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0xC1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x18006CE91LL);
  }
  Src = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( WindowsIsStringEmpty(v25) )
  {
    *(_QWORD *)v24 = v11;
    v16 = pv[0];
    v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&Src,
            L"%s%s%s",
            pv[0],
            L"-",
            *(_QWORD *)v24);
    v18 = retaddr;
    if ( v17 >= 0 )
      goto LABEL_17;
    goto LABEL_29;
  }
  v19 = (char *)WindowsGetStringRawBuffer(v25, 0LL);
  Windows::Services::TargetedContent::Internal::NormalizedString(v33, v19);
  v16 = pv[0];
  v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&Src,
          L"%s%s%s%s%s",
          pv[0]);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v20);
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0xC8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v17);
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0xB6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_32;
  }
  if ( v35 >= 8 )
    operator delete(v33[0]);
LABEL_17:
  v21 = (char *)Src;
  Src = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v35 = 7LL;
  v34 = 0LL;
  LOWORD(v33[0]) = 0;
  if ( *(_WORD *)v21 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_WORD *)&v21[2 * v22] );
  }
  else
  {
    v22 = 0LL;
  }
  std::wstring::assign(v33, v21, v22);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v33);
  if ( v35 >= 8 )
    operator delete(v33[0]);
  v35 = 7LL;
  v34 = 0LL;
  LOWORD(v33[0]) = 0;
  if ( v16 )
    CoTaskMemFree(v16);
  WindowsDeleteString(v26);
  v26 = 0LL;
  WindowsDeleteString(v25);
  v25 = 0LL;
  if ( v37 >= 8 )
    operator delete(v36[0]);
  v37 = 7LL;
  v36[2] = 0LL;
  LOWORD(v36[0]) = 0;
  WindowsDeleteString(string);
  return a1;
}
