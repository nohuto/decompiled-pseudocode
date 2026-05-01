/*
 * XREFs of _Microsoft::WRL::Details::Make_VirtualDesktopGestureWindow_IVirtualDesktopManagerInternal_____ptr64_ISwitchThumbnailDeviceManager_____ptr64_IApplicationViewCollection_____ptr64_IImmersiveSettingsCache_____ptr64_Geometry::CRect_&___ptr64_HMONITOR_______ptr64_&___ptr64__::_1_::dtor$0 @ 0x18038D6F9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x18038DCA0 (--1-$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::Make_VirtualDesktopGestureWindow_IVirtualDesktopManagerInternal_____ptr64_ISwitchThumbnailDeviceManager_____ptr64_IApplicationViewCollection_____ptr64_IImmersiveSettingsCache_____ptr64_Geometry::CRect_____ptr64_HMONITOR_______ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::~ComPtr<VirtualDesktopGestureWindow>(*(_QWORD *)(a2 + 128));
  }
  return result;
}
