/*
 * XREFs of ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x18002A400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::GetNilString(ATL::CAtlStringMgr *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 8);
  return (ATL::CAtlStringMgr *)((char *)this + 16);
}
