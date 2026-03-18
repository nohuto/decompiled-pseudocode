/*
 * XREFs of MiMakeTransitionPte @ 0x14002C970
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x140024500 (MiInsertProtectedStandbyPage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002C720 (MiDecrementAndInsertStandbyPages.c)
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 *     MiInitializeTransitionPfn @ 0x140096BD8 (MiInitializeTransitionPfn.c)
 *     MiCompletePrivateZeroFault @ 0x1400AD7E0 (MiCompletePrivateZeroFault.c)
 *     MiOutPageSingleKernelStack @ 0x1400BEC90 (MiOutPageSingleKernelStack.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiTrimSystemImagePages @ 0x1400FA4E8 (MiTrimSystemImagePages.c)
 *     MiMakeProtoTransition @ 0x140117660 (MiMakeProtoTransition.c)
 *     MiDeleteParentDecayNode @ 0x1401185F8 (MiDeleteParentDecayNode.c)
 *     MiCreateDecayPfn @ 0x14011CC34 (MiCreateDecayPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x140131C14 (MiMakeVaRangeNoAccess.c)
 *     MiConvertStandbyToProto @ 0x140140E3C (MiConvertStandbyToProto.c)
 *     MiInitializeUnusablePfns @ 0x140188FE4 (MiInitializeUnusablePfns.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x1402C1310 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 *     MiBuildForkPageTable @ 0x1402E18F0 (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3A90 (MiDuplicateCloneLeaf.c)
 *     MmFreeLoaderBlock @ 0x1409FDF14 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = 32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40);
  if ( qword_140465800 )
  {
    if ( (qword_140465800 & v2) == 0 )
      return v2 | qword_140465800;
    return v2 | 0x10;
  }
  return v2;
}
