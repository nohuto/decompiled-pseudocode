/*
 * XREFs of ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140031674
 * Callers:
 *     ??_G?$CComAggObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140031810 (--_G-$CComAggObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400102E0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CStreamGroup>::~CComAggObject<CStreamGroup>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CStreamGroup>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 48));
  if ( *(_BYTE *)(a1 + 416) )
  {
    *(_BYTE *)(a1 + 416) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 376));
  }
}
