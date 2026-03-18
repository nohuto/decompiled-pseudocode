/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14002D250
 * Callers:
 *     MiIsFaultPteIntact @ 0x14002D02C (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14002D0E8 (MiFindActualFaultingPte.c)
 *     MiQueryAddressState @ 0x14003EAF0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14003FFE0 (MiGetPageProtection.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiInitializeReadInProgressPfn @ 0x1400656E0 (MiInitializeReadInProgressPfn.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140069700 (MiDeleteVa.c)
 *     MiCommitExistingVad @ 0x140071470 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiIsCfgBitMapPageShared @ 0x140076150 (MiIsCfgBitMapPageShared.c)
 *     MiComputePageCommitment @ 0x140083950 (MiComputePageCommitment.c)
 *     MiSplitPrivatePage @ 0x140083B70 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140085B00 (MiSetReadOnlyOnSectionView.c)
 *     MiWalkVaRange @ 0x140093C90 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiSystemFault @ 0x1400E88E0 (MiSystemFault.c)
 *     MiTranslatePageForCopy @ 0x1400E9C10 (MiTranslatePageForCopy.c)
 *     MiSharedVaToPartition @ 0x14010978C (MiSharedVaToPartition.c)
 *     MiCountSharedPages @ 0x14010AC50 (MiCountSharedPages.c)
 *     MiIsPteEvaluated @ 0x14010F9B4 (MiIsPteEvaluated.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140128C70 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402A38CC (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_14043A0C0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_14043A0C0;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
