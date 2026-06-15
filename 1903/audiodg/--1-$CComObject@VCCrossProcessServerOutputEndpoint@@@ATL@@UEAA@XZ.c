/*
 * XREFs of ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004D824
 * Callers:
 *     ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004DF90 (--_E-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x14004D9F4 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::~CComObject<CCrossProcessServerOutputEndpoint>(
        CCrossProcessBaseServerEndpoint *this)
{
  *(_QWORD *)this = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 50) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  *((_QWORD *)this + 57) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  *((_QWORD *)this + 60) = &ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vftable'{for `ICPAudioHistoryWriter'};
  *((_DWORD *)this + 122) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( *((_BYTE *)this + 536) )
  {
    *((_BYTE *)this + 536) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  }
}
