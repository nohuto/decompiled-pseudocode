/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004D5E8
 * Callers:
 *     _ATL::CComAggObject_CCrossProcessServerOutputEndpoint_::CComAggObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$1 @ 0x14004CEF7 (_ATL--CComAggObject_CCrossProcessServerOutputEndpoint_--CComAggObject_CCrossProcess_ea_14004CEF7.c)
 *     _ATL::CComObject_CCrossProcessServerOutputEndpoint_::CComObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$0 @ 0x14004D0D9 (_ATL--CComObject_CCrossProcessServerOutputEndpoint_--CComObject_CCrossProcessServerOutputEndpoin.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x14004D9F4 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::~CComContainedObject<CCrossProcessServerOutputEndpoint>(
        __int64 a1)
{
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint((CCrossProcessBaseServerEndpoint *)a1);
  if ( *(_BYTE *)(a1 + 536) )
  {
    *(_BYTE *)(a1 + 536) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  }
}
