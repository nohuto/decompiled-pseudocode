/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14002D250
 * Callers:
 *     MiIsFaultPteIntact @ 0x14002D02C (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14002D0E8 (MiFindActualFaultingPte.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiInitializeReadInProgressPfn @ 0x1400656D0 (MiInitializeReadInProgressPfn.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiIsCfgBitMapPageShared @ 0x140076140 (MiIsCfgBitMapPageShared.c)
 *     MiComputePageCommitment @ 0x140083940 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085AF0 (MiSetReadOnlyOnSectionView.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiSharedVaToPartition @ 0x14010982C (MiSharedVaToPartition.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 *     MiIsPteEvaluated @ 0x14010FA54 (MiIsPteEvaluated.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128D60 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A3BBC (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_14043B180 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_14043B180;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
