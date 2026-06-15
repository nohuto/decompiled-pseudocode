/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004D494
 * Callers:
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x14001B257 (_ATL--CComObject_CCrossProcessServerInputEndpoint_--CComObject_CCrossProcessServerInputEndpoint_.c)
 *     _ATL::CComAggObject_CCrossProcessServerInputEndpoint_::CComAggObject_CCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x14004CD01 (_ATL--CComAggObject_CCrossProcessServerInputEndpoint_--CComAggObject_CCrossProcessS_ea_14004CD01.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x14004D8D4 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::~CComContainedObject<CCrossProcessServerInputEndpoint>(
        __int64 a1)
{
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint((CCrossProcessBaseServerEndpoint *)a1);
  if ( *(_BYTE *)(a1 + 528) )
  {
    *(_BYTE *)(a1 + 528) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 488));
  }
}
