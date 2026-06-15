/*
 * XREFs of ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14003EF68
 * Callers:
 *     ??_E?$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x14003F0A0 (--_E-$CComAggObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14003DA68 (--1CSubmixImpl@@QEAA@XZ.c)
 */

void __fastcall ATL::CComAggObject<CProcessSubmix>::~CComAggObject<CProcessSubmix>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CProcessSubmix>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 408) )
  {
    *(_BYTE *)(a1 + 408) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 368));
  }
}
