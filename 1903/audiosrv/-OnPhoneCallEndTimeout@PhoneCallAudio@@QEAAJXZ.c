/*
 * XREFs of ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1801286BC
 * Callers:
 *     ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x180129390 (-TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x180127A38 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x180128498 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180129070 (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::OnPhoneCallEndTimeout(PhoneCallAudio *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  if ( !(unsigned int)PhoneCallAudio::IsInCall((struct _RTL_CRITICAL_SECTION *)this) )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)this + 2);
    PhoneCallAudio::CleanupRouting(this);
    *((_DWORD *)this + 19) = 2;
    PhoneCallAudio::SwitchActivePhoneCallEndpoint(this, eRender, 0LL);
    PhoneCallAudio::SwitchActivePhoneCallEndpoint(this, eCapture, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 480LL))(*((_QWORD *)this + 17), 0LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 17);
    if ( v4 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return 0LL;
}
