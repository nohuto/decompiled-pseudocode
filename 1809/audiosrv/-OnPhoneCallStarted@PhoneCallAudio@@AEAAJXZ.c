/*
 * XREFs of ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18011BD80
 * Callers:
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18011C450 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x18011BA48 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011D72C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18011F1FC (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneCallAudio::OnPhoneCallStarted(PhoneCallAudio *this)
{
  int v2; // eax
  unsigned int v3; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-168h] BYREF
  char v6; // [rsp+28h] [rbp-160h]
  __int64 v7; // [rsp+30h] [rbp-158h]
  PhoneCallAudio *v8; // [rsp+38h] [rbp-150h]
  char v9; // [rsp+40h] [rbp-148h]
  _DWORD v10[72]; // [rsp+50h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v7 = -2LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  if ( !(unsigned int)PhoneCallAudio::IsInCall((struct _RTL_CRITICAL_SECTION *)this) )
    goto LABEL_5;
  memset_0(v10, 0, 0x114uLL);
  v10[0] = 0;
  v10[3] = 2;
  v10[2] = 3;
  v10[1] = 2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
  v8 = this;
  v9 = 1;
  if ( *((_QWORD *)this + 18)
    || (v2 = DynamicAudioEndpointManager::AddRule(
               g_DynamicAudioEndpointManager,
               *((struct IAudioProcess **)this + 17),
               (struct _DynamicRoutingRule *)v10,
               (__int64 *)this + 18),
        v3 = v2,
        v2 >= 0) )
  {
LABEL_5:
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      899LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v2);
    DynamicAudioEndpointManager::RemoveRule(
      g_DynamicAudioEndpointManager,
      *((struct IAudioProcess **)this + 17),
      *((_QWORD *)this + 18));
    *((_QWORD *)this + 18) = 0LL;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
