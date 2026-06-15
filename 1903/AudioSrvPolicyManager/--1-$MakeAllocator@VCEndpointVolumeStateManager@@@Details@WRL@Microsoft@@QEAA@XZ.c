/*
 * XREFs of ??1?$MakeAllocator@VCEndpointVolumeStateManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180007A20
 * Callers:
 *     _CWindowsPolicyManager::HandleVirtualStreamStateChange_::_1_::dtor$3 @ 0x180035DFF (_CWindowsPolicyManager--HandleVirtualStreamStateChange_--_1_--dtor$3.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$2 @ 0x18003663F (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager___&_CProcess____::_1_::dtor$0 @ 0x180036B64 (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CW.c)
 *     _TSSession::Create_::_1_::dtor$3 @ 0x1800371A5 (_TSSession--Create_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CEndpointVolumeStateManager>::~MakeAllocator<CEndpointVolumeStateManager>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
