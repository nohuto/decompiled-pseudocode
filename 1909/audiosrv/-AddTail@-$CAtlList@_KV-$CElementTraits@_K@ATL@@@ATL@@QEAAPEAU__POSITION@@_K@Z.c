/*
 * XREFs of ?AddTail@?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z @ 0x1800FF464
 * Callers:
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x180100928 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?NewNode@?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@AEAAPEAVCNode@12@_KPEAV312@1@Z @ 0x180100888 (-NewNode@-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@AEAAPEAVCNode@12@_KPEAV312@1@Z.c)
 */

__int64 __fastcall ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::NewNode(a1, a2, a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
