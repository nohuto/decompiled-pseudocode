/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@QEAA@XZ @ 0x18038CC5C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopAcessibility_VirtualDesktopAcessibility_enum__TABLETMODESTATE_&___ptr64_IVirtualDesktopNotificationServicePrivate_____ptr64_&___ptr64_IVirtualDesktopCollection_____ptr64_&___ptr64_IVirtualDesktopManagerPrivate_____ptr64_&___ptr64_IVirtualDesktopLock_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x18038CA2E (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopAcessibility_VirtualDeskt_ea_18038CA2E.c)
 *     _VirtualDesktopAcessibility_CreateInstance_::_1_::dtor$0 @ 0x18038D2D6 (_VirtualDesktopAcessibility_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::~ComPtr<VirtualDesktopAcessibility>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease(a1);
}
