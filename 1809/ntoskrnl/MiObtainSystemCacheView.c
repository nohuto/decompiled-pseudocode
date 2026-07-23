/*
 * XREFs of MiObtainSystemCacheView @ 0x1400AD160
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400AD870 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x14075138C (MmReserveViewInSystemCache.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiCompareTbFlushTimeStamp @ 0x14009825C (MiCompareTbFlushTimeStamp.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     MiGetPteLink @ 0x1400AD6E4 (MiGetPteLink.c)
 *     RemoveListHeadPte @ 0x1400AD720 (RemoveListHeadPte.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiExpandSystemCache @ 0x1400F624C (MiExpandSystemCache.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1401392BC (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CcUnmapInactiveViews @ 0x14026AB50 (CcUnmapInactiveViews.c)
 *     MiInitializeSystemCache @ 0x14072B88C (MiInitializeSystemCache.c)
 */

_QWORD *__fastcall MiObtainSystemCacheView(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  struct _KTHREAD *CurrentThread; // r13
  int v5; // r12d
  __int64 CurrentIrql; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int8 v22; // di
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v32; // r12d
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // r9d
  unsigned int v44; // ecx
  signed __int64 v45; // rax
  signed __int64 v46; // r9
  __int64 v47; // r10
  int v48; // r11d
  __int64 v49; // rax
  volatile signed __int64 *v50; // rsi
  __int64 v51; // r8
  char v52; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v54; // rdx
  struct _KPRCB *v55; // rcx
  __int64 v56; // r8
  unsigned __int64 v57; // rdi
  _QWORD *v58; // rbx
  int PteLink; // eax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r11
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r11
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r11
  unsigned __int8 v72; // r15
  __int64 v73; // rax
  struct _KPRCB *v74; // rcx
  struct _KPRCB *v75; // rcx
  __int64 v76; // r11
  __int64 v77; // r11
  __int64 v78; // r11
  __int64 v79; // r11
  signed __int32 v80[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v81; // [rsp+20h] [rbp-E0h]
  __int64 v82; // [rsp+28h] [rbp-D8h]
  __int64 v83; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v84; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v85; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v86; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v87; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v88; // [rsp+68h] [rbp-98h] BYREF
  __int64 v89; // [rsp+70h] [rbp-90h] BYREF
  __int64 v90; // [rsp+78h] [rbp-88h]
  int v91; // [rsp+80h] [rbp-80h] BYREF
  __int16 v92; // [rsp+84h] [rbp-7Ch]
  __int64 v93; // [rsp+88h] [rbp-78h]
  __int64 v94; // [rsp+90h] [rbp-70h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  _QWORD v96[12]; // [rsp+140h] [rbp+40h]

  v3 = 0;
  v93 = 20LL;
  v91 = 0;
  CurrentThread = 0LL;
  v92 = 0;
  v5 = 0;
  v94 = 0LL;
  v95 = 0LL;
  v81 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v82 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v84 = &qword_14043B618;
  v83 = 0LL;
  KxAcquireQueuedSpinLock((__int64)&v83, &qword_14043B618, a3);
  if ( *(_BYTE *)(a1 + 7132) )
    goto LABEL_3;
  KxReleaseQueuedSpinLock(&v83);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8((unsigned __int8)CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v50 = (volatile signed __int64 *)(a1 + 1792);
  ExAcquirePushLockExclusiveEx(a1 + 1792, 0LL);
  if ( *(_BYTE *)(a1 + 7132) )
  {
    if ( (_InterlockedExchangeAdd64(v50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1792));
    KeAbPostRelease(a1 + 1792);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    CurrentThread = 0LL;
    goto LABEL_55;
  }
  if ( (unsigned int)MiInitializeSystemCache(a1) )
  {
LABEL_55:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v82 = CurrentIrql;
    v84 = &qword_14043B618;
    v83 = 0LL;
    KxAcquireQueuedSpinLock((__int64)&v83, &qword_14043B618, v51);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 7132) = 1;
LABEL_3:
    v8 = (((unsigned __int64)(a1 + 1720) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v85 = v8;
    do
    {
      v9 = *(_QWORD *)(a1 + 1720);
      if ( v9 )
      {
        if ( qword_14043B180 && (v9 & 0x10) == 0 )
          v9 &= ~qword_14043B180;
        v10 = v9 >> 28;
      }
      else
      {
        v10 = 0LL;
      }
      if ( v10 != (__int64)(v8 - *(_QWORD *)(a1 + 1736)) >> 3 )
        goto LABEL_10;
      v49 = MiExpandSystemCache(a1, &v88);
      v8 = v85;
    }
    while ( v49 );
    KxReleaseQueuedSpinLock(&v83);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
    {
      v55 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v55);
    }
    __writecr8((unsigned __int8)CurrentIrql);
    if ( CurrentThread )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1792), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1792));
      KeAbPostRelease(a1 + 1792);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      CurrentThread = 0LL;
    }
    if ( v88 )
      MiReturnSystemVa(v88, v88 + 0x200000, 8);
    if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 168), v54, 0LL, &v86) == 1 )
    {
      v57 = v86;
      v58 = (_QWORD *)(((v86 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( MiGetPteLink(v58[3]) == 2 )
      {
        PteLink = MiGetPteLink(v58[2]);
        if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFFLL) )
        {
          MiInsertTbFlushEntry(&v91, v57, 64LL);
          MiFlushTbList(&v91, v60, v61, v62);
        }
      }
      if ( MiPteInShadowRange((unsigned __int64)v58) )
      {
        if ( (unsigned int)MiPteHasShadow(v64, v63) )
        {
          if ( !HIBYTE(word_14043B26C) && (v63 & 1) != 0 )
            v63 |= v65;
          *v58 = v63;
          MiWritePteShadow(v58);
LABEL_102:
          if ( MiPteInShadowRange((unsigned __int64)(v58 + 1)) )
          {
            if ( (unsigned int)MiPteHasShadow(v67, v66) )
            {
              if ( !HIBYTE(word_14043B26C) && (v66 & 1) != 0 )
                v66 |= v68;
              v58[1] = v66;
              MiWritePteShadow(v58 + 1);
LABEL_112:
              if ( MiPteInShadowRange((unsigned __int64)(v58 + 2)) )
              {
                if ( (unsigned int)MiPteHasShadow(v70, v69) )
                {
                  if ( !HIBYTE(word_14043B26C) && (v69 & 1) != 0 )
                    v69 |= v71;
                  v58[2] = v69;
                  MiWritePteShadow(v58 + 2);
                  return v58;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                  && (v69 & 1) != 0 )
                {
                  v69 |= v71;
                }
              }
              v58[2] = v69;
              return v58;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v66 & 1) != 0 )
            {
              v66 |= v68;
            }
          }
          v58[1] = v66;
          goto LABEL_112;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v63 & 1) != 0 )
        {
          v63 |= v65;
        }
      }
      *v58 = v63;
      goto LABEL_102;
    }
    v72 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v72 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LOBYTE(v82) = v72;
    v84 = &qword_14043B618;
    v83 = 0LL;
    KxAcquireQueuedSpinLock((__int64)&v83, &qword_14043B618, v56);
    v73 = MiGetPteLink(*(_QWORD *)(a1 + 1720));
    if ( v73 == (__int64)(v85 - *(_QWORD *)(a1 + 1736)) >> 3 )
    {
      KxReleaseQueuedSpinLock(&v83);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v72 < 2u )
      {
        v74 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v74->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v74);
      }
      __writecr8(v72);
      return 0LL;
    }
