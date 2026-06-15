/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x1800643D4
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001480 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_1801B8598 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_1801B8580 = (__int64)&ATL::g_strheap;
  qword_1801B8590 = 0LL;
  dword_1801B85A0 = 0;
  result = &ATL::g_strmgr;
  qword_1801B8588 = (__int64)&ATL::g_strmgr;
  return result;
}
