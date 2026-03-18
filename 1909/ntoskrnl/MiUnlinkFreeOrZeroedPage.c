/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x14002C210
 * Callers:
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x14002BB50 (MiCoalesceFreePages.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400C21CC (MiGetPerfectColorHeadPage.c)
 *     MiPurgeZeroList @ 0x140160BEC (MiPurgeZeroList.c)
 *     MiTransferPartitionPageRun @ 0x1402EB260 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     MiUpdatePageFileHighInPte @ 0x1400BBAB0 (MiUpdatePageFileHighInPte.c)
 *     MiPageListCollision @ 0x1400F84FC (MiPageListCollision.c)
 *     MiUpdateAvailableEvents @ 0x140188AB4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1402C8454 (MiObtainFreePages.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR a1, __int64 a2, __int16 a3)
{
  __int64 v3; // r15
  ULONG_PTR v4; // r10
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  int v21; // edi
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // r9
  signed __int64 v29; // rdx
  signed __int64 v30; // r8
  signed __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // r9
  signed __int64 v36; // rdx
  signed __int64 v37; // r8
  ULONG_PTR v38; // r9
  unsigned __int64 v39; // rdx
  volatile signed __int32 *v40; // r8
  unsigned int v41; // eax
  int v42; // eax
  unsigned __int64 v43; // rcx
  signed __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rax
  int v47; // ecx
  __int64 v48; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v49; // [rsp+28h] [rbp-50h]
  __int64 v50; // [rsp+30h] [rbp-48h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v53; // [rsp+88h] [rbp+10h]
  char v54; // [rsp+88h] [rbp+10h]
  __int64 v56; // [rsp+98h] [rbp+20h]

  v48 = 0LL;
  v3 = a2;
  v49 = 0LL;
  v4 = a1;
  v50 = 0LL;
  v5 = 48 * a1 - 0x58000000000LL;
  v6 = 0;
  v7 = *(_QWORD *)(v5 + 40) >> 58;
  v8 = *(_BYTE *)(v5 + 34) & 7;
  v9 = v8;
  v56 = v8;
  v10 = dword_1404657B0 & (unsigned int)a1 | ((_DWORD)v7 << byte_14046574D) | (((*(_QWORD *)(v5 + 40) >> 36) & 3) << byte_14046574E);
  v53 = v7;
  v11 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL));
  if ( a2 )
  {
    LODWORD(v7) = -1;
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 8 * v8 + 2112);
    v48 = 0LL;
    v3 = v12 + 40 * v10;
    v49 = (volatile signed __int64 *)(v3 + 32);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v9 = v8;
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v42 = SchedulerAssist[5];
        SchedulerAssist[5] = v42 + 1;
        if ( v42 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          LODWORD(v7) = v53;
          v4 = a1;
          v9 = v56;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v48, v3 + 32);
      LODWORD(v7) = v53;
      v4 = a1;
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v3 + 32), (__int64)&v48) )
    {
      KxWaitForLockOwnerShip(&v48);
      LODWORD(v7) = v53;
      v4 = a1;
    }
  }
  _InterlockedDecrement64(*(volatile signed __int64 **)(v11 + 8 * v9 + 4152));
  if ( dword_140465F0C == 1 )
  {
    v38 = v4 & 0x1F;
    LOBYTE(v39) = 1;
    v40 = (volatile signed __int32 *)(qword_140465F68 + 4 * (v4 >> 5));
    if ( v38 + 1 > 0x20 )
    {
      if ( (v4 & 0x1F) != 0 )
      {
        _InterlockedOr(v40++, ((1 << (32 - (v4 & 0x1F))) - 1) << v38);
        v39 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
        if ( v39 >= 0x20 )
        {
          v43 = v39 >> 5;
          v39 += -32LL * (v39 >> 5);
          do
          {
            *v40++ = -1;
            --v43;
          }
          while ( v43 );
        }
        if ( !v39 )
          goto LABEL_7;
      }
      v41 = (1 << v39) - 1;
    }
    else
    {
      v41 = 1 << v38;
    }
    _InterlockedOr(v40, v41);
  }
