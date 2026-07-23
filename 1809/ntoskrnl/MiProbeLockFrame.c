/*
 * XREFs of MiProbeLockFrame @ 0x140041950
 * Callers:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140094920 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageTablePage @ 0x1400403C0 (MiLockPageTablePage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140109AC0 (ExAcquireRundownProtectionCacheAware.c)
 *     MiLockNonPagedPoolPte @ 0x140162570 (MiLockNonPagedPoolPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiProbeLockFrame(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rsi
  __int64 v3; // rbx
  char v4; // r8
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // rcx
  int v7; // r14d
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
  unsigned __int64 v25; // rbx
  int v26; // esi
  __int64 Address; // rax
  int v28; // eax
  int v29; // [rsp+88h] [rbp+10h] BYREF
  int v30; // [rsp+90h] [rbp+18h] BYREF

  v1 = a1[16];
  if ( v1 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    if ( !a1[10]
      || (Address = MiLocateAddress(*a1)) != 0 && ((v28 = *(_DWORD *)(Address + 48) & 7, v28 == 6) || v28 == 1) )
    {
      result = MiReferenceIoPages(0, a1[16], 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(a1[7] + 10) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_14043B8FC;
      }
    }
    else
    {
      ++dword_14043B8F8;
      return 3221225477LL;
    }
    return result;
  }
  if ( (a1[8] & 0xF) != 4
    || (v25 = *a1, (unsigned int)MI_IS_PHYSICAL_ADDRESS(*a1))
    || (v3 = MiLockNonPagedPoolPte(((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
        v1 = (v3 + 0x58000000000LL) / 48,
        a1[16] = v1,
        !v3) )
  {
    v3 = 48 * v1 - 0x58000000000LL;
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
  }
  v4 = *(_BYTE *)(v3 + 34);
  if ( (v4 & 7u) <= 1 || (v5 = *(_WORD *)(v3 + 32)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_14043B8EC;
    return 3221225477LL;
  }
  if ( v5 >= 0x7FFFu )
  {
LABEL_73:
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++dword_14043B8F0;
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
      v12 = *(ULONG_PTR **)(qword_14043B808 + 8 * v11);
      if ( v9 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_14043B808 + 8 * v11), 1LL, 8LL) )
        goto LABEL_73;
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
      v26 = MiChargePartitionResidentAvailable((__int64)v12, 1uLL, 0LL);
      if ( !v26 && v9 )
        MiReturnCommit(v12, 1LL);
      if ( !v26 )
        goto LABEL_73;
    }
  }
LABEL_20:
  ++*(_WORD *)(v3 + 32);
  if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && (*(_QWORD *)(v3 + 16) & 4) != 0
    && (*(_QWORD *)(v3 + 16) & 0x400LL) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL)) + 659LL) = 1;
  }
  v16 = *(_BYTE *)(v3 + 34);
  if ( (v16 & 0x20) != 0 && (v16 & 8) == 0 && (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v3 + 232LL));
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (a1[8] & 0xF) == 1 )
  {
    v17 = *(_QWORD *)(v3 + 40);
    if ( ((v17 >> 54) & 7) != 1 )
    {
      v18 = v17 & 0xFFFFFFFFFLL;
      if ( (v17 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        v19 = (v17 >> 57) & 1;
        if ( a1[17] != v18 )
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
            v30 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v30);
              while ( *(__int64 *)(v3 + 24) < 0 );
            }
            MiRemoveLockedPageChargeAndDecRef(v3);
            _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++dword_14043B8F4;
            return 3221225633LL;
          }
          a1[17] = *(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL;
          *(_WORD *)(a1[7] + 10) |= 0x100u;
        }
      }
    }
  }
  v21 = *(_QWORD *)(v3 + 40);
  if ( (*(_WORD *)(a1[7] + 10) & 0x80) != 0 && (v21 & 0x200000000000000LL) != 0 )
  {
    v24 = *(_QWORD *)(v3 + 16);
    if ( (v24 & 0x400) != 0 )
    {
      if ( qword_14043B180 && (v24 & 0x10) == 0 )
        v24 &= ~qword_14043B180;
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v24 >> 16) + 112LL));
      v21 = *(_QWORD *)(v3 + 40);
    }
  }
  v22 = v21 >> 40;
  if ( (v22 & 0x3FF) != 0 )
    ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(qword_14043B808 + 8 * (v22 & 0x3FF))
                                                                        + 2080LL));
  return 0LL;
}
