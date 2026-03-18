/*
 * XREFs of ?GetContactLeaf@CManipulationContext@@UEBAPEAUIInteractionResource@@I@Z @ 0x1801F6DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801EA4A8 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

struct IInteractionResource *__fastcall CManipulationContext::GetContactLeaf(CManipulationContext *this, int a2)
{
  int Key; // eax
  __int64 v3; // r10
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 64,
          &v5);
  return *(struct IInteractionResource **)(*(_QWORD *)(v3 + 72) + 8LL * Key);
}
