/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x14002C538
 * Callers:
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14001AFFC (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140057498 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x1400574DE (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
