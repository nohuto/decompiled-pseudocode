/*
 * XREFs of MiSwapNumaStandbyPage @ 0x1402C1200
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x1402C0C84 (MiPruneStandbyPages.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiCanPageMove @ 0x140118464 (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x140118A14 (MiUpdateTransitionPteFrame.c)
 *     MiIsDecayPfn @ 0x140118C7C (MiIsDecayPfn.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14013CDBC (KeMakeKernelDirectoryTableBase.c)
 *     MiUnlinkNumaStandbyPage @ 0x140152380 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInsertNumaStandbyPage @ 0x1402C05E4 (MiInsertNumaStandbyPage.c)
 *     MiReuseStandbyPage @ 0x1402C1190 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  unsigned int v4; // r15d
  __int64 v5; // rdi
  ULONG_PTR v7; // r12
  unsigned int v8; // ecx
  __int64 v9; // rdi
  unsigned int v10; // r11d
  __int64 v11; // rbx
  unsigned __int8 *v12; // r14
  unsigned __int64 v13; // r8
  __int64 v14; // r13
  int v15; // edx
  __int64 v16; // rbx
  int v17; // esi
  unsigned __int64 v18; // rax
  _QWORD *v19; // rbx
  volatile __int64 *v20; // r13
  unsigned __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR v23; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // al
  struct _KPRCB *v29; // rcx
  struct _KPRCB *v30; // rcx
  __int64 v31; // r10
  __int64 v32; // r11
  struct _KPRCB *v33; // rcx
  ULONG_PTR v35; // r9
  unsigned __int64 v36; // rdx
  volatile signed __int32 *v37; // r8
  unsigned int v38; // eax
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r8
  unsigned __int64 *v43; // r9
  __int64 v44; // r10
  __int64 updated; // rax
  __int64 v46; // r9
  __int64 v47; // r9
  __int64 v48; // r10
  __int64 v49; // r11
  __int64 v50; // r13
  __int64 v51; // rcx
  __int64 v52; // r14
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
  __int64 v64; // r8
  char v65; // r14
  struct _KPRCB *v66; // rcx
  signed __int32 v67[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v68; // [rsp+20h] [rbp-60h]
  int v69; // [rsp+28h] [rbp-58h]
  int v70; // [rsp+2Ch] [rbp-54h]
  volatile signed __int64 *v71; // [rsp+30h] [rbp-50h] BYREF
  volatile __int64 *v72; // [rsp+38h] [rbp-48h]
  unsigned __int64 v73; // [rsp+48h] [rbp-38h]
  _QWORD *v74; // [rsp+50h] [rbp-30h]
  int v75; // [rsp+58h] [rbp-28h] BYREF
  int v76; // [rsp+5Ch] [rbp-24h]
  __int64 v77; // [rsp+60h] [rbp-20h]
  unsigned __int8 *v78; // [rsp+68h] [rbp-18h]
  __int64 v79; // [rsp+70h] [rbp-10h]
  int v80; // [rsp+C0h] [rbp+40h]

  v4 = a2;
  v5 = 48 * a1;
  v7 = a1;
  v8 = MmNumberOfChannels;
  v9 = v5 - 0x58000000000LL;
  v10 = 0;
  v11 = 1984LL * a2;
  v12 = 0LL;
  v80 = 0;
  v13 = *(_QWORD *)(v9 + 40);
  v70 = MmNumberOfChannels;
  v14 = *(_QWORD *)(qword_14043B808 + 8 * ((v13 >> 40) & 0x3FF));
  v15 = 0;
  v79 = v14;
  v69 = 0;
  v16 = *(_QWORD *)(v14 + 16) + v11;
  v77 = v16;
  v17 = *(_DWORD *)(v16 + 1888) & 1;
  v76 = v17;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v12 = (unsigned __int8 *)(v16 + 1914);
    if ( v17 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v8 = 1;
        v80 = a3;
        v70 = 1;
        v10 = a3;
        v12 = 0LL;
      }
      else if ( (a4 & 8) != 0 )
      {
        v12 = (unsigned __int8 *)(v16 + 1918);
      }
    }
    else
    {
      if ( v13 >> 58 == v4 )
        return v7;
      v15 = a3;
      v69 = a3;
    }
  }
  v78 = &v12[v8];
  while ( 1 )
  {
    if ( v12 )
    {
      if ( v17 )
      {
        v10 = *v12;
        v80 = v10;
        if ( *(_QWORD *)(v9 + 40) >> 58 == v4 && v10 == ((*(_QWORD *)(v9 + 40) >> 36) & 3) )
          return v7;
      }
      else
      {
        v80 = v15;
        v10 = v15;
        v15 = v15 + 1 < v8 ? v15 + 1 : 0;
        v69 = v15;
      }
    }
    v18 = v14 + 2368;
    v68 = v14 + 2368;
    v73 = v14 + 2688;
    if ( v14 + 2368 < (unsigned __int64)(v14 + 2688) )
      break;
LABEL_46:
    if ( ++v12 >= v78 )
      return v7;
    v8 = v70;
    v14 = v79;
  }
  v19 = (_QWORD *)(192LL * v10 + 864 + v16);
  v20 = (volatile __int64 *)(v14 + 2400);
  v21 = v73;
  v74 = v19;
  while ( *v19 == 0xFFFFFFFFFLL )
  {
LABEL_44:
    v18 += 40LL;
    v19 += 3;
    v20 += 5;
    v68 = v18;
    v74 = v19;
    if ( v18 >= v21 )
    {
      v15 = v69;
      v10 = v80;
      v16 = v77;
      v17 = v76;
      v4 = a2;
      goto LABEL_46;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v71 = 0LL;
  v72 = v20;
  KxAcquireQueuedSpinLock((__int64)&v71, v20, 2LL);
  v23 = *v19;
  if ( *v19 == 0xFFFFFFFFFLL )
  {
    KxReleaseQueuedSpinLock(&v71);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    v18 = v68;
    goto LABEL_43;
  }
  v25 = 48 * v23 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    goto LABEL_48;
  KxReleaseQueuedSpinLock(&v71);
  v75 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v75, v26, v27);
    while ( *(__int64 *)(v25 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v25 + 34) & 7) != 2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v28 = KiIrqlFlags;
    if ( KiIrqlFlags )
      goto LABEL_38;
    goto LABEL_42;
  }
  v71 = 0LL;
  v72 = v20;
  KxAcquireQueuedSpinLock((__int64)&v71, v20, 2LL);
  if ( v23 != *v74 )
  {
    KxReleaseQueuedSpinLock(&v71);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v28 = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
LABEL_38:
      if ( (v28 & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v29 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v29);
      }
    }
LABEL_42:
    __writecr8(CurrentIrql);
    v20 -= 5;
    v18 = v68 - 40;
    v19 = v74 - 3;
LABEL_43:
    v21 = v73;
    goto LABEL_44;
  }
LABEL_48:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    KxReleaseQueuedSpinLock(&v71);
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v30 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v30);
    }
    goto LABEL_61;
  }
  if ( MiCanPageMove(48 * v23 - 0x58000000000LL) )
  {
    if ( dword_14043B82C != 1 )
      goto LABEL_73;
    v35 = v23 & 0x1F;
    LOBYTE(v36) = 1;
    v37 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v23 >> 5));
    if ( v35 + 1 > 0x20 )
    {
      if ( (v23 & 0x1F) != 0 )
      {
        _InterlockedOr(v37++, ((1 << (32 - (v23 & 0x1F))) - 1) << v35);
        v36 = 1LL - (32 - (unsigned int)(v23 & 0x1F));
        if ( v36 >= 0x20 )
        {
          v39 = v36 >> 5;
          v36 += -32LL * (v36 >> 5);
          do
          {
            *v37++ = -1;
            --v39;
          }
          while ( v39 );
        }
        if ( !v36 )
        {
LABEL_73:
          v40 = v32 & *(_QWORD *)v25;
          v41 = v32 & *(_QWORD *)(v25 + 24);
          if ( (*(_BYTE *)(v25 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v41) )
            {
              updated = MiUpdateTransitionPteFrame(v43[2], v7);
              *(_QWORD *)(v46 + 16) = updated;
            }
            else
            {
              *v43 = v44 | *v43 & 0xFFFFFFF000000000uLL;
            }
            if ( MiIsDecayPfn(v42) )
              *(_QWORD *)(v47 + 40) = v48 | v49 & *(_QWORD *)(v47 + 40);
            else
              MiSetPfnBlink(v47, v7, 0);
            v50 = v68;
          }
          else
          {
            v50 = v68;
            if ( v41 == v32 )
              *(_QWORD *)(v68 + 16) = v7;
            else
              *(_QWORD *)(v31 + 48 * v41) ^= v32 & (v7 ^ *(_QWORD *)(v31 + 48 * v41));
            if ( v40 == v32 )
              *(_QWORD *)(v50 + 24) = v7;
            else
              MiSetPfnBlink(v31 + 48 * v40, v7, 0);
          }
          MiUnlinkNumaStandbyPage(48 * v23 - 0x58000000000LL);
          MiFinalizePageAttribute(v9, *(unsigned __int8 *)(v25 + 34) >> 6, 1u);
          MiCopyPfnEntryEx(v9, 48 * v23 - 0x58000000000LL);
          MiInsertNumaStandbyPage(v51);
          _InterlockedOr(v67, 0);
          if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v9 + 31)) & 0xF) != 0 )
            MiSetPfnTbFlushStamp(v9, KiTbFlushTimeStamp, 1);
          KxReleaseQueuedSpinLock(&v71);
          v52 = *(_QWORD *)(v25 + 40) & 0xFFFFFFFFFLL;
          if ( v52 == v23 )
          {
            *(_QWORD *)(v9 + 40) ^= (v7 ^ *(_QWORD *)(v9 + 40)) & 0xFFFFFFFFFLL;
            KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(v7 << 12);
            *(_QWORD *)((v55 | v54) - 1048) = KernelDirectoryTableBase;
            v56 = v55 | *(_QWORD *)(v25 + 8);
          }
          else
          {
            v56 = MiMapPageInHyperSpaceWorker(*(_QWORD *)(v25 + 40) & 0xFFFFFFFFFLL, 0LL, 0x80000000)
                + 8LL * ((*(_DWORD *)(v25 + 8) >> 3) & 0x1FF);
          }
          v57 = MI_READ_PTE_LOCK_FREE(v56);
          MiUpdateTransitionPteFrame(v57, v7);
          if ( !MiPteInShadowRange(v58) )
            goto LABEL_100;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v60 = 1;
            if ( !HIBYTE(word_14043B26C) )
            {
              v63 = (v59 & 1) == 0;
              goto LABEL_98;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            v63 = (v59 & 1) == 0;
LABEL_98:
            if ( !v63 )
              v59 |= v62;
          }
LABEL_100:
          *v61 = v59;
          if ( v60 )
            MiWritePteShadow((__int64)v61, v59);
          if ( v52 != v23 )
            MiUnmapPageInHyperSpaceWorker((unsigned __int64)v61, 0x11u, 0x80000000LL);
          MiCopyPage(v7, v23, 0LL, 6);
          _InterlockedOr(v67, 0);
          v65 = KiTbFlushTimeStamp;
          if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v9 + 31)) & 0xF) != 0 )
          {
            v71 = 0LL;
            v72 = (volatile __int64 *)(v50 + 32);
            KxAcquireQueuedSpinLock((__int64)&v71, (volatile __int64 *)(v50 + 32), v64);
            MiSetPfnTbFlushStamp(v9, v65, 1);
            KxReleaseQueuedSpinLock(&v71);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *(_QWORD *)(v25 + 40) &= ~0x200000000000000uLL;
          *(_BYTE *)(v25 + 34) &= 0xC7u;
          *(_BYTE *)(v25 + 35) &= ~0x20u;
          _InterlockedOr(v67, 0);
          MiSetPfnTbFlushStamp(48 * v23 - 0x58000000000LL, KiTbFlushTimeStamp, 1);
          *(_QWORD *)v25 = 0LL;
          MiSetPfnBlink(48 * v23 - 0x58000000000LL, 0LL, 1);
          *(_BYTE *)(v25 + 34) = *(_BYTE *)(v25 + 34) & 0xF8 | 5;
          *(_QWORD *)(v25 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((_QWORD *)(v25 + 16));
          *(_BYTE *)(v25 + 35) &= ~8u;
          *(_QWORD *)(v25 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
          *(_BYTE *)(v25 + 35) &= 0xF8u;
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            v66 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v66);
          }
          __writecr8(CurrentIrql);
          return v23;
        }
      }
      v38 = (1 << v36) - 1;
    }
    else
    {
      v38 = 1 << v35;
    }
    _InterlockedOr(v37, v38);
    goto LABEL_73;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KxReleaseQueuedSpinLock(&v71);
  MiReuseStandbyPage(48 * v23 - 0x58000000000LL);
  *(_QWORD *)v25 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v9);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v33 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v33);
  }
  v7 = v23;
LABEL_61:
  __writecr8(CurrentIrql);
  return v7;
}
