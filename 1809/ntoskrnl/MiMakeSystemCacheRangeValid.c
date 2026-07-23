/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x14004B5A0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiAddWorkingSetEntries @ 0x140048CE0 (MiAddWorkingSetEntries.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     PfSnReferenceProcessTrace @ 0x1400D4B30 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1400D4C84 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x1400D53C0 (PfSnCheckLoggingForThread.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140128CC8 (MiEmptyDeferredWorkingSetEntries.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v6; // r14d
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  __int64 CurrentIrql; // r12
  LONG *v10; // rsi
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  signed __int32 v14; // ett
  _DWORD *v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // rsi
  __int64 v30; // r15
  unsigned __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbx
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  int v36; // ecx
  unsigned __int64 v37; // rdx
  char v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  _QWORD *v42; // rsi
  unsigned int v43; // eax
  unsigned __int8 v44; // al
  char v45; // al
  struct _KPRCB *v46; // rcx
  char v47; // r14
  __int64 v48; // rdx
  volatile signed __int32 *PageTableLockBuffer; // r8
  int v50; // r9d
  signed __int32 v51; // eax
  volatile signed __int32 v52; // ett
  signed __int32 v53; // edx
  signed __int64 v54; // rdx
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  signed __int64 v58; // rax
  signed __int64 v59; // r9
  __int64 v60; // rcx
  __int64 result; // rax
  unsigned __int64 v62; // r14
  __int64 v63; // r13
  unsigned __int64 v64; // r12
  __int64 v65; // rbx
  unsigned __int8 v66; // si
  struct _KPRCB *v67; // rcx
  __int64 v68; // r15
  __int64 v69; // r15
  __int64 v70; // rbx
  signed __int64 *v71; // r14
  __int64 v72; // rsi
  KIRQL v73; // r13
  struct _KPRCB *v74; // rcx
  int v75; // r12d
  struct _KTHREAD *CurrentThread; // r15
  __int64 v77; // rax
  struct _EX_RUNDOWN_REF *v78; // rbx
  int v79; // r8d
  signed __int64 v80; // rax
  signed __int64 v81; // rtt
  __int64 v82; // [rsp+40h] [rbp-C0h]
  __int64 v83; // [rsp+40h] [rbp-C0h]
  __int64 v84; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v85; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v86; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v87; // [rsp+60h] [rbp-A0h]
  __int64 v88; // [rsp+68h] [rbp-98h] BYREF
  __int64 v89; // [rsp+70h] [rbp-90h]
  int v90; // [rsp+78h] [rbp-88h] BYREF
  int v91; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int64 v92; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v93; // [rsp+88h] [rbp-78h]
  __int64 v94; // [rsp+90h] [rbp-70h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  _QWORD v96[16]; // [rsp+A0h] [rbp-60h]
  _QWORD v97[16]; // [rsp+120h] [rbp+20h]

  v94 = a4;
  v84 = 0LL;
  v85 = 0LL;
  v5 = a4;
  v86 = 0LL;
  v6 = a3;
  v97[0] = 0LL;
  LODWORD(v87) = a3;
  v93 = a1;
  v95 = 0LL;
  v7 = (__int64)(a1 << 25) >> 16;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( (byte_14043F7B8 & 7u) < 6 )
  {
    v10 = &dword_14043C7C0;
    if ( (byte_14043F7B8 & 7) != 2 )
      v10 = (LONG *)&unk_14043F7C0;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, (unsigned __int8)CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = SchedulerAssist[5];
          SchedulerAssist[5] = v13 + 1;
          if ( v13 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v10);
      v14 = *v10 & 0x7FFFFFFF;
      if ( v14 != _InterlockedCompareExchange(v10, v14 + 1, v14) )
      {
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v15[5] - 1;
            v15[5] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v10, (unsigned __int8)CurrentIrql);
      }
      v6 = v87;
    }
    if ( v10[1] )
      _InterlockedExchange(v10 + 1, 0);
    v89 = CurrentIrql;
  }
  else
  {
    v89 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  MiLockPageTableInternal(&unk_14043F700, v8, 0LL, a4);
  v17 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v18 = *(_QWORD *)v17;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL
    && v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 8 * ((v17 >> 3) & 0x1FF));
      v21 = v18 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = v18;
      v18 = v21;
      if ( (v20 & 0x42) != 0 )
        v18 = v21 | 0x42;
    }
  }
  v92 = v18;
  if ( (unsigned __int64)&v92 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v92 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v22 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v22 )
    {
      v23 = *(_QWORD *)(v22 + 8 * (((unsigned __int64)&v92 >> 3) & 0x1FF));
      v24 = v18 | 0x20;
      if ( (v23 & 0x20) == 0 )
        v24 = v18;
      v18 = v24;
      if ( (v23 & 0x42) != 0 )
        v18 = v24 | 0x42;
    }
  }
  v25 = *(_QWORD *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 16);
  if ( v25 )
    v25 += 48 * ((v7 >> 18) & 7);
  v26 = *(_QWORD *)(v25 + 24);
  BYTE4(v85) = CurrentIrql;
  v86 = v8;
  v27 = v26 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v26 & 1) == 0 )
    v27 = v26;
  BYTE5(v85) |= 4u;
  v28 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v27 + 60LL) & 0x3FF)) + 7424LL;
  v82 = v28;
  v29 = v28;
  v84 = v28;
  if ( v6 )
  {
    v30 = 0LL;
    v31 = v93 - a2;
    v32 = v6;
    while ( 1 )
    {
      v26 = *(_QWORD *)a2;
      v33 = *(_QWORD *)a2;
      v96[v30] = 0LL;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v34 )
        {
          v33 |= 0x20uLL;
          v35 = *(_QWORD *)(v34 + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v35 & 0x20) == 0 )
            v33 = v26;
          if ( (v35 & 0x42) != 0 )
            v33 |= 0x42uLL;
        }
      }
      v88 = v33;
      if ( !v33 )
        goto LABEL_74;
      if ( (v33 & 1) == 0 )
      {
        v26 |= 1uLL;
        *(_QWORD *)a2 = v26;
        goto LABEL_73;
      }
      if ( (*(_BYTE *)(v31 + a2) & 1) != 0 )
        goto LABEL_73;
      v39 = v33;
      if ( (unsigned __int64)&v88 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v88 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        v40 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 8 * (((unsigned __int64)&v88 >> 3) & 0x1FF));
          v39 = v33 | 0x20;
          if ( (v41 & 0x20) == 0 )
            v39 = v33;
          if ( (v41 & 0x42) != 0 )
            v39 |= 0x42uLL;
        }
        else
        {
          v39 = v33;
        }
      }
      v42 = (_QWORD *)(48 * ((v39 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
      v97[v30] = v42[2];
      if ( (v85 & 0x40000000000LL) == 0 || (v85 & 0x10000000000LL) != 0 )
      {
        v44 = 0;
        goto LABEL_113;
      }
      if ( WORD1(v85) )
        break;
      v43 = v31 + a2;
LABEL_108:
      WORD1(v85) = 1;
      LOWORD(v85) = (v43 >> 3) & 0x1FF;
      if ( (v42[5] & 0x200000000000000LL) != 0 )
        BYTE5(v85) &= ~0x10u;
      else
        BYTE5(v85) |= 0x10u;
      v44 = 4;
LABEL_113:
      if ( (unsigned int)MiAllocateWsle(v28, v31 + a2, v42, 0, v33, v44, 0LL) )
      {
        if ( (v97[v30] & 0x400LL) != 0 && PfSnNumActiveTraces )
          v96[v30] = v42[1] | 0x8000000000000000uLL;
        goto LABEL_74;
      }
LABEL_73:
      v96[v30] = 1LL;
LABEL_74:
      v28 = v82;
      ++v30;
      a2 += 8LL;
      if ( !--v32 )
      {
        v8 = v86;
        v29 = v84;
        v5 = v94;
        LOBYTE(CurrentIrql) = v89;
        goto LABEL_76;
      }
    }
    if ( WORD1(v85) + (unsigned __int16)v85 == (((unsigned int)(v31 + a2) >> 3) & 0x1FF) )
    {
      if ( (v42[5] & 0x200000000000000LL) != 0 )
      {
        if ( (v85 & 0x100000000000LL) == 0 )
          goto LABEL_105;
      }
      else if ( (v85 & 0x100000000000LL) != 0 )
      {
        goto LABEL_105;
      }
    }
    MiEmptyDeferredWorkingSetEntries(&v84, 511LL, 0x200000000000000LL);
    v28 = v82;
LABEL_105:
    v43 = v31 + a2;
    if ( WORD1(v85) )
    {
      ++WORD1(v85);
      v44 = 4;
      goto LABEL_113;
    }
    goto LABEL_108;
  }
LABEL_76:
  if ( v8 )
  {
    if ( WORD1(v85) )
    {
      v36 = 2 * ((BYTE5(v85) >> 4) & 1);
      v37 = ((unsigned __int64)(unsigned __int16)v85 << 12) + ((((__int64)((v8 << 25) - v95) >> 16 << 25) - v95) >> 16);
      if ( v37 < 0xFFFFF68000000000uLL || v37 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v38 = v36 | 5;
      }
      else
      {
        v38 = v36 | 4;
        if ( (*(_BYTE *)(v29 + 184) & 7) != 0 )
          v38 = 2 * ((v85 & 0x100000000000LL) != 0);
      }
      MiAddWorkingSetEntries(v29, v37, WORD1(v85), v38);
    }
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v45 = *(_BYTE *)(v29 + 184) & 7;
      if ( v45 )
      {
        if ( v45 == 7 )
        {
          KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[1]);
        }
        else
        {
          v46 = KeGetCurrentPrcb();
          if ( v45 == 5 )
            KxReleaseQueuedSpinLock(v46->SelfmapLockHandle);
          else
            KxReleaseQueuedSpinLock(&v46->SelfmapLockHandle[3]);
        }
      }
      else
      {
        KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[2]);
      }
    }
    else
    {
      v47 = *(_BYTE *)(v29 + 184) & 7;
      if ( v47
        || v8 < 0xFFFFF6FB7DBED000uLL
        || v8 > 0xFFFFF6FB7DBEDFFFuLL
        || (v48 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(0xFFFFF6FB7DBED000uLL, v26) + 1296) + 552LL)) == 0 )
      {
        if ( v47 && v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v29, v8, &v90);
          v50 = ~(3 << v90);
          v52 = *PageTableLockBuffer;
          v51 = _InterlockedCompareExchange(PageTableLockBuffer, *PageTableLockBuffer & v50, *PageTableLockBuffer);
          if ( v52 != v51 )
          {
            do
            {
              v53 = v51;
              v51 = _InterlockedCompareExchange(PageTableLockBuffer, v51 & v50, v51);
            }
            while ( v51 != v53 );
          }
        }
        else
        {
          v54 = *(_QWORD *)v8;
          if ( v8 >= 0xFFFFF6FB7DBED000uLL
            && v8 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v54)
            && (v54 & 1) != 0
            && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
          {
            v8 = v86;
            v55 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v55 )
            {
              v56 = *(_QWORD *)(v55 + 8 * ((v86 >> 3) & 0x1FF));
              v57 = v54 | 0x20;
              if ( (v56 & 0x20) == 0 )
                v57 = v54;
              v54 = v57;
              if ( (v56 & 0x42) != 0 )
                v54 = v57 | 0x42;
            }
          }
          v58 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v54 & 0xCFFFFFFFFFFFFFFFuLL, v54);
          if ( v54 != v58 )
          {
            do
            {
              v59 = v58;
              v58 = _InterlockedCompareExchange64((volatile signed __int64 *)v86, v58 & 0xCFFFFFFFFFFFFFFFuLL, v58);
            }
            while ( v58 != v59 );
          }
        }
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v48 + 4LL * (((unsigned int)v86 >> 3) & 0x1FF));
      }
    }
  }
  MiUnlockWorkingSetShared(v82, CurrentIrql);
  v60 = (unsigned int)v87;
  v83 = v60;
  result = -(__int64)(unsigned int)v87;
  v62 = a2 - 8LL * (unsigned int)v87;
  v87 = v62;
  if ( (_DWORD)v60 )
  {
    v63 = 0LL;
    v89 = 0LL;
    result = (unsigned int)v60;
    while ( 1 )
    {
      v64 = *(_QWORD *)((char *)v96 + v63);
      if ( v64 == 1 )
        break;
      if ( v64 )
      {
        v68 = *(_QWORD *)((char *)v97 + v63);
        if ( qword_14043B180 && (v68 & 0x10) == 0 )
          v68 &= ~qword_14043B180;
        v69 = v68 >> 16;
        v70 = *(_QWORD *)v69;
        v71 = (signed __int64 *)(*(_QWORD *)v69 + 64LL);
        v72 = ObFastReferenceObject(v71);
        if ( !v72 )
        {
          v73 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v70 + 72));
          v72 = ObFastReferenceObjectLocked(v71);
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v70 + 72));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v73 < 2u )
          {
            v74 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v74->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v74);
          }
          __writecr8(v73);
          v63 = v89;
        }
        v75 = MiStartingOffset((__int64 *)v69, v64, 0xFFFFFFFF);
        if ( !*(_QWORD *)(v72 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v77 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
          v78 = (struct _EX_RUNDOWN_REF *)v77;
          if ( v77 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v77, 4LL) )
              PfSnLogPageFaultCommon((_DWORD)v78, v72, *(_QWORD *)(v72 + 24), v75, v79);
            ExReleaseRundownProtection_0(v78 + 45);
          }
        }
        _m_prefetchw(v71);
        v80 = *v71;
        if ( (v72 ^ (unsigned __int64)*v71) >= 0xF )
        {
LABEL_182:
          ObDereferenceObjectDeferDelete((PVOID)v72);
        }
        else
        {
          while ( 1 )
          {
            v81 = v80;
            v80 = _InterlockedCompareExchange64(v71, v80 + 1, v80);
            if ( v81 == v80 )
              break;
            if ( (v72 ^ (unsigned __int64)v80) >= 0xF )
              goto LABEL_182;
          }
        }
        v62 = v87;
        goto LABEL_184;
      }
LABEL_185:
      v63 += 8LL;
      v62 += 8LL;
      --result;
      v89 = v63;
      v83 = result;
      v87 = v62;
      if ( !result )
        return result;
    }
    v88 = MI_READ_PTE_LOCK_FREE(v62);
    v65 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v88) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v66 = MiLockPageInline(v65);
    MiDecrementShareCount(v65);
    _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v91 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v91);
      while ( *(__int64 *)(v5 + 24) < 0 );
    }
    MiDecrementShareCount(v5);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v66 < 2u )
    {
      v67 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v67->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v67);
    }
    __writecr8(v66);
LABEL_184:
    result = v83;
    goto LABEL_185;
  }
  return result;
}
