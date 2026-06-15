/*
 * XREFs of ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x18002A290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlStringMgr::Free(ATL::CAtlStringMgr *this, struct ATL::CStringData *a2)
{
  if ( a2 )
    HeapFree(*(HANDLE *)(*((_QWORD *)this + 1) + 8LL), 0, a2);
}
