/*
 * XREFs of ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1802385D0
 * Callers:
 *     ?CalculateFrameTargets@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238010 (-CalculateFrameTargets@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?CheckForBufferedDescendant@CGlobalManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x180238130 (-CheckForBufferedDescendant@CGlobalManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?ProcessFrameInputPostTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1802393D4 (-ProcessFrameInputPostTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18023AC60 (-TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1802383A8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

__int64 (__fastcall ****__fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD),
        int *a3))(_QWORD)
{
  int Key; // eax
  __int64 v5; // r10

  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1,
          a3);
  if ( Key == -1 )
  {
    *a2 = 0LL;
  }
  else
  {
    *a2 = *(__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)(v5 + 8) + 8LL * Key);
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(a2);
  }
  return a2;
}
