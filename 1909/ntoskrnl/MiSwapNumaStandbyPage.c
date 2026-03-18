/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1402DA6D0
 * Callers:
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1402DA158 (MiPruneStandbyPages.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14008F0F0 (KeMakeKernelDirectoryTableBase.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x140096DC4 (MiSetPfnTbFlushStamp.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnBlink @ 0x1400BB420 (MiSetPfnBlink.c)
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     MiUpdateTransitionPteFrame @ 0x1400C328C (MiUpdateTransitionPteFrame.c)
 *     MiCanPageMove @ 0x1400C359C (MiCanPageMove.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiIsDecayPfn @ 0x140123854 (MiIsDecayPfn.c)
 *     MiUnlinkNumaStandbyPage @ 0x1401614D4 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInsertNumaStandbyPage @ 0x1402D9AA0 (MiInsertNumaStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1402DA660 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  __int64 v5; // r15
  unsigned int v6; // r11d
  int v7; // r10d
  __int64 v8; // rdi
  unsigned __int8 *v9; // r12
  unsigned __int64 v10; // rdx
  __int64 v11; // r14
  unsigned int v12; // ecx
  __int64 v13; // rdi
  int v14; // esi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdi
  unsigned __int64 *v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR v20; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v22; // rdi
  char v23; // al
  struct _KPRCB *v24; // rcx
  struct _KPRCB *v25; // rcx
  ULONG_PTR v26; // rbx
  __int64 v27; // r11
  struct _KPRCB *v28; // rcx
  ULONG_PTR v30; // r9
  unsigned __int64 v31; // rdx
  volatile signed __int32 *v32; // r8
  unsigned int v33; // eax
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  ULONG_PTR v36; // rbx
  __int64 v37; // r10
  ULONG_PTR v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 *v40; // r8
  ULONG_PTR v41; // r10
  __int64 updated; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  ULONG_PTR v49; // rbx
  __int64 KernelDirectoryTableBase; // rax
  __int64 v51; // rdx
  __int64 v52; // r9
  unsigned __int64 v53; // r11
  __int64 v54; // rax
  unsigned __int64 v55; // r11
  __int64 v56; // rdx
  int v57; // r8d
  __int64 *v58; // r11
  __int64 v59; // r9
  bool v60; // zf
  char v61; // bl
  struct _KPRCB *v62; // rcx
  signed __int32 v63[8]; // [rsp+0h] [rbp-80h] BYREF
  int v64; // [rsp+20h] [rbp-60h]
  __int64 v65; // [rsp+28h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  int v67; // [rsp+48h] [rbp-38h]
  unsigned __int64 v68; // [rsp+50h] [rbp-30h]
  _QWORD *v69; // [rsp+58h] [rbp-28h]
  int v70; // [rsp+60h] [rbp-20h] BYREF
  int v71; // [rsp+64h] [rbp-1Ch]
  __int64 v72; // [rsp+68h] [rbp-18h]
  __int64 v73; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v74; // [rsp+78h] [rbp-8h]
  int v76; // [rsp+C8h] [rbp+48h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 48 * a1 - 0x58000000000LL;
  v6 = 0;
  v7 = 0;
  v8 = 1984LL * a2;
  v9 = 0LL;
  v76 = 0;
  v10 = *(_QWORD *)(v5 + 40);
  v64 = 0;
  v11 = *(_QWORD *)(qword_140465E88 + 8 * ((v10 >> 40) & 0x3FF));
  v12 = MmNumberOfChannels;
  v73 = v11;
  v67 = MmNumberOfChannels;
  v13 = *(_QWORD *)(v11 + 16) + v8;
  v72 = v13;
  v14 = *(_DWORD *)(v13 + 1912) & 1;
  v71 = v14;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v9 = (unsigned __int8 *)(v13 + 1938);
    if ( v14 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v12 = 1;
        v76 = a3;
        v67 = 1;
        v6 = a3;
        v9 = 0LL;
      }
      else if ( (a4 & 8) != 0 )
      {
        v9 = (unsigned __int8 *)(v13 + 1942);
      }
    }
    else
    {
      if ( v10 >> 58 == a2 )
        return a1;
      v7 = a3;
      v64 = a3;
    }
  }
  v74 = &v9[v12];
  while ( 1 )
  {
    if ( v9 )
    {
      if ( v14 )
      {
        v6 = *v9;
        v76 = v6;
        if ( *(_QWORD *)(v5 + 40) >> 58 == a2 && v6 == ((*(_QWORD *)(v5 + 40) >> 36) & 3) )
          return a1;
      }
      else
      {
        v76 = v7;
        v6 = v7;
        v7 = v7 + 1 < v12 ? v7 + 1 : 0;
        v64 = v7;
      }
    }
    v68 = v11 + 2688;
    v15 = v11 + 2368;
    v65 = v11 + 2368;
    if ( v11 + 2368 < (unsigned __int64)(v11 + 2688) )
      break;
LABEL_46:
    if ( ++v9 >= v74 )
      return a1;
    v12 = v67;
  }
  v16 = (_QWORD *)(192LL * v6 + 864 + v13);
  v17 = (unsigned __int64 *)(v11 + 2400);
  v18 = v68;
  v69 = v16;
  while ( *v16 == 0xFFFFFFFFFLL )
  {
LABEL_44:
    v15 += 40LL;
    v16 += 3;
    v17 += 5;
    v65 = v15;
    v69 = v16;
    if ( v15 >= v18 )
    {
      v7 = v64;
      v6 = v76;
      v13 = v72;
      v14 = v71;
      v11 = v73;
      goto LABEL_46;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v17;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v17);
  v20 = *v16;
  if ( *v16 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    v15 = v65;
    goto LABEL_43;
  }
  v22 = 48 * v20 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    goto LABEL_48;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v70 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v70);
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v22 + 34) & 7) != 2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = KiIrqlFlags;
    if ( KiIrqlFlags )
      goto LABEL_38;
    goto LABEL_42;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v17;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v17);
  if ( v20 != *v69 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
LABEL_38:
      if ( (v23 & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v24 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v24);
      }
    }
