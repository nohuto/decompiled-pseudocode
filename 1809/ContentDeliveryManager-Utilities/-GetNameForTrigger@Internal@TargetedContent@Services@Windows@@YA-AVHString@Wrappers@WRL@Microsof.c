/*
 * XREFs of ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006C98C
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___ @ 0x180066660 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_25fdd0f24a46fb88459.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___ @ 0x180066C80 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_cbb39659d92f3de8398.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x180067290 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x1800678BC (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_110eb44a907dca3d37f57f1aaae9d13b___ @ 0x180068AB4 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_110eb44a907dca3d37f.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006CB04 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006CE98 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x18006EFEC (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::GetNameForTrigger(HSTRING *a1, __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  wchar_t **v6; // rdx
  int v7; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+48h] [rbp+10h] BYREF
  HSTRING string; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v12);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0xA1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  string = 0LL;
  v6 = (wchar_t **)&unk_1800EAC30;
  while ( *(_DWORD *)v6 != v12 )
  {
    v6 += 2;
    if ( v6 == off_1800EACA0 )
      goto LABEL_5;
  }
  v9 = Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(&string);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x5A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_13;
  }
LABEL_5:
  WindowsDeleteString(*a1);
  *a1 = string;
  string = 0LL;
  WindowsDeleteString(0LL);
  if ( WindowsIsStringEmpty(*a1) )
  {
    WindowsDeleteString(*a1);
    *a1 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, a1);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v7);
      JUMPOUT(0x18006CAFBLL);
    }
    if ( WindowsIsStringEmpty(*a1) )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL);
      goto LABEL_12;
    }
  }
  return a1;
}
