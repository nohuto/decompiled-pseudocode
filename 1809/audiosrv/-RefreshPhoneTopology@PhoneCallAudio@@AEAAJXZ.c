/*
 * XREFs of ?RefreshPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18011C094
 * Callers:
 *     ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x18011BBC0 (-OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::RefreshPhoneTopology(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  DebugInfo = this[1].DebugInfo;
  if ( DebugInfo )
  {
    this[1].DebugInfo = 0LL;
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(DebugInfo);
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION *))(**(_QWORD **)&this[1].LockCount + 32LL))(
         *(_QWORD *)&this[1].LockCount,
         this + 1);
  v4 = 0;
  if ( v3 < 0 )
    v4 = v3;
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
