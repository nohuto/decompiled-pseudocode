/*
 * XREFs of ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400407A4
 * Callers:
 *     ??_E?$CComAggObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x1400408A0 (--_E-$CComAggObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComAggObject<CVpoContext>::~CComAggObject<CVpoContext>(__int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CVpoContext>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CVpoContext::~CVpoContext((CVpoContext *)(a1 + 24));
}
