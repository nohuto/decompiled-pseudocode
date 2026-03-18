/*
 * XREFs of MiProbeLockFrame @ 0x14008F080
 * Callers:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1400EF040 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiChargePartitionResidentAvailable @ 0x14008D9F0 (MiChargePartitionResidentAvailable.c)
 *     MiLockPageTablePage @ 0x140090030 (MiLockPageTablePage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1400FFF90 (ExAcquireRundownProtectionCacheAware.c)
 *     MiReferenceIoPages @ 0x140118650 (MiReferenceIoPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockNonPagedPoolPte @ 0x1402CF3D4 (MiLockNonPagedPoolPte.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 v3; // rbx
  char v4; // r8
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // rcx
  unsigned int v7; // r14d
  __int64 v8; // rdx
  char v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG_PTR *v12; // rbp
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v15; // ett
  char v16; // al
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rax
  int v25; // esi
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int64 Address; // rax
  int v29; // ecx
  int v30; // [rsp+88h] [rbp+10h] BYREF
  int v31; // [rsp+90h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 80)
      || (Address = MiLocateAddress(*(_QWORD *)a1)) != 0
      && ((v29 = *(_DWORD *)(Address + 48), (v29 & 0x70) == 0x40) || (v29 & 0x70) == 0x10) )
    {
      result = MiReferenceIoPages(0, *(_QWORD *)(a1 + 128), 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 10LL) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_1404662DC;
      }
    }
    else
    {
      ++dword_1404662D8;
      return 3221225477LL;
    }
    return result;
  }
  if ( (*(_DWORD *)(a1 + 64) & 0xF) != 4
    || (v26 = *(_QWORD *)a1, (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)a1))
    || (v27 = MiLockNonPagedPoolPte(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        v3 = v27,
        v1 = (v27 + 0x58000000000LL) / 48,
        *(_QWORD *)(a1 + 128) = v1,
        !v27) )
  {
    v3 = 48 * v1 - 0x58000000000LL;
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
  }
  v4 = *(_BYTE *)(v3 + 34);
  if ( (v4 & 7u) <= 1 || (v5 = *(_WORD *)(v3 + 32)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_1404662CC;
    return 3221225477LL;
  }
  if ( v5 >= 0x7FFFu )
  {
LABEL_74:
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_1404662D0;
    return 3221225633LL;
  }
  v6 = *(_QWORD *)(v3 + 40);
  v7 = 1;
  if ( (v6 & 0x10000000000000LL) == 0 )
  {
    v8 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v5 == 1 )
    {
      if ( v8 || (v4 & 8) != 0 )
        goto LABEL_11;
    }
    else if ( v5 == 2 && v8 && (v4 & 8) != 0 )
    {
LABEL_11:
      v9 = 0;
      if ( (v6 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v3 + 16) & 0x400LL) != 0
        || (v10 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL, v10 <= 0xFFFFF6BFFFFFFF78uLL)
        && v10 >= 0xFFFFF68000000000uLL
        && (*(_BYTE *)(v3 + 35) & 0x20) != 0 )
      {
        v9 = 1;
      }
      v11 = (v6 >> 40) & 0x3FF;
      v12 = *(ULONG_PTR **)(qword_140466188 + 8 * v11);
      if ( v9 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_140466188 + 8 * v11), 1uLL, 8u) )
        goto LABEL_74;
      if ( v12 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        while ( CachedResidentAvailable )
        {
          if ( CachedResidentAvailable == -1 )
            break;
          v15 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v15 == CachedResidentAvailable )
            goto LABEL_20;
        }
      }
      v25 = MiChargePartitionResidentAvailable((__int64)v12, 1uLL, 0LL);
      if ( !v25 && v9 )
        MiReturnCommit((__int64)v12, 1uLL);
      if ( !v25 )
        goto LABEL_74;
    }
  }
LABEL_20:
  ++*(_WORD *)(v3 + 32);
  if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && (*(_QWORD *)(v3 + 16) & 4) != 0
    && (*(_QWORD *)(v3 + 16) & 0x400LL) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL)) + 667LL) = 1;
  }
  v16 = *(_BYTE *)(v3 + 34);
  if ( (v16 & 0x20) != 0 && (v16 & 8) == 0 && (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v3 + 232LL));
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(a1 + 64) & 0xF) == 1 )
  {
    v17 = *(_QWORD *)(v3 + 40);
    if ( ((v17 >> 54) & 7) != 1 )
    {
      v18 = v17 & 0xFFFFFFFFFLL;
      if ( (v17 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        v19 = (v17 >> 57) & 1;
        if ( *(_QWORD *)(a1 + 136) != v18 )
        {
          if ( v19 )
          {
            v20 = v3;
          }
          else
          {
            v20 = 48 * v18 - 0x58000000000LL;
            v7 = 2;
          }
          if ( !(unsigned int)MiLockPageTablePage(v20, v7) )
          {
            v31 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v31);
              while ( *(__int64 *)(v3 + 24) < 0 );
            }
            MiRemoveLockedPageChargeAndDecRef(v3);
            _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_1404662D4;
            return 3221225633LL;
          }
          *(_QWORD *)(a1 + 136) = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL;
          *(_WORD *)(*(_QWORD *)(a1 + 56) + 10LL) |= 0x100u;
        }
      }
    }
  }
  v21 = *(_QWORD *)(v3 + 40);
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 56) + 10LL) & 0x80) != 0 && (v21 & 0x200000000000000LL) != 0 )
  {
    v24 = *(_QWORD *)(v3 + 16);
    if ( (v24 & 0x400) != 0 )
    {
      if ( qword_140465B00 && (v24 & 0x10) == 0 )
        v24 &= ~qword_140465B00;
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v24 >> 16) + 112LL));
      v21 = *(_QWORD *)(v3 + 40);
    }
  }
  v22 = v21 >> 40;
  if ( (v22 & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(qword_140466188 + 8 * (v22 & 0x3FF))
                                                                        + 2080LL));
  return 0LL;
}
