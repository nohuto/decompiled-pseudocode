/*
 * XREFs of ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x18023AEB4
 * Callers:
 *     ?OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ @ 0x1800A8FC0 (-OnInteractionUpdate@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x18023C8E0 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x18023AE30 (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x18023B140 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 */

void __fastcall CManipulationContext::FindMonitorAndWorkspace(
        struct MCCollections *a1,
        struct CInteraction *a2,
        HMONITOR *a3,
        unsigned int *a4)
{
  const struct CInteraction *MCRoot; // rax
  const struct MCCollections *v7; // r8
  struct CManipulationContext *ManipulationContext; // rax
  HMONITOR v9; // rcx
  unsigned int v10; // eax

  *a4 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    MCRoot = CManipulationContext::GetMCRoot(a2);
    ManipulationContext = CManipulationContext::FindManipulationContext(v7, MCRoot, (int *)v7);
    if ( ManipulationContext )
    {
      v9 = (HMONITOR)*((_QWORD *)ManipulationContext + 4);
      v10 = *((_DWORD *)ManipulationContext + 10);
      *a3 = v9;
      *a4 = v10;
    }
  }
}
