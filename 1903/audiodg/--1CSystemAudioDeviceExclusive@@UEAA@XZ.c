/*
 * XREFs of ??1CSystemAudioDeviceExclusive@@UEAA@XZ @ 0x1400303A0
 * Callers:
 *     _ATL::CComObject_CSystemAudioDeviceExclusive_::CComObject_CSystemAudioDeviceExclusive__::_1_::dtor$0 @ 0x1400300C5 (_ATL--CComObject_CSystemAudioDeviceExclusive_--CComObject_CSystemAudioDeviceExclusive__--_1_--dt.c)
 *     ??1?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x14003019C (--1-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x1400301E8 (--1-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x1400301F4 (--1-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ.c)
 *     ??_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z @ 0x1400304F0 (--_ECSystemAudioDeviceExclusive@@UEAAPEAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     ??1CSystemAudioDeviceBase@@UEAA@XZ @ 0x140030264 (--1CSystemAudioDeviceBase@@UEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ @ 0x1400305F0 (-Cleanup@CSystemAudioDeviceExclusive@@MEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(CSystemAudioDeviceExclusive *this)
{
  __int128 v2; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)this = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &CSystemAudioDeviceExclusive::`vftable'{for `ISubmix'};
  v2 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v2);
  if ( !*((_DWORD *)this + 96) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
    CSystemAudioDeviceExclusive::Cleanup(this);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  }
  EtwEventActivityIdControl(4LL, &v2);
  CSystemAudioDeviceBase::~CSystemAudioDeviceBase(this);
  if ( *((_BYTE *)this + 344) )
  {
    *((_BYTE *)this + 344) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 304));
  }
}
