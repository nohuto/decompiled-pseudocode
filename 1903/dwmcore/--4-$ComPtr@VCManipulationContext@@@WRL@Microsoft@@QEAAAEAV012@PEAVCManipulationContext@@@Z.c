/*
 * XREFs of ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801E4F4C
 * Callers:
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801E5EEC (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?CheckForBufferedDescendant@CGlobalManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x180238130 (-CheckForBufferedDescendant@CGlobalManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180238EAC (-OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180239558 (-ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x18023D9A0 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x180260C40 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 (__fastcall ****__fastcall Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
        __int64 (__fastcall ****a1)(_QWORD),
        __int64 (__fastcall ***a2)(_QWORD)))(_QWORD)
{
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v5);
  }
  return a1;
}
