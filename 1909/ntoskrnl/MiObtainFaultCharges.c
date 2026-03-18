/*
 * XREFs of MiObtainFaultCharges @ 0x140053830
 * Callers:
 *     MiGetPageForHeader @ 0x140091D8C (MiGetPageForHeader.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     MiPickClusterForMappedFileFault @ 0x140093ED0 (MiPickClusterForMappedFileFault.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiChargePartitionResidentAvailable @ 0x1400CA9C8 (MiChargePartitionResidentAvailable.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnFaultCharges @ 0x140136414 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiObtainFaultCharges(ULONG_PTR *a1, unsigned int a2, char a3)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v10; // zf
  unsigned __int32 v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // r8

  while ( 1 )
  {
    v6 = a2;
    v7 = a2;
    if ( a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( a2 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v11 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - a2,
                  CachedResidentAvailable);
          v10 = (_DWORD)CachedResidentAvailable == v11;
          LODWORD(CachedResidentAvailable) = v11;
          if ( v10 )
            goto LABEL_5;
        }
        while ( a2 <= (unsigned __int64)v11 );
      }
    }
    v14 = 1LL;
    if ( a2 != 1 )
      v14 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, v14) )
      break;
    a2 >>= 1;
    if ( v7 < 2 )
      goto LABEL_20;
  }
LABEL_5:
  if ( a2 )
    goto LABEL_6;
LABEL_20:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1;
  MiChargeResident(a1, 1LL, 0xFFFFFFFFLL, v6);
LABEL_6:
  if ( (a3 & 1) == 0 )
    return a2;
  v12 = a2;
  while ( (unsigned int)MiChargeCommit((__int64)a1, v12, 1u) != 1 )
  {
    v12 >>= 1;
    if ( !v12 )
    {
      if ( (a3 & 2) != 0 )
      {
        v12 = 1;
        MiChargeCommit((__int64)a1, 1uLL, 4u);
      }
      break;
    }
  }
  if ( v12 != a2 )
    MiReturnFaultCharges(a1, a2 - v12, 0LL);
  return v12;
}
