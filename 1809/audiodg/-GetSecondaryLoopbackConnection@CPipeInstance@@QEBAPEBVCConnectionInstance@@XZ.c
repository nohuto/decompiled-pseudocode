/*
 * XREFs of ?GetSecondaryLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x140004CAC
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140007AA0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

const struct CConnectionInstance *__fastcall CPipeInstance::GetSecondaryLoopbackConnection(CPipeInstance *this)
{
  char *v1; // rbx
  __int64 v2; // rax

  v1 = (char *)this + 64;
  if ( *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((char *)this + 64)
                 + 16LL) != 2LL )
    return 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v1) + 8LL);
  if ( !v2 )
    ATL::AtlThrowImpl(-2147467259);
  return *(const struct CConnectionInstance **)(v2 + 16);
}
