/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180259968
 * Callers:
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x18025AB08 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18025B5B8 (-begin@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18025B5E0 (-end@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x18026ECEC (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJXZ @ 0x18038F4C8 (-Initialize@VirtualDesktopGestureContext@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18025A534 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(a1);
  return a1;
}