LABEL_42:
    __writecr8(CurrentIrql);
    v17 -= 5;
    v15 = v65 - 40;
    v16 = v69 - 3;
LABEL_43:
    v18 = v68;
    goto LABEL_44;
  }
LABEL_48:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v25);
    }
    v26 = a1;
    goto LABEL_62;
  }
  if ( MiCanPageMove(48 * v20 - 0x58000000000LL) )
  {
    if ( dword_140465F0C != 1 )
      goto LABEL_73;
    v30 = v20 & 0x1F;
    LOBYTE(v31) = 1;
    v32 = (volatile signed __int32 *)(qword_140465F68 + 4 * (v20 >> 5));
    if ( v30 + 1 > 0x20 )
    {
      if ( (v20 & 0x1F) != 0 )
      {
        _InterlockedOr(v32++, ((1 << (32 - (v20 & 0x1F))) - 1) << v30);
        v31 = 1LL - (32 - (unsigned int)(v20 & 0x1F));
        if ( v31 >= 0x20 )
        {
          v34 = v31 >> 5;
          v31 += -32LL * (v31 >> 5);
          do
          {
            *v32++ = -1;
            --v34;
          }
          while ( v34 );
        }
        if ( !v31 )
        {
LABEL_73:
          v35 = a1;
          v36 = v27 & a1;
          v37 = v27 & *(_QWORD *)v22;
          v38 = v27 & *(_QWORD *)(v22 + 24);
          if ( (*(_BYTE *)(v22 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v38) )
            {
              updated = MiUpdateTransitionPteFrame(v40[2], v39);
              *(_QWORD *)(v43 + 16) = updated;
            }
            else
            {
              *v40 = v36 | *v40 & 0xFFFFFFF000000000uLL;
            }
            if ( MiIsDecayPfn(v41) )
            {
              *(_QWORD *)(v44 + 40) = v36 | *(_QWORD *)(v44 + 40) & 0xFFFFFFF000000000uLL;
              goto LABEL_87;
            }
            v45 = v44;
          }
          else
          {
            if ( v38 == v27 )
            {
              v46 = v65;
              *(_QWORD *)(v65 + 16) = a1;
            }
            else
            {
              *(_QWORD *)(48 * v38 - 0x58000000000LL) = v36 | *(_QWORD *)(48 * v38 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
              v46 = v65;
            }
            if ( v37 == v27 )
            {
              *(_QWORD *)(v46 + 24) = a1;
LABEL_87:
              MiUnlinkNumaStandbyPage(48 * v20 - 0x58000000000LL);
              MiFinalizePageAttribute(v5, *(unsigned __int8 *)(v22 + 34) >> 6, 1u);
              MiCopyPfnEntryEx(v5, (__int128 *)(48 * v20 - 0x58000000000LL));
              MiInsertNumaStandbyPage(v5);
              _InterlockedOr(v63, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v5 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v5, KiTbFlushTimeStamp, 1);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v47 = *(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL;
              if ( v47 == v20 )
              {
                v48 = v36 | *(_QWORD *)(v5 + 40) & 0xFFFFFFF000000000uLL;
                v49 = a1;
                *(_QWORD *)(v5 + 40) = v48;
                KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(a1 << 12);
                *(_QWORD *)((v52 | v51) - 1048) = KernelDirectoryTableBase;
                v53 = v52 | *(_QWORD *)(v22 + 8);
              }
              else
              {
                v49 = a1;
                v53 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                    + 8LL * ((*(_DWORD *)(v22 + 8) >> 3) & 0x1FF);
              }
              v54 = MI_READ_PTE_LOCK_FREE(v53);
              MiUpdateTransitionPteFrame(v54, v49);
              if ( !MiPteInShadowRange(v55) )
                goto LABEL_100;
              if ( (unsigned int)MiPteHasShadow() )
              {
                v57 = 1;
                if ( !HIBYTE(word_1404658EC) )
                {
                  v60 = (v56 & 1) == 0;
                  goto LABEL_98;
                }
              }
              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
              {
                v60 = (v56 & 1) == 0;
LABEL_98:
                if ( !v60 )
                  v56 |= v59;
              }
LABEL_100:
              *v58 = v56;
              if ( v57 )
                MiWritePteShadow((__int64)v58);
              if ( v47 != v20 )
              {
                LOBYTE(v56) = 17;
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v58, v56, 0x80000000LL);
              }
              MiCopyPage(v49, v20, 0LL, 6);
              _InterlockedOr(v63, 0);
              v61 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v5 + 31)) & 0xF) != 0 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v65 + 32);
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v65 + 32));
                MiSetPfnTbFlushStamp(v5, v61, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              *(_QWORD *)(v22 + 40) &= ~0x200000000000000uLL;
              *(_BYTE *)(v22 + 34) &= 0xC7u;
              *(_BYTE *)(v22 + 35) &= ~0x20u;
              _InterlockedOr(v63, 0);
              MiSetPfnTbFlushStamp(48 * v20 - 0x58000000000LL, KiTbFlushTimeStamp, 1);
              *(_QWORD *)v22 = 0LL;
              MiSetPfnBlink(48 * v20 - 0x58000000000LL, 0LL, 1);
              *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 5;
              *(_QWORD *)(v22 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v22 + 16));
              *(_BYTE *)(v22 + 35) &= ~8u;
              *(_QWORD *)(v22 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
              *(_BYTE *)(v22 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
              {
                v62 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick((__int64)v62);
              }
              __writecr8(CurrentIrql);
              return v20;
            }
            v45 = 48 * v37 - 0x58000000000LL;
          }
          MiSetPfnBlink(v45, v35, 0);
          goto LABEL_87;
        }
      }
      v33 = (1 << v31) - 1;
    }
    else
    {
      v33 = 1 << v30;
    }
    _InterlockedOr(v32, v33);
    goto LABEL_73;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiReuseStandbyPage(48 * v20 - 0x58000000000LL);
  *(_QWORD *)v22 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v28 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v28);
  }
  v26 = v20;
LABEL_62:
  __writecr8(CurrentIrql);
  return v26;
}
