/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x1400CBD20
 * Callers:
 *     MiSplitPrivatePage @ 0x140020550 (MiSplitPrivatePage.c)
 *     MiComputePageCommitment @ 0x1400210F0 (MiComputePageCommitment.c)
 *     MiSetReadOnlyOnSectionView @ 0x14002EA90 (MiSetReadOnlyOnSectionView.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiIsCfgBitMapPageShared @ 0x14005D3A0 (MiIsCfgBitMapPageShared.c)
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiIsPteEvaluated @ 0x1400763D4 (MiIsPteEvaluated.c)
 *     MiInitializeReadInProgressPfn @ 0x140092AB0 (MiInitializeReadInProgressPfn.c)
 *     MiGetPageProtection @ 0x1400A5DD0 (MiGetPageProtection.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400CA9A0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsFaultPteIntact @ 0x1400CBAE8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x1400CBBA4 (MiFindActualFaultingPte.c)
 *     MiSharedVaToPartition @ 0x1400DDB3C (MiSharedVaToPartition.c)
 *     MiCountSharedPages @ 0x140105ED0 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiCheckProtoAccess @ 0x14012BDF8 (MiCheckProtoAccess.c)
 *     MiCheckCommitReleaseFromVad @ 0x1402BAAEC (MiCheckCommitReleaseFromVad.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(unsigned __int64 a1)
{
  if ( (a1 & 0x400) == 0 )
    return 0LL;
  if ( qword_140465800 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140465800;
  }
  return HIDWORD(a1) == 0xFFFFFFFF;
}
