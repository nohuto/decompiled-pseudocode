/*
 * XREFs of ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14003F008
 * Callers:
 *     ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x14003F0E0 (--_G-$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14003DA68 (--1CSubmixImpl@@QEAA@XZ.c)
 */

void __fastcall ATL::CComObject<CProcessSubmix>::~CComObject<CProcessSubmix>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 16) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
  *(_DWORD *)(a1 + 336) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 16));
  if ( *(_BYTE *)(a1 + 384) )
  {
    *(_BYTE *)(a1 + 384) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 344));
  }
}
