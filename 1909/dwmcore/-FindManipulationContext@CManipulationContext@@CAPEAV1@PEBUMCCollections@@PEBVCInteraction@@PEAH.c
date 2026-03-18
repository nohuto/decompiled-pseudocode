/*
 * XREFs of ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x18023AE30
 * Callers:
 *     ?FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHMONITOR__@@PEAK@Z @ 0x18023AEB4 (-FindMonitorAndWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAPEAUHM.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x18023B39C (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x18023C290 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct CManipulationContext *__fastcall CManipulationContext::FindManipulationContext(
        const struct MCCollections *a1,
        const struct CInteraction *a2,
        int *a3)
{
  __int64 v3; // rbx
  int v6; // edi
  __int64 i; // r14

  v3 = 0LL;
  v6 = 0;
  if ( *((int *)a1 + 8) > 0 )
  {
    for ( i = 0LL;
          (const struct CInteraction *)(*(__int64 (__fastcall **)(_QWORD, const struct CInteraction *, int *))(**(_QWORD **)(i + *((_QWORD *)a1 + 3)) + 16LL))(
                                         *(_QWORD *)(i + *((_QWORD *)a1 + 3)),
                                         a2,
                                         a3) != a2;
          i += 8LL )
    {
      if ( ++v6 >= *((_DWORD *)a1 + 8) )
        return (struct CManipulationContext *)v3;
    }
    return *(struct CManipulationContext **)(*((_QWORD *)a1 + 3) + 8LL * v6);
  }
  return (struct CManipulationContext *)v3;
}
