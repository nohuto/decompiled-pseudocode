/*
 * XREFs of MiReturnFaultCharges @ 0x140134854
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiObtainFaultCharges @ 0x140064D60 (MiObtainFaultCharges.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiGetPageForHeader @ 0x1400934B8 (MiGetPageForHeader.c)
 *     MiPrivateFixup @ 0x140125E40 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140154B44 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1402AF640 (MiSwitchToTransition.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiFreeReadListPages @ 0x140662960 (MiFreeReadListPages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 */

void __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), a2);
  if ( (a3 & 1) != 0 )
    MiReturnCommit(a1, a2);
}
