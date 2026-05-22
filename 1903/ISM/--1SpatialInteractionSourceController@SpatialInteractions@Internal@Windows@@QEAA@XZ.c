/*
 * XREFs of ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180163290
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@@std@@EEAAXXZ @ 0x1800E6420 (-_Destroy@-$_Ref_count_obj@VSpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180028AA4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800DE9C4 (--1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??$ControllerHapticsStatistics@AEAKAEAJAEAJAEAN@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAKAEAJ1AEAN@Z @ 0x180161DA8 (--$ControllerHapticsStatistics@AEAKAEAJAEAJAEAN@SpatialInteractionTrace@SpatialInteractionDevice.c)
 *     ?Close@?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x180164254 (-Close@-$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@M.c)
 *     ?ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x180167AA0 (-ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Intern.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x180167B2C (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ?Shutdown@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x18016865C (-Shutdown@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::~SpatialInteractionSourceController(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  Windows::Internal::SpatialInteractions::HapticsEngine *v3; // rcx
  int *v4; // r8
  void *v5; // rbx
  __int64 v6; // rdx
  const struct std::nothrow_t *v7; // rdx
  double v8; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::`vftable';
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 752);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 752));
  v8 = *(double *)&v2;
  v3 = (Windows::Internal::SpatialInteractions::HapticsEngine *)*((_QWORD *)this + 99);
  if ( v3 )
    Windows::Internal::SpatialInteractions::HapticsEngine::Shutdown(v3);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock((struct _RTL_CRITICAL_SECTION **)&v8);
  v8 = DOUBLE_N1_0;
  v4 = (int *)((char *)this + 812);
  if ( *((_DWORD *)this + 203) )
    v8 = (double)*((int *)this + 204) / (double)*v4;
  SpatialInteractionDevices::SpatialInteractionTrace::ControllerHapticsStatistics<unsigned long &,long &,long &,double &>(
    (unsigned int *)this + 2,
    (int *)this + 202,
    v4,
    &v8);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler(this);
  v5 = (void *)*((_QWORD *)this + 62);
  if ( v5 )
  {
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      *((SpatialInteractionDevices::SpatialInteractionHeartbeat **)this + 62),
      1);
    operator delete(v5, (const struct std::nothrow_t *)0x40);
    *((_QWORD *)this + 62) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 99);
  DeleteCriticalSection(v2);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 92);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 696));
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 608, v6);
  *((_QWORD *)this + 72) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::Close((char *)this + 576);
  SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120),
    v7);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 14);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::~SpatialInteractionSourceDevice(this);
}
