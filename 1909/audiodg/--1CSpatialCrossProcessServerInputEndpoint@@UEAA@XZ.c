/*
 * XREFs of ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x140057950
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessServerInputEndpoint_::CComAggObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x1400571F5 (_ATL--CComAggObject_CSpatialCrossProcessServerInputEndpoint_--CComAggObject_CSpatia_ea_1400571F5.c)
 *     _ATL::CComObject_CSpatialCrossProcessServerInputEndpoint_::CComObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x14005734B (_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint_--CComObject_CSpatialCrossProcessServer.c)
 * Callees:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140057D40 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::~CSpatialCrossProcessServerInputEndpoint(
        struct _RTL_CRITICAL_SECTION *this)
{
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint((CSpatialCrossProcessServerEndpoint *)this);
  if ( LOBYTE(this[28].DebugInfo) )
  {
    LOBYTE(this[28].DebugInfo) = 0;
    DeleteCriticalSection(this + 27);
  }
}
