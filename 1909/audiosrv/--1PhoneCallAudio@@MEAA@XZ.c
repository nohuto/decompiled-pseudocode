/*
 * XREFs of ??1PhoneCallAudio@@MEAA@XZ @ 0x180127468
 * Callers:
 *     ??_GPhoneCallAudio@@MEAAPEAXI@Z @ 0x180127564 (--_GPhoneCallAudio@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?Free@?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ @ 0x180064254 (-Free@-$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180064DA0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PhoneCallAudio::~PhoneCallAudio(PhoneCallAudio *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = &PhoneCallAudio::`vftable'{for `IEndpointNotificationCallback'};
  *((_QWORD *)this + 1) = &PhoneCallAudio::`vftable'{for `ITelephonyControl'};
  *((_QWORD *)this + 2) = &PhoneCallAudio::`vftable'{for `ITelephonyControlInternal'};
  *((_QWORD *)this + 3) = &PhoneCallAudio::`vftable'{for `CUnknown'};
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  ATL::CAutoPtr<PhoneCallEndTimer>::Free((__int64 *)this + 7);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 17);
  `eh vector destructor iterator'(
    (char *)this + 120,
    8LL,
    2LL,
    (void (*)(void *))ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  ATL::CAutoPtr<PhoneCallEndTimer>::Free((__int64 *)this + 7);
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 3) = &CUnknown::`vftable';
}
