/*
 * XREFs of MiReturnFaultCharges @ 0x140136414
 * Callers:
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiGetPageForHeader @ 0x140091D8C (MiGetPageForHeader.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiFreeReadListPages @ 0x140647C68 (MiFreeReadListPages.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // r11
  __int64 v5; // r10

  v4 = a2;
  v5 = a1;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a2);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), a2);
  if ( (a3 & 1) != 0 )
    MiReturnCommit(v5, v4);
}
