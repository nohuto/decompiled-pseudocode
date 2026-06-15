/*
 * XREFs of ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x1400598AC
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessServerInputEndpoint_::CComAggObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x140059169 (_ATL--CComAggObject_CSpatialCrossProcessServerInputEndpoint_--CComAggObject_CSpatia_ea_140059169.c)
 *     _ATL::CComObject_CSpatialCrossProcessServerInputEndpoint_::CComObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x1400592BF (_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint_--CComObject_CSpatialCrossProcessServer.c)
 * Callees:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140059C78 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::~CSpatialCrossProcessServerInputEndpoint(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(this);
  if ( *((_BYTE *)this + 1152) )
  {
    *((_BYTE *)this + 1152) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 1112));
  }
}
