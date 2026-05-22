/*
 * XREFs of ?Shutdown@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x18016865C
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180163290 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180028AA4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::Shutdown(
        Windows::Internal::SpatialInteractions::HapticsEngine *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v5 = v2;
  *((_BYTE *)this + 231) = 0;
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 128, v3);
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 56LL))(v4, 0LL);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v5);
}
