/*
 * XREFs of ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800A90C0
 * Callers:
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18006F52C (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006F5F0 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180070880 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x1800A9A44 (-MakeSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer@Com.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 80LL))(v6, a3, a4 ^ 1u, &v10);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x1800A9155LL);
  }
  CreativeFramework::CommonHelper::MakeSettingsContainer(a2, v10);
  *(_BYTE *)(a1 + 32) = 1;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return a2;
}
