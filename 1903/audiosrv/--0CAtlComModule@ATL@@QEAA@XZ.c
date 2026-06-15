/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x18004F664
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001420 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180026DD0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  memset_0(&stru_1801B9550, 0, sizeof(stru_1801B9550));
  ATL::_AtlComModule = 0;
  qword_1801B9538 = (__int64)&_ImageBase;
  qword_1801B9540 = (__int64)&_pobjMap_CAPOWrapperSrv;
  qword_1801B9548 = (__int64)&_pobjMapEntryLast;
  if ( (int)ATL::CComCriticalSection::Init(&stru_1801B9550) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
