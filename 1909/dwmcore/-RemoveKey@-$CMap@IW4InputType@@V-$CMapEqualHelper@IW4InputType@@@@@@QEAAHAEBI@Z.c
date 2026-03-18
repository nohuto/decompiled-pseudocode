/*
 * XREFs of ?RemoveKey@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHAEBI@Z @ 0x180238AE0
 * Callers:
 *     ?OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180237B70 (-OnUp@CGlobalManipulationManager@@AEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x18023C290 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180236C98 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

__int64 __fastcall CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::RemoveKey(
        __int64 a1,
        int *a2)
{
  unsigned int Key; // eax
  __int64 v3; // r10

  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          a1,
          a2);
  if ( Key == -1 )
    return 0LL;
  else
    return CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::RemoveRange(v3, Key);
}
