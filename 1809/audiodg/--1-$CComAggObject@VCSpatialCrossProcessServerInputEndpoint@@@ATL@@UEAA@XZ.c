/*
 * XREFs of ??1?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140059810
 * Callers:
 *     ??_E?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140059E60 (--_E-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140059C78 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::~CComAggObject<CSpatialCrossProcessServerInputEndpoint>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CSpatialCrossProcessServerInputEndpoint>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint((CSpatialCrossProcessServerEndpoint *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 1176) )
  {
    *(_BYTE *)(a1 + 1176) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 1136));
  }
}
