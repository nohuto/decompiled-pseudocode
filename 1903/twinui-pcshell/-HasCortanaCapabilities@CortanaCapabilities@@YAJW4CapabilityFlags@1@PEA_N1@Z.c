/*
 * XREFs of ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x18008088C
 * Callers:
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180041A00 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1800431BC (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 *     ?ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C5E6C (-ApplyDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C61A8 (-ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z @ 0x1801C73CC (-IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x1802F4B5C (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z @ 0x18003D92C (-GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaCapabilities::HasCortanaCapabilities(
        int a1,
        enum CortanaCapabilities::CapabilityFlags *a2,
        bool *a3)
{
  int CortanaCapabilities; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  *(_BYTE *)a2 = 0;
  CortanaCapabilities = CortanaCapabilities::GetCortanaCapabilities((CortanaCapabilities *)&v9, a2, a3);
  v6 = CortanaCapabilities;
  if ( CortanaCapabilities < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x114,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
      (const char *)(unsigned int)CortanaCapabilities);
    return v6;
  }
  else
  {
    *(_BYTE *)a2 = (a1 & (unsigned int)v9) == a1;
    return 0LL;
  }
}
