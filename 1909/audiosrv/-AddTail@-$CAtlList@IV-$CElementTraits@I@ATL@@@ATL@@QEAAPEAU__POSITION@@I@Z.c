/*
 * XREFs of ?AddTail@?$CAtlList@IV?$CElementTraits@I@ATL@@@ATL@@QEAAPEAU__POSITION@@I@Z @ 0x180149550
 * Callers:
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x18014A0C8 (-Initialize@TelephonyController@@IEAAJXZ.c)
 * Callees:
 *     ?NewNode@?$CAtlList@IV?$CElementTraits@I@ATL@@@ATL@@AEAAPEAVCNode@12@IPEAV312@0@Z @ 0x18014ABB4 (-NewNode@-$CAtlList@IV-$CElementTraits@I@ATL@@@ATL@@AEAAPEAVCNode@12@IPEAV312@0@Z.c)
 */

__int64 __fastcall ATL::CAtlList<unsigned int,ATL::CElementTraits<unsigned int>>::AddTail(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = ATL::CAtlList<unsigned int,ATL::CElementTraits<unsigned int>>::NewNode(a1, a2, a1[1]);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
