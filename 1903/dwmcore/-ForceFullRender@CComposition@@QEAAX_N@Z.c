/*
 * XREFs of ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x1800D5844
 * Callers:
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800D57D8 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 * Callees:
 *     <none>
 */

void __fastcall CComposition::ForceFullRender(CComposition *this, char a2)
{
  CRenderTargetManager *v2; // rcx

  v2 = (CRenderTargetManager *)*((_QWORD *)this + 8);
  if ( a2 )
    CRenderTargetManager::ForceDDAFullRender(v2);
  else
    CRenderTargetManager::ForceFullRender(v2);
}
