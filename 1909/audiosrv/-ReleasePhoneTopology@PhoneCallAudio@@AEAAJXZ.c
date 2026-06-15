/*
 * XREFs of ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180128738
 * Callers:
 *     ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180128200 (-OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x1801275F8 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180128C30 (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::ReleasePhoneTopology(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  if ( LODWORD(this[1].LockSemaphore) )
  {
    DebugInfo = this[1].DebugInfo;
    if ( DebugInfo )
    {
      this[1].DebugInfo = 0LL;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(DebugInfo);
    }
    PhoneCallAudio::CleanupRouting((PhoneCallAudio *)this);
    HIDWORD(this[1].LockSemaphore) = 0;
    LODWORD(this[1].LockSemaphore) = 0;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)this[1].OwningThread + 8LL))(this[1].OwningThread);
    PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)this, eRender, 0LL);
    PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)this, eCapture, 0LL);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
