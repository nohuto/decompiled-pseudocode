/*
 * XREFs of ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180237CC0
 * Callers:
 *     ?OnCapturePointer@CGlobalManipulationManager@@AEAAXIPEAVCInteraction@@@Z @ 0x180238B9C (-OnCapturePointer@CGlobalManipulationManager@@AEAAXIPEAVCInteraction@@@Z.c)
 *     ?OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180238EAC (-OnNewContact@CGlobalManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18023AC60 (-TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18023AE50 (-TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame.c)
 *     ?GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z @ 0x18023C7E0 (-GetLastPointerTarget@CManipulationContext@@UEBAJIPEAUTargetingInfo@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x18023D9A0 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?SetCurrentFallbackTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x18023E980 (-SetCurrentFallbackTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z.c)
 *     ?SetCurrentTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z @ 0x18023E9A0 (-SetCurrentTarget@CManipulationContext@@UEAAXAEBUTargetingInfo@@@Z.c)
 *     ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x180260238 (-GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CC07C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 (__fastcall ****__fastcall Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
        __int64 (__fastcall ****a1)(_QWORD),
        _QWORD *a2))(_QWORD)
{
  __int64 (__fastcall ***v2)(_QWORD); // rdi
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD))*a2;
  if ( *a1 != (__int64 (__fastcall ***)(_QWORD))*a2 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD))*a2;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v5);
  }
  return a1;
}
