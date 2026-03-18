/*
 * XREFs of ?GetHoverTarget@CManipulationContext@@QEBAPEAVCInteraction@@I@Z @ 0x18023B004
 * Callers:
 *     ?TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x180239740 (-TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180236C98 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

struct CInteraction *__fastcall CManipulationContext::GetHoverTarget(CManipulationContext *this, int a2)
{
  int Key; // eax
  __int64 v3; // r10
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 64,
          &v5);
  if ( Key == -1 )
    return 0LL;
  else
    return *(struct CInteraction **)(*(_QWORD *)(v3 + 72) + 8LL * Key);
}
