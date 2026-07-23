/*
 * XREFs of MiLargePageFreeToZero @ 0x14009B420
 * Callers:
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiLargePageFreeToZero(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, char a4)
{
  __int64 v4; // rbp
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r11
  __int64 v24; // r8
  __int64 v25; // r14
  ULONG_PTR v26; // rdx
  __int64 v27; // rcx
  int v28; // r15d
  __int64 v29; // r8
  ULONG_PTR v30; // rdx
  ULONG_PTR *v31; // rcx
  __int64 result; // rax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  int v35; // eax
  ULONG_PTR v36; // r8
  volatile signed __int32 *v37; // rdx
  unsigned int v38; // r15d
  int v39; // r12d
  unsigned __int64 v40; // rcx
  __int64 v41; // r11
  __int64 *v42; // r9
  __int64 updated; // rax
  __int64 *v44; // r9
  __int64 v45; // r8
  unsigned __int64 v46; // r10
  volatile signed __int32 *v47; // r8
  unsigned int v48; // eax
  unsigned __int64 v49; // rcx
  signed __int32 v50[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v52; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  ULONG_PTR v54; // [rsp+80h] [rbp+8h]
  unsigned int v55; // [rsp+90h] [rbp+18h]

  v55 = a3;
  v4 = a2;
  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v7 = MiLargePageSizes[a2];
  v8 = *(_QWORD *)(v6 + 40);
  v9 = 1984 * (v8 >> 58);
  v10 = *(_QWORD *)(qword_14043B808 + 8 * ((v8 >> 40) & 0x3FF));
  v11 = v8 >> 36;
  v12 = *(_QWORD *)(v10 + 16) + v9;
  v51 = 0LL;
  v52 = (volatile signed __int64 *)(v12 + 1928);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v35 = SchedulerAssist[5];
      SchedulerAssist[5] = v35 + 1;
      if ( v35 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        a3 = v55;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v51, v12 + 1928);
  }
  else
  {
    v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v12 + 1928), (__int64)&v51);
    if ( v15 )
      KxWaitForLockOwnerShip((__int64)&v51, v15, a3);
  }
  *(_BYTE *)(v6 + 34) &= ~8u;
  v16 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v16 + 24) = 0LL;
  *(_BYTE *)(v16 + 69) = 1;
  *(_QWORD *)(v6 + 16) = MiSwizzleInvalidPte(128LL);
  if ( a4 )
  {
    if ( dword_14043B82C == 1 )
    {
      v36 = BugCheckParameter2 & 0x1F;
      v37 = (volatile signed __int32 *)(qword_14043B888 + 4 * (BugCheckParameter2 >> 5));
      if ( v36 + v7 > 0x20 )
      {
        if ( (BugCheckParameter2 & 0x1F) != 0 )
        {
          v39 = BugCheckParameter2 & 0x1F;
          _InterlockedOr(v37, ((1 << (32 - v39)) - 1) << v36);
          v7 -= (unsigned int)(32 - v39);
          ++v37;
        }
        if ( v7 >= 0x20 )
        {
          v40 = v7 >> 5;
          v7 += -32LL * (v7 >> 5);
          do
          {
            *v37++ = -1;
            --v40;
          }
          while ( v40 );
        }
        if ( !v7 )
          return KxReleaseQueuedSpinLock(&v51);
        v38 = (1 << v7) - 1;
      }
      else
      {
        if ( v7 == 32 )
        {
          *v37 = -1;
          return KxReleaseQueuedSpinLock(&v51);
        }
        v38 = ((1 << v7) - 1) << v36;
      }
      _InterlockedOr(v37, v38);
    }
    return KxReleaseQueuedSpinLock(&v51);
  }
  *(_BYTE *)(v12 + 1912) = 1;
  _InterlockedOr(v50, 0);
  v19 = *(_QWORD *)v6;
  v20 = *(_QWORD **)(v6 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || *v20 != v6 )
    goto LABEL_70;
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  if ( v17 )
  {
    *(_QWORD *)(v6 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v6 + 16), 4294967293LL);
    if ( v6 + 48 < v6 + 48 * v7 )
    {
      v42 = (__int64 *)(v6 + 64);
      do
      {
        updated = MiUpdatePageFileHighInPte(*v42, v41);
        *v44 = updated;
        v42 = v44 + 6;
      }
      while ( v45 != 1 );
    }
  }
  if ( (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(BugCheckParameter2);
    v18 = v4;
  }
  v21 = MiLargePageSizes[v18];
  v22 = 34 * v18;
  --*(_QWORD *)(v12 + 272 * v18 + 8);
  v23 = v12 + 272 * v18;
  v24 = 4LL;
  if ( BugCheckParameter2 < 0x100000 )
    v24 = 12LL;
  v25 = v11 & 3;
  v26 = 24 * (BugCheckParameter2 / v21 % (unsigned int)dword_14043B1C0[v18]);
  v27 = *(_QWORD *)(v23 + 8 * (v24 + v25) + 144);
  --*(_QWORD *)(v26 + v27 + 16);
  --*(_QWORD *)(v12 + 8 * (v25 + v22 + v24) + 16);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 2240), -(__int64)v7);
  v28 = 1;
  if ( dword_14043B82C != 1 )
    goto LABEL_13;
  v46 = v7;
  v47 = (volatile signed __int32 *)(qword_14043B888 + 4 * (BugCheckParameter2 >> 5));
  v54 = BugCheckParameter2 & 0x1F;
  if ( v54 + v7 <= 0x20 )
  {
    if ( v7 == 32 )
    {
      *v47 = -1;
      goto LABEL_13;
    }
    v48 = ((1 << v7) - 1) << v54;
    goto LABEL_63;
  }
  if ( (BugCheckParameter2 & 0x1F) != 0 )
  {
    _InterlockedOr(v47, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v54);
    v46 = v7 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
    ++v47;
  }
  if ( v46 >= 0x20 )
  {
    v49 = v46 >> 5;
    v46 += -32LL * (v46 >> 5);
    do
    {
      *v47++ = -1;
      --v49;
    }
    while ( v49 );
  }
  if ( v46 )
  {
    v48 = (1 << v46) - 1;
LABEL_63:
    _InterlockedOr(v47, v48);
  }
LABEL_13:
  *(_BYTE *)(v6 + 34) &= 0xF8u;
  v29 = BugCheckParameter2 < 0x100000 ? 8 : 0;
  v30 = *(_QWORD *)(v23 + 8 * (v29 + v25) + 144) + v26;
  v31 = *(ULONG_PTR **)(v30 + 8);
  if ( (MiFlags & 0x30) == 0 )
  {
    if ( *v31 == v30 )
    {
      *(_QWORD *)v6 = v30;
      *(_QWORD *)(v6 + 8) = v31;
      *v31 = v6;
      *(_QWORD *)(v30 + 8) = v6;
LABEL_25:
      v28 = 0;
      goto LABEL_17;
    }
LABEL_70:
    __fastfail(3u);
  }
  if ( *v31 != v30 )
    goto LABEL_70;
  *(_QWORD *)v6 = v30;
  *(_QWORD *)(v6 + 8) = v31;
  *v31 = v6;
  *(_QWORD *)(v30 + 8) = v6;
  if ( !(_DWORD)v4 || (_DWORD)v4 == 1 && (KeFeatureBits & 0x2000000000LL) == 0 )
    goto LABEL_25;
LABEL_17:
  ++*(_QWORD *)(v30 + 16);
  ++*(_QWORD *)(v12 + 8 * (v25 + v22 + v29) + 16);
  ++*(_QWORD *)(v12 + 8 * v22);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 2176), v7);
  *(_BYTE *)(v12 + 1912) = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v51, retaddr);
  }
  else
  {
    _m_prefetchw(&v51);
    result = v51;
    if ( !v51 )
    {
      result = _InterlockedCompareExchange64(v52, 0LL, (signed __int64)&v51);
      if ( (__int64 *)result == &v51 )
        goto LABEL_20;
      result = KxWaitForLockChainValid(&v51);
    }
    v51 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_20:
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      result = (unsigned int)(v34[5] - 1);
      v34[5] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  if ( v28 )
    return MiQueueLargeFreeZeroRebuild(v10, BugCheckParameter2 & ~(MiLargePageSizes[(unsigned int)(v4 - 1)] - 1));
  return result;
}
