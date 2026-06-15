/*
 * XREFs of ??1?$MakeAllocator@VCEndpointVolumeStateManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001900C
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$2 @ 0x180038BFB (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_&___ptr64_CProcess_____ptr64__::_1_::dtor$0 @ 0x180039126 (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CW.c)
 *     _TSSession::Create_::_1_::dtor$2 @ 0x18003972D (_TSSession--Create_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CEndpointVolumeStateManager>::~MakeAllocator<CEndpointVolumeStateManager>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