LABEL_10:
    v11 = RemoveListHeadPte(a1 + 1720);
    v90 = 0LL;
    v89 = MI_READ_PTE_LOCK_FREE(((((__int64)(v11 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
    v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v89);
    ++*(_BYTE *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 39);
    v13 = (_QWORD *)(v11 + 24);
    v14 = *(_QWORD *)(v11 + 24);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v11 + 24);
      if ( qword_14043B180 )
      {
        if ( (v14 & 0x10) != 0 )
          v15 = v14 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v15 = v14 & ~qword_14043B180;
      }
      if ( v15 >= 0x10000000 )
      {
        if ( MiGetPteLink(v14) == 1 )
        {
          v5 = 1;
        }
        else
        {
          _InterlockedOr(v80, 0);
          v16 = MiGetPteLink(*(_QWORD *)(v11 + 16));
          v18 = (v17 - v16) & 0xFFFFF;
          if ( v18 <= 2 && ((v16 & 1) != 0 || v18 < 2) )
          {
            v87 = (__int64 *)(v11 + 24);
            v32 = 0;
            v33 = v85;
            v34 = v11;
            v35 = v90;
            do
            {
              if ( HIDWORD(v93) )
              {
                v36 = v32++;
                v96[v36] = v34;
              }
              v86 = (__int64)((v34 << 25) - v35) >> 16;
              MiInsertTbFlushEntry(&v91, v86, 64LL);
              v37 = *v87;
              if ( qword_14043B180 )
              {
                if ( (v37 & 0x10) != 0 )
                  LODWORD(v37) = v37 & 0xFFFFFFEF;
                else
                  LODWORD(v37) = ~(_DWORD)qword_14043B180 & v37;
              }
              v38 = MiSwizzleInvalidPte(v37 & 0xFFFFFFF | 0x10000000);
              *v39 = v38;
              if ( v32 == 12 )
                break;
              v40 = MiGetPteLink(*(_QWORD *)v34);
              v41 = *(_QWORD *)(a1 + 1736);
              if ( v40 == (__int64)(v33 - v41) >> 3 )
                break;
              v34 = v41 + 8 * v40;
              v42 = *(_QWORD *)(v34 + 24);
              v87 = (__int64 *)(v34 + 24);
            }
            while ( MiGetPteLink(v42) == 2 );
            v3 = 0;
            v81 = v32;
            v5 = 0;
            v13 = (_QWORD *)(v11 + 24);
          }
        }
      }
    }
    KxReleaseQueuedSpinLock(&v83);
    if ( HIDWORD(v93) )
    {
      MiFlushTbList(&v91, v19, v20, v21);
      if ( v81 )
      {
        do
        {
          v43 = MI_READ_PTE_LOCK_FREE(v96[v3] + 24LL);
          v44 = v43;
          if ( qword_14043B180 )
          {
            if ( (v43 & 0x10) != 0 )
              v44 = v43 & 0xFFFFFFEF;
            else
              v44 = v43 & ~(_DWORD)qword_14043B180;
          }
          v45 = MiSwizzleInvalidPte(v44 & 0xFFFFFFF);
          _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 24), v45, v46);
          ++v3;
        }
        while ( v3 != v48 );
      }
    }
    v22 = v82;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v82 < 2u )
    {
      v75 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v75->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v75);
    }
    __writecr8(v22);
    if ( CurrentThread )
    {
      v52 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1792), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v52 & 2) != 0 && (v52 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1792));
      KeAbPostRelease(a1 + 1792);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( v5 == 1 )
      MiWaitForSystemCacheViewFlush(v11);
    if ( MiPteInShadowRange(v11) )
    {
      if ( (unsigned int)MiPteHasShadow(v24, v23) )
      {
        if ( !HIBYTE(word_14043B26C) && (v23 & 1) != 0 )
          v23 |= v76;
        *(_QWORD *)v11 = v23;
        MiWritePteShadow(v11);
LABEL_24:
        if ( MiPteInShadowRange(v11 + 8) )
        {
          if ( (unsigned int)MiPteHasShadow(v26, v25) )
          {
            if ( !HIBYTE(word_14043B26C) && (v25 & 1) != 0 )
              v25 |= v77;
            *(_QWORD *)(v11 + 8) = v25;
            MiWritePteShadow(v11 + 8);
LABEL_26:
            if ( MiPteInShadowRange(v11 + 16) )
            {
              if ( (unsigned int)MiPteHasShadow(v28, v27) )
              {
                if ( !HIBYTE(word_14043B26C) && (v27 & 1) != 0 )
                  v27 |= v78;
                *(_QWORD *)(v11 + 16) = v27;
                MiWritePteShadow(v11 + 16);
LABEL_28:
                if ( MiPteInShadowRange((unsigned __int64)v13) )
                {
                  if ( (unsigned int)MiPteHasShadow(v30, v29) )
                  {
                    if ( !HIBYTE(word_14043B26C) && (v29 & 1) != 0 )
                      v29 |= v79;
                    *v13 = v29;
                    MiWritePteShadow(v13);
                    return (_QWORD *)v11;
                  }
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                    && (v29 & 1) != 0 )
                  {
                    v29 |= v79;
                  }
                }
                *v13 = v29;
                return (_QWORD *)v11;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                && (v27 & 1) != 0 )
              {
                v27 |= v78;
              }
            }
            *(_QWORD *)(v11 + 16) = v27;
            goto LABEL_28;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v25 & 1) != 0 )
          {
            v25 |= v77;
          }
        }
        *(_QWORD *)(v11 + 8) = v25;
        goto LABEL_26;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v23 & 1) != 0 )
      {
        v23 |= v76;
      }
    }
    *(_QWORD *)v11 = v23;
    goto LABEL_24;
  }
  if ( (_InterlockedExchangeAdd64(v50, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1792));
  KeAbPostRelease(a1 + 1792);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
