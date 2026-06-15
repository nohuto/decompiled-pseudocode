/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x1400317B4
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$0 @ 0x14005EB54 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x140031A24 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CHandle::~CHandle(ATL::CHandle *this)
{
  if ( *(_QWORD *)this )
    ATL::CHandle::Close(this);
}
