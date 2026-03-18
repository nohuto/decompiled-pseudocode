/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x140102370
 * Callers:
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     MiComputePageCommitment @ 0x140020D00 (MiComputePageCommitment.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D300 (MiIsCfgBitMapPageShared.c)
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiIsPteEvaluated @ 0x140076164 (MiIsPteEvaluated.c)
 *     MiInitializeReadInProgressPfn @ 0x1400A5280 (MiInitializeReadInProgressPfn.c)
 *     MiGetPageProtection @ 0x1400C5F50 (MiGetPageProtection.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiWalkVaRange @ 0x1400DE274 (MiWalkVaRange.c)
 *     MiSharedVaToPartition @ 0x1400F042C (MiSharedVaToPartition.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiCountSharedPages @ 0x1401007A0 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiCheckProtoAccess @ 0x140102060 (MiCheckProtoAccess.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140102110 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsFaultPteIntact @ 0x140102138 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1401021F4 (MiFindActualFaultingPte.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAD8C (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140465B00 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140465B00;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
