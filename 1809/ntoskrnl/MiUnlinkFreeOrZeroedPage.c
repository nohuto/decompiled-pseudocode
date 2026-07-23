/*
 * XREFs of MiUnlinkFreeOrZeroedPage @ 0x140039AD0
 * Callers:
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1400EE0C8 (MiGetPerfectColorHeadPage.c)
 *     MiPurgeZeroList @ 0x140151ABC (MiPurgeZeroList.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiPageListCollision @ 0x140121394 (MiPageListCollision.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1402B3484 (MiObtainFreePages.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiUnlinkFreeOrZeroedPage(ULONG_PTR a1, __int64 a2, __int16 a3)
{
  __int64 v3; // r14
  ULONG_PTR v4; // r10
  __int64 v5; // rdi
  int v6; // r15d
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  int v21; // ebx
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // r9
  signed __int64 v29; // rdx
  signed __int64 v30; // r8
  signed __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // r9
  signed __int64 v36; // rdx
  signed __int64 v37; // r8
  signed __int64 v38; // rcx
  ULONG_PTR v39; // r9
  unsigned __int64 v40; // rdx
  volatile signed __int32 *v41; // r8
  unsigned int v42; // eax
  int v43; // eax
  unsigned __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rax
  int v47; // ecx
  __int64 v48; // [rsp+20h] [rbp-58h] BYREF
  volatile signed __int64 *v49; // [rsp+28h] [rbp-50h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v52; // [rsp+88h] [rbp+10h]
  char v53; // [rsp+88h] [rbp+10h]
  __int64 v55; // [rsp+98h] [rbp+20h]

  v3 = a2;
  v4 = a1;
  v5 = 48 * a1 - 0x58000000000LL;
  v6 = 0;
  v7 = *(_QWORD *)(v5 + 40) >> 58;
  v8 = *(_BYTE *)(v5 + 34) & 7;
  v55 = v8;
  v52 = v7;
  v9 = v8;
  v10 = dword_14043B148 & (unsigned int)a1 | (((*(_QWORD *)(v5 + 40) >> 36) & 3) << byte_14043B10A) | ((_DWORD)v7 << byte_14043B109);
  v11 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL));
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
        v43 = SchedulerAssist[5];
        SchedulerAssist[5] = v43 + 1;
        if ( v43 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          LODWORD(v7) = v52;
          v4 = a1;
          v9 = v55;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v48, v3 + 32);
      LODWORD(v7) = v52;
      v4 = a1;
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v3 + 32), (__int64)&v48) )
    {
      KxWaitForLockOwnerShip(&v48);
      LODWORD(v7) = v52;
      v4 = a1;
    }
  }
  _InterlockedDecrement64(*(volatile signed __int64 **)(v11 + 8 * v9 + 4152));
  if ( dword_14043B82C == 1 )
  {
    v39 = v4 & 0x1F;
    LOBYTE(v40) = 1;
    v41 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v4 >> 5));
    if ( v39 + 1 > 0x20 )
    {
      if ( (v4 & 0x1F) != 0 )
      {
        _InterlockedOr(v41++, ((1 << (32 - (v4 & 0x1F))) - 1) << v39);
        v40 = 1LL - (32 - (unsigned int)(v4 & 0x1F));
        if ( v40 >= 0x20 )
        {
          v44 = v40 >> 5;
          v40 += -32LL * (v40 >> 5);
          do
          {
            *v41++ = -1;
            --v44;
          }
          while ( v44 );
        }
        if ( !v40 )
          goto LABEL_7;
      }
      v42 = (1 << v40) - 1;
    }
    else
    {
      v42 = 1 << v39;
    }
    _InterlockedOr(v41, v42);
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
                                              + 1984 * ((unsigned __int64)(unsigned int)v10 >> byte_14043B109)
                                              + 16 * (v9 + 104)
                                              + 8)
                                  + 4 * ((unsigned __int64)((unsigned int)v10 & dword_14043B148) >> 5)),
        ~(1 << (v10 & dword_14043B148 & 0x1F)));
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
          v38 = v37;
          v37 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v34 + 24),
                  v35 | v37 & 0xFFFFFFF000000000uLL,
                  v37);
        }
        while ( v38 != v37 );
      }
    }
  }
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0xF8 | 5;
  v53 = *(_BYTE *)(v11 + 4765);
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
  v19 = *(_QWORD *)(v11 + 16) + 1984 * ((unsigned __int64)(unsigned int)v10 >> byte_14043B109);
  _InterlockedDecrement64((volatile signed __int64 *)(v19 + 8 * v9 + 1760));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedDecrement64((volatile signed __int64 *)(v19
                                                      + 8
                                                      * (v9
                                                       + 2LL
                                                       * (unsigned __int8)(MiChannelMaximumPowerOf2Mask & ((unsigned int)v10 >> byte_14043B10A)))
                                                      + 1824));
  v20 = _InterlockedDecrement64((volatile signed __int64 *)(v11 + 7296));
  if ( v20 == *(_QWORD *)(v11 + 6120) || v20 == *(_QWORD *)(v11 + 6128) )
    MiUpdateAvailableEvents(v11);
  if ( v20 <= 0x420 )
  {
    v46 = *(_QWORD *)(v11 + 7024);
    if ( !v46 || !*(_BYTE *)(v46 + 52) )
      MiObtainFreePages(v11);
    if ( v20 < 0xA0 && v20 + 1 >= 0xA0 && *(_DWORD *)(v11 + 1144) )
      KeSetEvent((PRKEVENT)(v11 + 992), 0, 0);
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
        v21 = (*(unsigned __int8 *)(v11 + 4) >> 4) & 1;
      }
    }
  }
  else
  {
    v21 = 1;
  }
  if ( (*(_BYTE *)(v5 + 34) & 8) != 0 )
    MiPageListCollision(v5, 1LL);
  v22 = qword_14043B180;
  *(_QWORD *)(v5 + 24) &= 0xFFFFFFF000000000uLL;
  v23 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)v5 = 0LL;
  if ( v22 && (v23 & 0x10) == 0 )
    v23 &= ~v22;
  if ( HIDWORD(v23) == 4294967293 )
    v6 = 2;
  v24 = v6 | v21;
  *(_QWORD *)(v5 + 16) = ZeroPte;
  if ( v24 >= 2 )
    *(_QWORD *)(v5 + 16) = MiUpdatePageFileHighInPte(ZeroPte, 4294967293LL);
  if ( (_DWORD)v55 == 1 || v53 == 1 )
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
  else if ( (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(a1);
  }
  return v24 & 1;
}
