/*
 * XREFs of MiObtainFaultCharges @ 0x140064D50
 * Callers:
 *     MiPickClusterForMappedFileFault @ 0x14002A2B0 (MiPickClusterForMappedFileFault.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiGetPageForHeader @ 0x1400933F8 (MiGetPageForHeader.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnFaultCharges @ 0x140134924 (MiReturnFaultCharges.c)
 */

__int64 __fastcall MiObtainFaultCharges(ULONG_PTR *a1, unsigned int a2, char a3)
{
  unsigned int v6; // ebx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  unsigned __int32 v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // r8

  while ( 1 )
  {
    v6 = a2;
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
          v10 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - a2,
                  CachedResidentAvailable);
          v9 = (_DWORD)CachedResidentAvailable == v10;
          LODWORD(CachedResidentAvailable) = v10;
          if ( v9 )
            goto LABEL_5;
        }
        while ( a2 <= (unsigned __int64)v10 );
      }
    }
    v13 = 1LL;
    if ( a2 != 1 )
      v13 = 1024LL;
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)a1, a2, v13) )
      break;
    a2 >>= 1;
    if ( v6 < 2 )
      goto LABEL_20;
  }
LABEL_5:
  if ( a2 )
    goto LABEL_6;
LABEL_20:
  if ( (a3 & 2) == 0 )
    return 0LL;
  a2 = 1;
  MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL);
LABEL_6:
  if ( (a3 & 1) == 0 )
    return a2;
  v11 = a2;
  while ( (unsigned int)MiChargeCommit((__int64)a1, v11, 1u) != 1 )
  {
    v11 >>= 1;
    if ( !v11 )
    {
      if ( (a3 & 2) != 0 )
      {
        v11 = 1;
        MiChargeCommit((__int64)a1, 1uLL, 4u);
      }
      break;
    }
  }
  if ( v11 != a2 )
    MiReturnFaultCharges(a1, a2 - v11, 0LL);
  return v11;
}
