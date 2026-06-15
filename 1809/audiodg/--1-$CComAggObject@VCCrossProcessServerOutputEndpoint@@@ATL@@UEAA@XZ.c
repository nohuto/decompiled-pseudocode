/*
 * XREFs of ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FA98
 * Callers:
 *     ??_G?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14004FFB0 (--_G-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140015880 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::~CComAggObject<CCrossProcessServerOutputEndpoint>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint((CCrossProcessBaseServerEndpoint *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 560) )
  {
    *(_BYTE *)(a1 + 560) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 520));
  }
}
