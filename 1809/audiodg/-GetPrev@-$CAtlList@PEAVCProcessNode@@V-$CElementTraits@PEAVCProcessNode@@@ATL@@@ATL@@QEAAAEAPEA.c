/*
 * XREFs of ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140011C9C
 * Callers:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140010F90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 + 16;
}
