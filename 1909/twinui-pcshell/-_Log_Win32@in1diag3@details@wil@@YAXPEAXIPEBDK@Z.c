/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18017CFEC
 * Callers:
 *     ?GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z @ 0x1800495C8 (-GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18033FB70 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x18034BF00 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x18034C248 (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x180407708 (-RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18042DAE0 (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180128160 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v4, retaddr, 2, (int)a4);
}
