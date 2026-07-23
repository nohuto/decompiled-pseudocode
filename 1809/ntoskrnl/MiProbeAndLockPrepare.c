/*
 * XREFs of MiProbeAndLockPrepare @ 0x140040790
 * Callers:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140094920 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140153E74 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  int v8; // r8d
  unsigned __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  __int16 v15; // ax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  int v18; // r15d
  unsigned int *v19; // rsi
  unsigned int v20; // edx
  char *SessionVm; // rdi
  char **v22; // r13
  unsigned __int8 v23; // al
  LONG *v24; // rdi
  unsigned __int8 v25; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v28; // ett
  unsigned __int8 CurrentIrql; // dl
  unsigned int v30; // ecx
  char v31; // al
  unsigned int v33; // edx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  _DWORD *v36; // rcx
  unsigned int v37; // edx
  char *v38; // rax
  int v39; // edx
  char *v40; // rax
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r15
  __int64 v46; // rax
  int v47; // ecx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned int v50; // edi
  char *AnyMultiplexedVm; // rax
  int v52; // eax
  int v53; // eax
  char **v54; // [rsp+60h] [rbp+8h]
  int v55; // [rsp+78h] [rbp+20h] BYREF

  v8 = a6;
  v10 = a3 + a4;
  *(_QWORD *)(a1 + 72) = KeGetCurrentThread();
  v11 = a5 == 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 88) = v8;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = v10;
  if ( !v11 && (v10 > 0x7FFFFFFF0000LL || a3 >= v10) )
  {
    ++dword_14043B8D8;
    return 3221225477LL;
  }
  v12 = *(unsigned int *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = a2 + 48;
  v13 = ((a3 & 0xFFF) + v12 + 4095) >> 12;
  v14 = v10 - 1;
  *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 24) = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFFFLL;
  v16 = *(unsigned __int16 *)(a2 + 10);
  v15 = v16 | 0x80;
  LOWORD(v16) = v16 & 0xFF7F;
  if ( v8 )
    LOWORD(v16) = v15;
  LOWORD(v16) = v16 | 2;
  *(_WORD *)(a2 + 10) = v16;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_QWORD *)a1 >= 0x7FFFFFFF0000uLL )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 184LL);
    *(_QWORD *)(a1 + 80) = v16;
    *(_QWORD *)(a2 + 16) = v16;
    if ( v8 == 3 )
    {
      v42 = MiObtainReferencedVadEx(*(_QWORD *)a1, 0LL, &v55);
      v45 = v42;
      if ( !v42 )
        return (unsigned int)v55;
      if ( (unsigned int)MiVadPureReserve(v42, v43, v44)
        || (v46 = *(unsigned int *)(v45 + 52),
            LODWORD(v46) = v46 & 0x7FFFFFFF,
            (v46 | ((unsigned __int64)*(unsigned __int8 *)(v45 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v47 = *(_DWORD *)(v45 + 48), (v47 & 7) == 1)
        || (v47 & 0x4000) == 0 && (v47 & 7) != 2 )
      {
        MiUnlockAndDereferenceVad((PVOID)v45);
        return 3221225477LL;
      }
      v48 = (*(unsigned int *)(v45 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v45 + 32) << 32)) << 12;
      if ( a3 < v48
        || (v49 = ((*(unsigned int *)(v45 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v45 + 33) << 32)) << 12) | 0xFFF,
            a3 > v49)
        || v14 < v48
        || v14 > v49 )
      {
        MiUnlockAndDereferenceVad((PVOID)v45);
        return 3221225496LL;
      }
      v55 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 80), v13);
      v50 = v55;
      if ( v55 < 0 )
      {
        MiUnlockAndDereferenceVad((PVOID)v45);
        return v50;
      }
      *(_QWORD *)(a1 + 120) = v45;
      *(_QWORD *)(a1 + 112) = v13;
    }
    if ( a7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 928LL), v13);
  }
  v17 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v17 >= 0xFFFF800000000000uLL )
  {
    v16 = ((v17 >> 39) & 0x1FF) - 256;
    v18 = (unsigned __int8)byte_14043CA10[v16];
  }
  else
  {
    v18 = 0;
  }
  v19 = (unsigned int *)(a1 + 64);
  if ( v17 >= 0x7FFFFFFF0000LL )
  {
    if ( v18 == 1 )
    {
      *v19 = *v19 & 0xFFFFFFF0 | 8;
      v22 = (char **)(a1 + 96);
      SessionVm = (char *)MiGetSessionVm(v16);
      *(_QWORD *)(a1 + 96) = SessionVm;
      goto LABEL_16;
    }
    if ( (unsigned int)(v18 - 6) > 1 )
    {
      v22 = (char **)(a1 + 96);
      v54 = (char **)(a1 + 96);
      if ( v18 == 8 )
      {
        SessionVm = MiGetAnyMultiplexedVm(0);
        v33 = *v19 & 0xFFFFFFF2;
        *v22 = SessionVm;
        v20 = v33 | 2;
        *v19 = v20;
        goto LABEL_17;
      }
      v54 = (char **)(a1 + 96);
      if ( v18 == 5 )
      {
        SessionVm = MiGetAnyMultiplexedVm(5);
        v37 = *v19 & 0xFFFFFFF4;
        *v22 = SessionVm;
        v20 = v37 | 4;
        *v19 = v20;
        goto LABEL_17;
      }
      v54 = (char **)(a1 + 96);
      if ( v18 == 13 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
        *v19 &= 0xFFFFFFF0;
        SessionVm = AnyMultiplexedVm;
        v20 = *v19;
        *v22 = AnyMultiplexedVm;
        goto LABEL_17;
      }
      v54 = (char **)(a1 + 96);
      if ( v18 == 12 )
      {
        SessionVm = (char *)&unk_14043C250;
        v20 = *v19 & 0xFFFFFFF0 | 6;
        *v22 = (char *)&unk_14043C250;
        *v19 = v20;
        goto LABEL_17;
      }
      v54 = (char **)(a1 + 96);
      if ( v18 == 15 )
      {
        v38 = MiGetAnyMultiplexedVm(4);
        *v22 = v38;
        v20 = v39 & 0xFFFFFFF0 | 7;
        SessionVm = v38;
        *v19 = v20;
        goto LABEL_17;
      }
      v40 = MiGetAnyMultiplexedVm(3);
      *v22 = v40;
      v20 = v41 & 0xFFFFFFF0 | 5;
      SessionVm = v40;
      goto LABEL_15;
    }
    SessionVm = (char *)&unk_14043C360;
    v20 = *v19 & 0xFFFFFFF0 | 3;
  }
  else
  {
    v20 = *v19 & 0xFFFFFFF0 | 1;
    SessionVm = (char *)(*(_QWORD *)(a1 + 80) + 1280LL);
  }
  v22 = (char **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = SessionVm;
LABEL_15:
  *v19 = v20;
LABEL_16:
  v54 = v22;
LABEL_17:
  *v19 = v20 & 0xFFFFFFCF;
  v23 = SessionVm[184] & 7;
  if ( v23 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v23 == 2 )
      v24 = &dword_14043C7C0;
    else
      v24 = (LONG *)(SessionVm + 192);
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v24, v25);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v52 = SchedulerAssist[5];
          SchedulerAssist[5] = v52 + 1;
          if ( v52 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v24);
      v28 = *v24 & 0x7FFFFFFF;
      if ( v28 != _InterlockedCompareExchange(v24, v28 + 1, v28) )
      {
        v36 = CurrentPrcb->SchedulerAssist;
        if ( v36 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v53 = v36[5] - 1;
            v36[5] = v53;
            if ( !v53 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v24, v25);
      }
      v22 = v54;
    }
    if ( v24[1] )
      _InterlockedExchange(v24 + 1, 0);
    CurrentIrql = v25;
  }
  v30 = *v19;
  v31 = *v19 & 0xF;
  *(_BYTE *)(a1 + 68) = CurrentIrql;
  if ( v31 == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 80) + 912LL) )
    *v19 = v30 | 0x10;
  if ( v18 == 8 )
  {
    v34 = *(_QWORD *)(MiGetSystemCacheReverseMap(v17) + 24);
    v35 = v34 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v34 & 1) == 0 )
      v35 = v34;
    *v22 = (char *)(*(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v35 + 60LL) & 0x3FF)) + 7424LL);
  }
  return 0LL;
}
