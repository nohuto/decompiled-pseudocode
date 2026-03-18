/*
 * XREFs of ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x18023B7F8
 * Callers:
 *     ?ProcessFrameInputPostTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180237CC4 (-ProcessFrameInputPostTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180237E48 (-ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x18023BFF0 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 */

void __fastcall CManipulationContext::OnContactHoverDepart(CManipulationContext *this, unsigned int a2)
{
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    (char *)this + 64,
    &v4);
  (*(void (__fastcall **)(CManipulationContext *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, a2, 0LL);
}
