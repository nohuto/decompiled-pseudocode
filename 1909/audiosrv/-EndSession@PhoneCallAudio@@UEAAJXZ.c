/*
 * XREFs of ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x180127A60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ @ 0x180128324 (-OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180128C30 (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneCallAudio::EndSession(PhoneCallAudio *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // r9
  PhoneCallAudio *v8; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
  if ( !*((_QWORD *)this + 16) )
  {
    v2 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_15;
  }
  v13 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v13);
  v3 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         0LL,
         &v13);
  v2 = v3;
  if ( v3 < 0 )
  {
    v4 = 537LL;
LABEL_10:
    v7 = (unsigned int)v3;
    goto LABEL_11;
  }
  v5 = *((_QWORD *)this + 16);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5) == v6 )
  {
    if ( *((_DWORD *)this + 15) )
    {
      *((_DWORD *)this + 15) = 0;
      v8 = (PhoneCallAudio *)((char *)this - 8);
      v3 = PhoneCallAudio::OnPhoneCallEnded(v8);
      v2 = v3;
      if ( v3 < 0 )
      {
        v4 = 546LL;
        goto LABEL_10;
      }
    }
    else
    {
      v8 = (PhoneCallAudio *)((char *)this - 8);
    }
    PhoneCallAudio::SwitchActivePhoneCallEndpoint(v8, eRender, 0LL);
    PhoneCallAudio::SwitchActivePhoneCallEndpoint(v8, eCapture, 0LL);
    v2 = 0;
    goto LABEL_14;
  }
  v2 = -2147418113;
  v7 = 2147549183LL;
  v4 = 538LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
    (const char *)v7);
LABEL_14:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
LABEL_15:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
