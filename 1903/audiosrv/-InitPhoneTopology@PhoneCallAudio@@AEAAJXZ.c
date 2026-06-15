/*
 * XREFs of ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800521E4
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x180051E7C (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180128610 (-OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::InitPhoneTopology(PhoneCallAudio *this)
{
  int v2; // ebx
  __int64 *v3; // rsi
  int v4; // eax
  __int64 v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  v2 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &lpCriticalSection,
    (char *)this + 80);
  if ( !*((_DWORD *)this + 16) )
  {
    v3 = (__int64 *)((char *)this + 40);
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 6) + 32LL))(
           *((_QWORD *)this + 6),
           (char *)this + 40);
    if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 120LL))((char *)this + 8), v4 < 0) )
      v2 = v4;
    else
      *((_DWORD *)this + 16) = 1;
    if ( v2 < 0 )
    {
      v5 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
