/*
 * XREFs of ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14003AC2C
 * Callers:
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140039E20 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003ABAC (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004E48 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPipeInstance::GetMixSplitConnection_Internal(__int64 a1, int a2)
{
  __int64 Head; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  Head = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(a1 + 64));
  v4 = *(_QWORD **)Head;
  if ( *(_QWORD *)(*(_QWORD *)Head + 16LL) != 2LL || a2 != 1 )
    return *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v4);
  v5 = v4[1];
  if ( !v5 )
    ATL::AtlThrowImpl(-2147467259);
  return *(_QWORD *)(v5 + 16);
}
