/*
 * XREFs of ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x140029BDC
 * Callers:
 *     _ATL::CComObject_CStreamGroup_::CComObject_CStreamGroup__::_1_::dtor$0 @ 0x14001B018 (_ATL--CComObject_CStreamGroup_--CComObject_CStreamGroup__--_1_--dtor$0.c)
 *     _ATL::CComAggObject_CStreamGroup_::CComAggObject_CStreamGroup__::_1_::dtor$1 @ 0x140029AFC (_ATL--CComAggObject_CStreamGroup_--CComAggObject_CStreamGroup__--_1_--dtor$1.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14003DAB8 (--1CSubmixImpl@@QEAA@XZ.c)
 */

void __fastcall ATL::CComContainedObject<CStreamGroup>::~CComContainedObject<CStreamGroup>(__int64 a1)
{
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 392) )
  {
    *(_BYTE *)(a1 + 392) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 352));
  }
}
