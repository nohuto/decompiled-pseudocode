/*
 * XREFs of ??1MPCInputProviderBase@@UEAA@XZ @ 0x18013CE4C
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180091BE0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft.c)
 *     ??_EMPCInputProviderBase@@UEAAPEAXI@Z @ 0x180091C30 (--_EMPCInputProviderBase@@UEAAPEAXI@Z.c)
 *     ??_GMPCVoiceProcessor@@UEAAPEAXI@Z @ 0x180091C70 (--_GMPCVoiceProcessor@@UEAAPEAXI@Z.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x18012EE04 (--1MPCSixDofProcessor@@UEAA@XZ.c)
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x180133E6C (--1MPCHandProcessor@@UEAA@XZ.c)
 *     ??1MPCGamepadProcessor@@UEAA@XZ @ 0x180136E10 (--1MPCGamepadProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18013715C (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProvider.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAA@XZ @ 0x180139FDC (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorFo.c)
 *     ??1MPCMouseProcessor@@UEAA@XZ @ 0x18013A008 (--1MPCMouseProcessor@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18013A144 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorF.c)
 *     ??_GMPCClickerProcessor@@UEAAPEAXI@Z @ 0x18013F9B0 (--_GMPCClickerProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?_Tidy@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXXZ @ 0x180091FC4 (-_Tidy@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@IEAAXX.c)
 *     ?MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x18013DE50 (-MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 */

void __fastcall MPCInputProviderBase::~MPCInputProviderBase(MPCInputProviderBase *this)
{
  __int64 v2; // rcx
  ISMTracing *v3; // rcx

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v2, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCInputProviderBase_Destroy_(v3, *((const struct DeviceInfo **)this + 6));
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 576);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 575);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 574);
  std::deque<RayStabilizationResult>::_Tidy((_QWORD *)this + 48);
  std::_Deallocate<16,0>(*((void **)this + 48), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 48) = 0LL;
}
