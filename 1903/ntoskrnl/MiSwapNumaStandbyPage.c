/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1402DA970
 * Callers:
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1402DA3F8 (MiPruneStandbyPages.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C5D0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUpdateTransitionPteFrame @ 0x14009D504 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x14009D550 (MiCopyPfnEntryEx.c)
 *     MiCanPageMove @ 0x14009D990 (MiCanPageMove.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiFinalizePageAttribute @ 0x1400A3F48 (MiFinalizePageAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x1400A3F94 (MiSetPfnTbFlushStamp.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1400E2EBC (KeMakeKernelDirectoryTableBase.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiIsDecayPfn @ 0x140122744 (MiIsDecayPfn.c)
 *     MiUnlinkNumaStandbyPage @ 0x140161A84 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInsertNumaStandbyPage @ 0x1402D9D40 (MiInsertNumaStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1402DA900 (MiReuseStandbyPage.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR v23; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v25; // rdi
  char v26; // al
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx
  ULONG_PTR v29; // rbx
  __int64 v30; // r11
  struct _KPRCB *v31; // rcx
  ULONG_PTR v33; // r9
  unsigned __int64 v34; // rdx
  volatile signed __int32 *v35; // r8
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  ULONG_PTR v39; // rbx
  __int64 v40; // r10
  ULONG_PTR v41; // rcx
  __int64 v42; // rdx
  unsigned __int64 *v43; // r8
  ULONG_PTR v44; // r10
  __int64 updated; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r12
  unsigned __int64 v51; // rax
  ULONG_PTR v52; // rbx
  __int64 KernelDirectoryTableBase; // rax
  __int64 v54; // rdx
  __int64 v55; // r9
  unsigned __int64 v56; // r11
  __int64 v57; // rax
  unsigned __int64 v58; // r11
  __int64 v59; // rdx
  int v60; // r8d
  __int64 *v61; // r11
  __int64 v62; // r9
  bool v63; // zf
  char v64; // bl
  struct _KPRCB *v65; // rcx
  signed __int32 v66[8]; // [rsp+0h] [rbp-80h] BYREF
  int v67; // [rsp+20h] [rbp-60h]
  __int64 v68; // [rsp+28h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  int v70; // [rsp+48h] [rbp-38h]
  unsigned __int64 v71; // [rsp+50h] [rbp-30h]
  _QWORD *v72; // [rsp+58h] [rbp-28h]
  int v73; // [rsp+60h] [rbp-20h] BYREF
  int v74; // [rsp+64h] [rbp-1Ch]
  __int64 v75; // [rsp+68h] [rbp-18h]
  __int64 v76; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v77; // [rsp+78h] [rbp-8h]
  int v79; // [rsp+C8h] [rbp+48h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 48 * a1 - 0x58000000000LL;
  v6 = 0;
  v7 = 0;
  v8 = 1984LL * a2;
  v9 = 0LL;
  v79 = 0;
  v10 = *(_QWORD *)(v5 + 40);
  v67 = 0;
  v11 = *(_QWORD *)(qword_140466188 + 8 * ((v10 >> 40) & 0x3FF));
  v12 = MmNumberOfChannels;
  v76 = v11;
  v70 = MmNumberOfChannels;
  v13 = *(_QWORD *)(v11 + 16) + v8;
  v75 = v13;
  v14 = *(_DWORD *)(v13 + 1912) & 1;
  v74 = v14;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v9 = (unsigned __int8 *)(v13 + 1938);
    if ( v14 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v12 = 1;
        v79 = a3;
        v70 = 1;
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
      v67 = a3;
    }
  }
  v77 = &v9[v12];
  while ( 1 )
  {
    if ( v9 )
    {
      if ( v14 )
      {
        v6 = *v9;
        v79 = v6;
        if ( *(_QWORD *)(v5 + 40) >> 58 == a2 && v6 == ((*(_QWORD *)(v5 + 40) >> 36) & 3) )
          return a1;
      }
      else
      {
        v79 = v7;
        v6 = v7;
        v7 = v7 + 1 < v12 ? v7 + 1 : 0;
        v67 = v7;
      }
    }
    v71 = v11 + 2688;
    v15 = v11 + 2368;
    v68 = v11 + 2368;
    if ( v11 + 2368 < (unsigned __int64)(v11 + 2688) )
      break;
LABEL_46:
    if ( ++v9 >= v77 )
      return a1;
    v12 = v70;
  }
  v16 = (_QWORD *)(192LL * v6 + 864 + v13);
  v17 = (unsigned __int64 *)(v11 + 2400);
  v18 = v71;
  v72 = v16;
  while ( *v16 == 0xFFFFFFFFFLL )
  {
LABEL_44:
    v15 += 40LL;
    v16 += 3;
    v17 += 5;
    v68 = v15;
    v72 = v16;
    if ( v15 >= v18 )
    {
      v7 = v67;
      v6 = v79;
      v13 = v75;
      v14 = v74;
      v11 = v76;
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
  v23 = *v16;
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
    v15 = v68;
    goto LABEL_43;
  }
  v25 = 48 * v23 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    goto LABEL_48;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v73 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v73);
    while ( *(__int64 *)(v25 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v25 + 34) & 7) != 2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 = KiIrqlFlags;
    if ( KiIrqlFlags )
      goto LABEL_38;
    goto LABEL_42;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v17;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v17);
  if ( v23 != *v72 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v26 = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
LABEL_38:
      if ( (v26 & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v27 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v27);
      }
    }
LABEL_42:
    __writecr8(CurrentIrql);
    v17 -= 5;
    v15 = v68 - 40;
    v16 = v72 - 3;
LABEL_43:
    v18 = v71;
    goto LABEL_44;
  }
LABEL_48:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v28 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v28);
    }
    v29 = a1;
    goto LABEL_62;
  }
  if ( MiCanPageMove(48 * v23 - 0x58000000000LL, v20, v21, v22) )
  {
    if ( dword_14046620C != 1 )
      goto LABEL_73;
    v33 = v23 & 0x1F;
    LOBYTE(v34) = 1;
    v35 = (volatile signed __int32 *)(qword_140466268 + 4 * (v23 >> 5));
    if ( v33 + 1 > 0x20 )
    {
      if ( (v23 & 0x1F) != 0 )
      {
        _InterlockedOr(v35++, ((1 << (32 - (v23 & 0x1F))) - 1) << v33);
        v34 = 1LL - (32 - (unsigned int)(v23 & 0x1F));
        if ( v34 >= 0x20 )
        {
          v37 = v34 >> 5;
          v34 += -32LL * (v34 >> 5);
          do
          {
            *v35++ = -1;
            --v37;
          }
          while ( v37 );
        }
        if ( !v34 )
        {
LABEL_73:
          v38 = a1;
          v39 = v30 & a1;
          v40 = v30 & *(_QWORD *)v25;
          v41 = v30 & *(_QWORD *)(v25 + 24);
          if ( (*(_BYTE *)(v25 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v41) )
            {
              updated = MiUpdateTransitionPteFrame(v43[2], v42);
              *(_QWORD *)(v46 + 16) = updated;
            }
            else
            {
              *v43 = v39 | *v43 & 0xFFFFFFF000000000uLL;
            }
            if ( MiIsDecayPfn(v44) )
            {
              *(_QWORD *)(v47 + 40) = v39 | *(_QWORD *)(v47 + 40) & 0xFFFFFFF000000000uLL;
              goto LABEL_87;
            }
            v48 = v47;
          }
          else
          {
            if ( v41 == v30 )
            {
              v49 = v68;
              *(_QWORD *)(v68 + 16) = a1;
            }
            else
            {
              *(_QWORD *)(48 * v41 - 0x58000000000LL) = v39 | *(_QWORD *)(48 * v41 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
              v49 = v68;
            }
            if ( v40 == v30 )
            {
              *(_QWORD *)(v49 + 24) = a1;
LABEL_87:
              MiUnlinkNumaStandbyPage(48 * v23 - 0x58000000000LL);
              MiFinalizePageAttribute(v5, *(unsigned __int8 *)(v25 + 34) >> 6, 1u);
              MiCopyPfnEntryEx(v5, (__int128 *)(48 * v23 - 0x58000000000LL));
              MiInsertNumaStandbyPage(v5);
              _InterlockedOr(v66, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v5 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v5, KiTbFlushTimeStamp, 1);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v50 = *(_QWORD *)(v25 + 40) & 0xFFFFFFFFFLL;
              if ( v50 == v23 )
              {
                v51 = v39 | *(_QWORD *)(v5 + 40) & 0xFFFFFFF000000000uLL;
                v52 = a1;
                *(_QWORD *)(v5 + 40) = v51;
                KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(a1 << 12);
                *(_QWORD *)((v55 | v54) - 1048) = KernelDirectoryTableBase;
                v56 = v55 | *(_QWORD *)(v25 + 8);
              }
              else
              {
                v52 = a1;
                v56 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v25 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                    + 8LL * ((*(_DWORD *)(v25 + 8) >> 3) & 0x1FF);
              }
              v57 = MI_READ_PTE_LOCK_FREE(v56);
              MiUpdateTransitionPteFrame(v57, v52);
              if ( !MiPteInShadowRange(v58) )
                goto LABEL_100;
              if ( (unsigned int)MiPteHasShadow() )
              {
                v60 = 1;
                if ( !HIBYTE(word_140465BEC) )
                {
                  v63 = (v59 & 1) == 0;
                  goto LABEL_98;
                }
              }
              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
              {
                v63 = (v59 & 1) == 0;
LABEL_98:
                if ( !v63 )
                  v59 |= v62;
              }
LABEL_100:
              *v61 = v59;
              if ( v60 )
                MiWritePteShadow((__int64)v61);
              if ( v50 != v23 )
              {
                LOBYTE(v59) = 17;
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v61, v59, 0x80000000LL);
              }
              MiCopyPage(v52, v23, 0LL, 6);
              _InterlockedOr(v66, 0);
              v64 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v5 + 31)) & 0xF) != 0 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v68 + 32);
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v68 + 32));
                MiSetPfnTbFlushStamp(v5, v64, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              *(_QWORD *)(v25 + 40) &= ~0x200000000000000uLL;
              *(_BYTE *)(v25 + 34) &= 0xC7u;
              *(_BYTE *)(v25 + 35) &= ~0x20u;
              _InterlockedOr(v66, 0);
              MiSetPfnTbFlushStamp(48 * v23 - 0x58000000000LL, KiTbFlushTimeStamp, 1);
              *(_QWORD *)v25 = 0LL;
              MiSetPfnBlink(48 * v23 - 0x58000000000LL, 0LL, 1);
              *(_BYTE *)(v25 + 34) = *(_BYTE *)(v25 + 34) & 0xF8 | 5;
              *(_QWORD *)(v25 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v25 + 16));
              *(_BYTE *)(v25 + 35) &= ~8u;
              *(_QWORD *)(v25 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
              *(_BYTE *)(v25 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
              {
                v65 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick((__int64)v65);
              }
              __writecr8(CurrentIrql);
              return v23;
            }
            v48 = 48 * v40 - 0x58000000000LL;
          }
          MiSetPfnBlink(v48, v38, 0);
          goto LABEL_87;
        }
      }
      v36 = (1 << v34) - 1;
    }
    else
    {
      v36 = 1 << v33;
    }
    _InterlockedOr(v35, v36);
    goto LABEL_73;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiReuseStandbyPage(48 * v23 - 0x58000000000LL);
  *(_QWORD *)v25 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v31 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v31);
  }
  v29 = v23;
LABEL_62:
  __writecr8(CurrentIrql);
  return v29;
}
