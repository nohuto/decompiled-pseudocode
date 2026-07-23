/*
 * XREFs of MiZeroPageThread @ 0x140179300
 * Callers:
 *     <none>
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MiUnlinkNodeLargePage @ 0x140064280 (MiUnlinkNodeLargePage.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeQueryNodeActiveAffinity @ 0x1400E3CC0 (KeQueryNodeActiveAffinity.c)
 *     MiMapPagesToZero @ 0x1400F9160 (MiMapPagesToZero.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x1401280A0 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CF4C (KeSetIdealProcessorThreadEx.c)
 *     MiInitializeColorTable @ 0x14016A5CC (MiInitializeColorTable.c)
 *     MiDeleteZeroThreadContext @ 0x1401851F4 (MiDeleteZeroThreadContext.c)
 *     MiGetHugePageToZero @ 0x1401855A4 (MiGetHugePageToZero.c)
 *     MiZeroBootLargePages @ 0x140192694 (MiZeroBootLargePages.c)
 *     MiSetZeroPageThreadPriority @ 0x14019319C (MiSetZeroPageThreadPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPageThread(ULONG_PTR *a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  unsigned int v3; // r15d
  _DWORD *v4; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned int v16; // r13d
  unsigned int v17; // eax
  __int64 v18; // rdx
  ULONG_PTR v19; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned int v21; // esi
  __int64 *v22; // rax
  __int64 v23; // rdx
  unsigned int j; // ecx
  volatile signed __int32 *v25; // rbx
  struct _KTHREAD *v26; // r14
  bool v27; // zf
  struct _KPRCB *v28; // rsi
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  bool v31; // r8
  _QWORD *v32; // rdx
  __int64 *v33; // rcx
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  int v36; // ebx
  struct _KTHREAD *v37; // rbx
  unsigned int FirstSetLeftGroupAffinity; // eax
  __int64 v39; // rcx
  int HugePageToZero; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  int v42; // eax
  _DWORD *v43; // rcx
  int v44; // eax
  unsigned __int32 v45; // eax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  int v48; // eax
  struct _KPRCB *v49; // rcx
  struct _KTHREAD *v50; // rbx
  unsigned __int64 v51; // [rsp+40h] [rbp-78h]
  __int64 v52; // [rsp+48h] [rbp-70h]
  __int64 v53; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *i; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *v55; // [rsp+60h] [rbp-58h]
  struct _GROUP_AFFINITY Affinity; // [rsp+68h] [rbp-50h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v59; // [rsp+C8h] [rbp+10h]
  int v60; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v61; // [rsp+D8h] [rbp+20h]

  v1 = (__int64)a1;
  if ( a1 == &MiSystemPartition )
    MiZeroBootLargePages();
  v2 = *(_QWORD *)(v1 + 6624);
  v3 = 0;
  v51 = v2;
  v59 = 0;
  v4 = (_DWORD *)(v2 + 232);
  *(_DWORD *)(v2 + 252) = -1;
  MiInitializeColorTable((_DWORD *)(v2 + 232), 0);
  CurrentThread = KeGetCurrentThread();
  v53 = 0LL;
  v55 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v61 = MiSetZeroPageThreadPriority(v1, CurrentThread, 0LL);
  while ( 1 )
  {
    v6 = MiWaitForFreePagesToZero(v1, &v53, v3);
    if ( v6 == -1 )
      break;
    if ( v3 != v6 )
    {
      v59 = v6;
      MiInitializeColorTable(v4, v6);
    }
    v7 = 0LL;
    v8 = 0;
    v52 = 0LL;
    while ( 2 )
    {
      if ( !v8 && *(_BYTE *)(v2 + 210) )
      {
        HugePageToZero = MiGetHugePageToZero(v1, v2);
        goto LABEL_19;
      }
      v9 = (unsigned int)(v4[3] >> byte_14043B109);
      *(_QWORD *)(v2 + 32) = 0LL;
      if ( v8 < 3 )
      {
        v10 = MiUnlinkNodeLargePage(v1, v8, v9, 4LL, (__int64)v4, 0, v2);
        v11 = MiLargePageSizes[v7];
        v12 = v10;
        goto LABEL_11;
      }
      SchedulerAssist = *(volatile signed __int32 **)(v1 + 2120);
      v16 = *(_DWORD *)(v2 + 244);
      v17 = v16;
      for ( i = SchedulerAssist; ; SchedulerAssist = i )
      {
        v18 = v17;
        v19 = *(_QWORD *)&SchedulerAssist[10 * v17 + 4];
        if ( v19 == 0xFFFFFFFFFLL )
        {
          v17 = v17 & ~dword_14043B100 | dword_14043B100 & (v17 + 1);
          *(_DWORD *)(v2 + 244) = v17;
          goto LABEL_24;
        }
        v12 = 48 * v19 - 0x58000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        {
          SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
          _InterlockedOr(SchedulerAssist, 0x10000u);
        }
        v21 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(SchedulerAssist, v18, v9) )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v12 + 24) < 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
        }
        if ( v19 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
        {
          v9 = *(unsigned __int8 *)(v12 + 34);
          if ( (v9 & 7) == 1 )
            break;
        }
LABEL_63:
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        v2 = v51;
        v17 = *(_DWORD *)(v51 + 244);
LABEL_24:
        if ( v17 == v16 )
          goto LABEL_65;
      }
      v22 = MiLargePageContainingFrames;
      v23 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL;
      for ( j = 0; j < 3; ++j )
      {
        if ( v23 == *v22 )
          goto LABEL_63;
        ++v22;
      }
      if ( *(_WORD *)(v12 + 32) )
        KeBugCheckEx(0x4Eu, 0x8DuLL, v19, *(unsigned int *)(v12 + 32), *(_QWORD *)(v12 + 8));
      if ( (v9 & 8) != 0 )
      {
        v2 = v51;
        v36 = 0;
        goto LABEL_49;
      }
      v25 = &dword_14043B798;
      *(_QWORD *)(v51 + 24) = v12;
      v26 = KeGetCurrentThread();
      *(_QWORD *)(v51 + 56) = v26;
      *(_BYTE *)(v12 + 34) |= 8u;
      *(_QWORD *)(v12 + 16) = v51;
      v27 = *(_BYTE *)(v51 + 71) == 0;
      *(_QWORD *)(v51 + 32) = 0LL;
      if ( v27 )
        v25 = &dword_14043B7A8;
      *(_WORD *)(v51 + 69) = 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v23) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25, v23);
      }
      else
      {
        v28 = KeGetCurrentPrcb();
        v60 = 0;
        v29 = v28->SchedulerAssist;
        if ( v29 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v42 = v29[5];
            v29[5] = v42 + 1;
            if ( v42 == -1 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        if ( _interlockedbittestandset(v25, 0x1Fu) )
        {
          v43 = v28->SchedulerAssist;
          if ( v43 )
          {
            if ( v28->NestingLevel <= 1u )
            {
              v44 = v43[5] - 1;
              v43[5] = v44;
              if ( !v44 )
                KiRemoveSystemWorkPriorityKick(v28);
            }
          }
          v60 = ExpWaitForSpinLockExclusiveAndAcquire(v25, 0xFFu);
        }
        v30 = *(unsigned int *)v25;
        if ( (*v25 & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v30 & 0x40000000) == 0 )
            {
              v45 = _InterlockedCompareExchange(v25, v30 | 0x40000000, v30);
              v27 = (_DWORD)v30 == v45;
              v30 = v45;
              if ( !v27 )
                continue;
            }
            KeYieldProcessorEx(&v60, v30, v9);
            v30 = *(unsigned int *)v25;
          }
          while ( (v30 & 0xBFFFFFFF) != 0x80000000 );
        }
      }
      v31 = 0;
      if ( *(_BYTE *)(v51 + 71) )
      {
        v32 = (_QWORD *)qword_14043B7A0;
        if ( qword_14043B7A0 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)v26 >= v32[7] )
            {
              v47 = (_QWORD *)v32[1];
              if ( !v47 )
              {
                v31 = 1;
                break;
              }
            }
            else
            {
              v47 = (_QWORD *)*v32;
              if ( !*v32 )
              {
                v31 = 0;
                break;
              }
            }
            v32 = v47;
          }
        }
        v33 = &qword_14043B7A0;
        v2 = v51;
        goto LABEL_45;
      }
      v32 = (_QWORD *)qword_14043B7B0;
      v2 = v51;
      if ( !qword_14043B7B0 )
        goto LABEL_44;
      while ( 2 )
      {
        if ( v51 < (unsigned __int64)v32 )
        {
          v46 = (_QWORD *)*v32;
          if ( !*v32 )
          {
            v31 = 0;
            goto LABEL_44;
          }
          goto LABEL_96;
        }
        v46 = (_QWORD *)v32[1];
        if ( v46 )
        {
LABEL_96:
          v32 = v46;
          continue;
        }
        break;
      }
      v31 = 1;
LABEL_44:
      v33 = &qword_14043B7B0;
LABEL_45:
      RtlAvlInsertNodeEx((unsigned __int64 *)v33, (unsigned __int64)v32, v31, (_QWORD *)v2);
      *(_BYTE *)(v2 + 68) = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v25, retaddr);
      else
        *v25 = 0;
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      if ( v35 )
      {
        if ( v34->NestingLevel <= 1u )
        {
          v48 = v35[5] - 1;
          v35[5] = v48;
          if ( !v48 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      v36 = 1;
LABEL_49:
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v49 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v49);
      }
      __writecr8(CurrentIrql);
      if ( !v36 )
LABEL_65:
        v12 = 0LL;
      v7 = v52;
      v11 = 1LL;
LABEL_11:
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 40) >> 58;
        if ( *(_DWORD *)(v2 + 252) != (_DWORD)v13 )
        {
          *(_DWORD *)(v2 + 252) = v13;
          KeQueryNodeActiveAffinity(v13, &Affinity, 0LL);
          if ( Affinity.Mask )
          {
            v37 = KeGetCurrentThread();
            FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity((__int64)&Affinity);
            KeSetIdealProcessorThreadEx((__int64)v37, FirstSetLeftGroupAffinity, 0LL);
          }
        }
        v14 = (((unsigned __int64)MiGetUltraMapping((unsigned __int64 *)(v2 + 32LL * v8 + 80), v8, v11, 0) >> 9) & 0x7FFFFFFFF8LL)
            - 0x98000000000LL;
        if ( v8 <= 1 )
        {
          v39 = 2 - v8;
          do
          {
            v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v39;
          }
          while ( v39 );
        }
        HugePageToZero = MiMapPagesToZero(v2, v14, v12, v8);
        v7 = v52;
        v4 = (_DWORD *)(v2 + 232);
        v1 = (__int64)a1;
LABEL_19:
        if ( !HugePageToZero )
          goto LABEL_12;
        v3 = v59;
        MiZeroPage((_QWORD *)v2, v1);
      }
      else
      {
LABEL_12:
        v1 = (__int64)a1;
        v4 = (_DWORD *)(v2 + 232);
        ++v7;
        ++v8;
        v52 = v7;
        if ( v8 <= 3 )
          continue;
        v3 = v59;
      }
      break;
    }
  }
  v50 = v55;
  MiSetZeroPageThreadPriority(v1, v55, v61);
  *((_DWORD *)&v50[1].SwapListEntry + 3) &= ~0x400u;
  MiDeleteZeroThreadContext(v2);
  ExFreePoolWithTag((PVOID)v2, 0);
  *(_QWORD *)(v1 + 6624) = 0LL;
}
