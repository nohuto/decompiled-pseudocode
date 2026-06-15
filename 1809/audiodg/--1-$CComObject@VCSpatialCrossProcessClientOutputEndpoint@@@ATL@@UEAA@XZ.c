/*
 * XREFs of ??1?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x1400598E0
 * Callers:
 *     ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140059FA0 (--_E-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140059BEC (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::~CComObject<CSpatialCrossProcessClientOutputEndpoint>(
        struct _RTL_CRITICAL_SECTION *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *(_QWORD *)&this->LockCount = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  this->OwningThread = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioProcessBlockRT'};
  this->LockSemaphore = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  this[22].SpinCount = (ULONG_PTR)&ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  this[23].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  *(_QWORD *)&this[23].LockCount = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  this[24].OwningThread = &ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable';
  LODWORD(this[24].SpinCount) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint((CSpatialCrossProcessClientEndpoint *)this);
  if ( LOBYTE(this[26].DebugInfo) )
  {
    LOBYTE(this[26].DebugInfo) = 0;
    DeleteCriticalSection(this + 25);
  }
}
