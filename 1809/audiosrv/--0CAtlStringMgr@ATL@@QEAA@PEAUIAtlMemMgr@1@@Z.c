/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x18005FDB8
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001410 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_1801B44E8 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_1801B44D0 = (__int64)&ATL::g_strheap;
  qword_1801B44E0 = 0LL;
  dword_1801B44F0 = 0;
  result = &ATL::g_strmgr;
  qword_1801B44D8 = (__int64)&ATL::g_strmgr;
  return result;
}