LABEL_7:
  --*(_QWORD *)v3;
  if ( *(_QWORD *)(v3 + 16) == v4 )
  {
    v15 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    *(_QWORD *)(v3 + 16) = v15;
    if ( v15 == 0xFFFFFFFFFLL )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 16)
                                              + 1984 * ((unsigned __int64)(unsigned int)v10 >> byte_14046574D)
                                              + 16 * (v9 + 104)
                                              + 8)
                                  + 4 * ((unsigned __int64)((unsigned int)v10 & dword_1404657B0) >> 5)),
        ~(1 << (v10 & dword_1404657B0 & 0x1F)));
      *(_QWORD *)(v3 + 24) = 0xFFFFFFFFFLL;
    }
    else
    {
      v28 = 48 * v15 - 0x58000000000LL;
      v29 = *(_QWORD *)(v28 + 24);
      v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 24), v29 | 0xFFFFFFFFFLL, v29);
      if ( v29 != v30 )
      {
        do
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 24), v30 | 0xFFFFFFFFFLL, v30);
        }
        while ( v31 != v30 );
      }
    }
  }
  else
  {
    *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL) ^= (*(_QWORD *)v5 ^ *(_QWORD *)(48 * (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL) - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    v32 = *(_QWORD *)(v5 + 24);
    v33 = *(_QWORD *)v5 & 0xFFFFFFFFFLL;
    if ( v33 == 0xFFFFFFFFFLL )
    {
      *(_QWORD *)(v3 + 24) = v32 & 0xFFFFFFFFFLL;
    }
    else
    {
      v34 = 48 * v33 - 0x58000000000LL;
      v35 = v32 & 0xFFFFFFFFFLL;
      v36 = *(_QWORD *)(v34 + 24);
      v37 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 24), v35 | v36 & 0xFFFFFFF000000000uLL, v36);
      if ( v36 != v37 )
      {
        do
        {
          v44 = v37;
          v37 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v34 + 24),
                  v35 | v37 & 0xFFFFFFF000000000uLL,
                  v37);
        }
        while ( v44 != v37 );
      }
    }
  }
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v54 = *(_BYTE *)(v11 + 4765);
  if ( (_DWORD)v7 != -1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v48, retaddr);
      goto LABEL_14;
    }
    _m_prefetchw(&v48);
    v16 = v48;
    if ( !v48 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v49, 0LL, (signed __int64)&v48) == &v48 )
      {
LABEL_14:
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v45 = v18[5] - 1;
            v18[5] = v45;
            if ( !v45 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        goto LABEL_15;
      }
      v16 = KxWaitForLockChainValid(&v48);
    }
    v48 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
    goto LABEL_14;
  }
LABEL_15:
  v19 = *(_QWORD *)(v11 + 16) + 1984 * ((unsigned __int64)(unsigned int)v10 >> byte_14046574D);
  _InterlockedDecrement64((volatile signed __int64 *)(v19 + 8 * v9 + 1760));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v19
                                                      + 8
                                                      * (v9
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v10 >> byte_14046574E)))
                                                      + 1848));
  v20 = _InterlockedDecrement64((volatile signed __int64 *)(v11 + 8064));
  if ( v20 == *(_QWORD *)(v11 + 6120) || v20 == *(_QWORD *)(v11 + 6128) )
    MiUpdateAvailableEvents(v11);
  if ( v20 <= 0x420 )
  {
    v46 = *(_QWORD *)(v11 + 7800);
    if ( !v46 || !*(_BYTE *)(v46 + 52) )
      MiObtainFreePages(v11);
    if ( v20 < 0xA0 && v20 + 1 >= 0xA0 && *(_DWORD *)(v11 + 1144) )
      KeSetEvent((PRKEVENT)(v11 + 1000), 0, 0);
  }
  if ( v20 < 0x9F )
  {
    if ( (a3 & 0x2000) != 0 )
    {
      v21 = 1;
    }
    else
    {
      v47 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v47 & 0xC) == 8 )
      {
        v21 = 1;
      }
      else if ( v20 < 0x20 && (ULONG_PTR *)v11 == &MiSystemPartition )
      {
        v21 = 0;
      }
      else if ( (a3 & 4) != 0 )
      {
        v21 = 1;
      }
      else if ( (v47 & 2) != 0 && v20 >= 0x21 )
      {
        v21 = 1;
      }
      else
      {
        v21 = (*(unsigned __int8 *)(v11 + 4) >> 5) & 1;
      }
    }
  }
  else
  {
    v21 = 1;
  }
  if ( (*(_BYTE *)(v5 + 34) & 8) != 0 )
    MiPageListCollision(v5, 1LL);
  v22 = qword_140465800;
  *(_QWORD *)(v5 + 24) &= 0xFFFFFFF000000000uLL;
  v23 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)v5 = 0LL;
  if ( v22 && (v23 & 0x10) == 0 )
    v23 &= ~v22;
  if ( HIDWORD(v23) == 4294967293 )
    v6 = 2;
  v24 = v21 | v6;
  *(_QWORD *)(v5 + 16) = ZeroPte;
  if ( v24 >= 2 )
    *(_QWORD *)(v5 + 16) = MiUpdatePageFileHighInPte(ZeroPte, 4294967293LL, v22);
  if ( (_DWORD)v56 == 1 || v54 == 1 )
  {
    v25 = *(_QWORD *)(v5 + 16);
    if ( v25 )
    {
      *(_QWORD *)(v5 + 16) = v25 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    }
    else
    {
      v26 = 128LL;
      if ( v22 )
      {
        if ( (v22 & 0x80u) != 0LL )
          v26 = 144LL;
        else
          v26 = v22 | 0x80;
      }
      *(_QWORD *)(v5 + 16) = v26;
    }
  }
  else if ( (MiFlags & 0x80u) != 0 && (++dword_14046600C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(a1);
  }
  return v24 & 1;
}
