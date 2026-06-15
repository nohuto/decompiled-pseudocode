/*
 * XREFs of ??1?$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ @ 0x14004211C
 * Callers:
 *     _ATL::CComObject_CProcessSubmix_::CComObject_CProcessSubmix__::_1_::dtor$0 @ 0x140020F8B (_ATL--CComObject_CProcessSubmix_--CComObject_CProcessSubmix__--_1_--dtor$0.c)
 *     _ATL::CComAggObject_CProcessSubmix_::CComAggObject_CProcessSubmix__::_1_::dtor$1 @ 0x140042051 (_ATL--CComAggObject_CProcessSubmix_--CComAggObject_CProcessSubmix__--_1_--dtor$1.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400102E0 (--1CSubmixImpl@@QEAA@XZ.c)
 */

void __fastcall ATL::CComContainedObject<CProcessSubmix>::~CComContainedObject<CProcessSubmix>(__int64 a1)
{
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 16));
  if ( *(_BYTE *)(a1 + 384) )
  {
    *(_BYTE *)(a1 + 384) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 344));
  }
}
