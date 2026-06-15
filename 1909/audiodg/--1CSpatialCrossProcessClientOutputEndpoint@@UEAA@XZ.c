/*
 * XREFs of ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x14005791C
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessClientOutputEndpoint_::CComAggObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x140057107 (_ATL--CComAggObject_CSpatialCrossProcessClientOutputEndpoint_--CComAggObject_CSpati_ea_140057107.c)
 *     _ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint_::CComObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x1400572A9 (_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint_--CComObject_CSpatialCrossProcessClien.c)
 * Callees:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140057CB4 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessClientOutputEndpoint::~CSpatialCrossProcessClientOutputEndpoint(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(this);
  if ( *((_BYTE *)this + 1048) )
  {
    *((_BYTE *)this + 1048) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 1008));
  }
}
