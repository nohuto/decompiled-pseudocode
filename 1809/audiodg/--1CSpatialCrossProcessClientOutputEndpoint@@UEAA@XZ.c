/*
 * XREFs of ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x140059878
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessClientOutputEndpoint_::CComAggObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x14005907B (_ATL--CComAggObject_CSpatialCrossProcessClientOutputEndpoint_--CComAggObject_CSpati_ea_14005907B.c)
 *     _ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint_::CComObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x14005921D (_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint_--CComObject_CSpatialCrossProcessClien.c)
 * Callees:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140059BEC (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessClientOutputEndpoint::~CSpatialCrossProcessClientOutputEndpoint(
        struct _RTL_CRITICAL_SECTION *this)
{
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint((CSpatialCrossProcessClientEndpoint *)this);
  if ( LOBYTE(this[26].DebugInfo) )
  {
    LOBYTE(this[26].DebugInfo) = 0;
    DeleteCriticalSection(this + 25);
  }
}
