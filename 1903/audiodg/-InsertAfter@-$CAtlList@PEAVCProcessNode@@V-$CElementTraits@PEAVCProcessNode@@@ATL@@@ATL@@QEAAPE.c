/*
 * XREFs of ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x14001404C
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004980 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F50 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140006F14 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?NewNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCProcessNode@@PEAV312@1@Z @ 0x14001409C (-NewNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAPEAVCN.c)
 */

_QWORD *__fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  if ( !a2 )
    return ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(a1, a3);
  result = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::NewNode(a1, a3, a2, *a2);
  if ( *a2 )
    *(_QWORD *)(*a2 + 8LL) = result;
  else
    *(_QWORD *)(a1 + 8) = result;
  *a2 = result;
  return result;
}
