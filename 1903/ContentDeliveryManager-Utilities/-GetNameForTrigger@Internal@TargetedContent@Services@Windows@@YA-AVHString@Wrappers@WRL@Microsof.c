/*
 * XREFs of ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E1BC
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___ @ 0x180068134 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_25fdd0f24a46fb88459.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___ @ 0x180068764 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_cbb39659d92f3de8398.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x180068D88 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x1800693C8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___ @ 0x18006A5D4 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_9989ec116c7a722ef40.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E384 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E728 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::GetNameForTrigger(HSTRING *a1, __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  wchar_t **v6; // rax
  __int64 (__fastcall *v7)(__int64, HSTRING *); // rbx
  int v8; // eax
  const WCHAR *v10; // rsi
  unsigned __int64 v11; // rbx
  UINT32 v12; // edx
  const WCHAR *v13; // rcx
  HRESULT v14; // eax
  wil::details::in1diag3 *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v17; // [rsp+68h] [rbp+38h] BYREF
  HSTRING string; // [rsp+70h] [rbp+40h] BYREF

  *a1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v17);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0xA2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  string = 0LL;
  v6 = (wchar_t **)&unk_1800EEC70;
  while ( *(_DWORD *)v6 != v17 )
  {
    v6 += 2;
    if ( v6 == off_1800EECE0 )
      goto LABEL_5;
  }
  v10 = v6[1];
  if ( v10 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    if ( v11 > 0xFFFFFFFF )
    {
      v14 = -2147024362;
      goto LABEL_17;
    }
    WindowsDeleteString(0LL);
    v12 = v11;
    v13 = v10;
  }
  else
  {
    WindowsDeleteString(0LL);
    v12 = 0;
    v13 = &Src;
  }
  string = 0LL;
  v14 = WindowsCreateString(v13, v12, &string);
LABEL_17:
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x5B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_21;
  }
LABEL_5:
  WindowsDeleteString(*a1);
  *a1 = string;
  string = 0LL;
  WindowsDeleteString(0LL);
  if ( WindowsIsStringEmpty(*a1) )
  {
    v7 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL);
    WindowsDeleteString(*a1);
    *a1 = 0LL;
    v8 = v7(a2, a1);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x18006E37CLL);
    }
    if ( WindowsIsStringEmpty(*a1) )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL);
      goto LABEL_20;
    }
  }
  return a1;
}
