/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x140015460
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1400011E0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  __int64 *result; // rax

  dword_140086130 = 2;
  ATL::g_strmgr = (__int64)&ATL::CAtlStringMgr::`vftable';
  qword_140086118 = (__int64)&ATL::g_strheap;
  qword_140086128 = 0LL;
  dword_140086138 = 0;
  result = &ATL::g_strmgr;
  qword_140086120 = (__int64)&ATL::g_strmgr;
  return result;
}
