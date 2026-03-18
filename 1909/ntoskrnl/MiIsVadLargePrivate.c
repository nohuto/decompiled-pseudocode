/*
 * XREFs of MiIsVadLargePrivate @ 0x1400731FC
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x14005DE50 (MiCheckUserVirtualAddress.c)
 *     MiInsertPrivateVad @ 0x140071540 (MiInsertPrivateVad.c)
 *     MiGetWsAndInsertVad @ 0x140072C30 (MiGetWsAndInsertVad.c)
 *     MiInsertVad @ 0x14015AE70 (MiInsertVad.c)
 *     MiPrefetchJumpVad @ 0x1402C6D7C (MiPrefetchJumpVad.c)
 *     MiRemoveVad @ 0x1402DEDA8 (MiRemoveVad.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x1402ECC74 (MiScrubProcessLargePages.c)
 *     MiAllocateChildVads @ 0x14089A0E0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14089ABC0 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x14089AFA8 (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsVadLargePrivate(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 48);
  return (v1 & 0x100000) != 0 && ((v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000)
      || (v1 & 0x70) == 0x20 && (*(_DWORD *)(a1 + 64) & 0x1000000) != 0;
}
