/*
 * XREFs of ??1?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAA@XZ @ 0x140035D48
 * Callers:
 *     ??_E?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAPEAXI@Z @ 0x140035F50 (--_E-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::~CComObject<CSystemAudioDeviceExclusive>(
        CSystemAudioDeviceExclusive *this)
{
  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 3) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `ISubmix'};
  *((_DWORD *)this + 74) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSystemAudioDeviceExclusive::~CSystemAudioDeviceExclusive(this);
}
