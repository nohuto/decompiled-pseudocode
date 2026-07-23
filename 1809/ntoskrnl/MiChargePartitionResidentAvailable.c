/*
 * XREFs of MiChargePartitionResidentAvailable @ 0x140022F3C
 * Callers:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiLockPageTablePage @ 0x1400403C0 (MiLockPageTablePage.c)
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiChargePartitionResidentAvailable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed __int64 v5; // r10
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  signed __int64 v8; // r10
  BOOL v9; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int CachedResidentAvailable; // eax
  unsigned __int64 v12; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rdi
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // r8

  if ( a2 + a3 >= a2 || a3 == 0xFFFFFFFFLL )
  {
    v5 = *(_QWORD *)(a1 + 7360);
    v6 = 0LL;
    if ( v5 < 1024 && (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v14 = KiProcessorBlock;
        v15 = (unsigned int)KeNumberProcessors_0;
        do
        {
          if ( *(_DWORD *)(*v14 + 24604) != -1 )
          {
            v16 = _InterlockedExchange((volatile __int32 *)(*v14 + 24604), -1);
            if ( v16 != -1 )
              v6 += v16;
          }
          ++v14;
          --v15;
        }
        while ( v15 );
      }
      if ( v6 >= a2 )
      {
        v17 = v6 - a2;
        if ( v17 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), v17);
        return 3LL;
      }
      a2 -= v6;
    }
    if ( v5 <= 0 )
    {
LABEL_35:
      if ( a3 != 0xFFFFFFFFLL )
      {
LABEL_36:
        ++dword_14043B954;
        if ( v6 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), v6);
        return 0LL;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), -(__int64)a2);
      return 3LL;
    }
    while ( 1 )
    {
      if ( a2 + a3 > v5 && a3 != 0xFFFFFFFFLL )
        goto LABEL_36;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7360), v5 - a2, v5);
      if ( v5 == v7 )
        break;
      v5 = v7;
      if ( v7 <= 0 )
        goto LABEL_35;
    }
    v8 = v5 - a2;
    v9 = v8 < 1024;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable == -1 )
      {
        if ( v8 >= 2048 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable, 0, -1);
          CachedResidentAvailable = 0;
LABEL_9:
          if ( v8 > 1024 )
          {
            v12 = 128 - CachedResidentAvailable;
            if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7360), v8 - v12, v8) )
              MiReturnResidentAvailable(v12);
          }
        }
      }
      else if ( CachedResidentAvailable < 0x40 )
      {
        goto LABEL_9;
      }
    }
    return (unsigned int)(v9 + 2);
  }
  ++dword_14043B950;
  return 0LL;
}
