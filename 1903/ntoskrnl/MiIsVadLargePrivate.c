/*
 * XREFs of MiIsVadLargePrivate @ 0x140072F8C
 * Callers:
 *     MiCheckUserVirtualAddress @ 0x14005DDB0 (MiCheckUserVirtualAddress.c)
 *     MiInsertPrivateVad @ 0x1400712D0 (MiInsertPrivateVad.c)
 *     MiGetWsAndInsertVad @ 0x1400729C0 (MiGetWsAndInsertVad.c)
 *     MiInsertVad @ 0x14015A7D0 (MiInsertVad.c)
 *     MiPrefetchJumpVad @ 0x1402C701C (MiPrefetchJumpVad.c)
 *     MiRemoveVad @ 0x1402DF048 (MiRemoveVad.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiScrubProcessLargePages @ 0x1402ECF14 (MiScrubProcessLargePages.c)
 *     MiAllocateChildVads @ 0x14089A8C0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14089B3A0 (MiDeletePartialCloneVads.c)
 *     MiMapChildLargePageVads @ 0x14089B788 (MiMapChildLargePageVads.c)
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
