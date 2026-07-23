/*
 * XREFs of MiDeletePagablePteRange @ 0x140067FD0
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140026134 (MiDeleteVirtualAddresses.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiDeleteSessionAddressSpace @ 0x1401543C0 (MiDeleteSessionAddressSpace.c)
 *     MiDeleteSessionPdes @ 0x140158E60 (MiDeleteSessionPdes.c)
 *     MiDeleteVadBitmap @ 0x140609CFC (MiDeleteVadBitmap.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117C10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140119050 (ExAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiFreePhysicalPageChain @ 0x1402B07AC (MiFreePhysicalPageChain.c)
 *     MiFreeLargePages @ 0x1402C57BC (MiFreeLargePages.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __fastcall MiDeletePagablePteRange(
        __int64 a1,
        unsigned __int8 CurrentIrql,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7)
{
  char v11; // dl
  int v12; // esi
  unsigned __int8 v13; // dl
  int v14; // eax
  int v15; // eax
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int8 v17; // al
  LONG *v18; // rbx
  unsigned __int8 v19; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v22; // ett
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  LONG *SharedVm; // rbx
  KIRQL v34; // al
  LONG *v35; // rax
  LONG *v36; // rax
  __int64 v37; // rax
  struct _KTHREAD *v38; // [rsp+28h] [rbp-D8h]
  _QWORD v39[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v40[22]; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+120h] [rbp+20h] BYREF
  __int16 v42; // [rsp+124h] [rbp+24h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  __int64 v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+138h] [rbp+38h]

  memset(v39, 0, sizeof(v39));
  memset(v40, 0, sizeof(v40));
  v11 = *(_BYTE *)(a1 + 184);
  v12 = 0;
  v39[3] = a7;
  LODWORD(v39[4]) = a6;
  v13 = v11 & 7;
  if ( v13 )
  {
    v14 = 2;
    if ( v13 >= 2u )
      v14 = 0;
  }
  else
  {
    v14 = 1;
  }
  v41 = v14;
  v40[2] = &v41;
  v43 = 20LL;
  v42 = 0;
  v44 = 0LL;
  v45 = 0LL;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    LOBYTE(v39[2]) = 1;
  BYTE2(v40[1]) = a5;
  v40[21] = v39;
  v15 = 39;
  LODWORD(v40[0]) = 39;
  if ( (a6 & 0x100) != 0 )
  {
    v15 = 1059;
    LODWORD(v40[0]) = 1059;
  }
  if ( (a6 & 0x80) != 0 )
  {
    v15 |= 0x800u;
    LODWORD(v40[0]) = v15;
  }
  v40[4] = a3;
  v40[19] = &MiDeleteVa;
  v40[20] = MiDeleteVaTail;
  CurrentThread = 0LL;
  v40[5] = a4;
  v40[3] = a1;
  v38 = 0LL;
  if ( (a6 & 0x10) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v38 = CurrentThread;
    v30 = *(_QWORD *)(a7 + 32);
    --CurrentThread->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive(v30 + 56, 0LL);
    v15 = v40[0];
  }
  if ( CurrentIrql == 17 )
  {
    if ( (v15 & 4) != 0 )
    {
      v17 = *(_BYTE *)(a1 + 184) & 7;
      if ( v17 >= 6u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
      else
      {
        if ( v17 == 2 )
          v18 = &dword_14043C7C0;
        else
          v18 = (LONG *)(a1 + 192);
        v19 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v18, v19);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v31 = SchedulerAssist[5];
              SchedulerAssist[5] = v31 + 1;
              if ( v31 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          _m_prefetchw(v18);
          v22 = *v18 & 0x7FFFFFFF;
          if ( v22 != _InterlockedCompareExchange(v18, v22 + 1, v22) )
          {
            v29 = CurrentPrcb->SchedulerAssist;
            if ( v29 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v32 = v29[5] - 1;
                v29[5] = v32;
                if ( !v32 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            ExpWaitForSpinLockSharedAndAcquire(v18, v19);
          }
          CurrentThread = v38;
        }
        if ( v18[1] )
          _InterlockedExchange(v18 + 1, 0);
        CurrentIrql = v19;
      }
    }
    else
    {
      SharedVm = MiGetSharedVm(a1);
      v34 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      CurrentIrql = v34;
    }
    v23 = v40[0];
  }
  else
  {
    v23 = v15 & 0xFFFFFFFD;
    v12 = 1;
    LODWORD(v40[0]) = v23;
  }
  BYTE4(v40[0]) = CurrentIrql;
  if ( (a6 & 0x80) != 0 )
  {
    if ( (a6 & 0x100) == 0 )
      v23 = v23 & 0xFFFFEFFB | 0x1000;
    LODWORD(v40[0]) = v23 & 0xFFFFFFFD;
    v35 = MiGetSharedVm(a1);
    ExAcquireSpinLockExclusiveAtDpcLevel(v35 + 10);
  }
  MiWalkPageTables(v40);
  if ( (a6 & 0x80) == 0
    || (v36 = MiGetSharedVm(a1), ExReleaseSpinLockExclusiveFromDpcLevel(v36 + 10), (a6 & 0x100) != 0) )
  {
    v26 = v40[0];
  }
  else
  {
    v26 = LOBYTE(v40[0]) | 4;
    LODWORD(v40[0]) |= 4u;
  }
  if ( !v12 )
  {
    if ( (v26 & 4) != 0 )
      MiUnlockWorkingSetShared(a1, CurrentIrql);
    else
      MiUnlockWorkingSetExclusive(a1, CurrentIrql, v24, v25);
  }
  if ( v39[6] )
  {
    v37 = MiFreeLargePages();
    v27 = a7;
    *(_QWORD *)(a7 + 8) += v37;
  }
  else
  {
    v27 = a7;
  }
  v28 = *(_QWORD *)(v27 + 32);
  if ( v28 )
  {
    if ( v39[7] )
      MiFreePhysicalPageChain(v28, v39[7], 1LL);
    v27 = a7;
  }
  if ( CurrentThread )
  {
    ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(v27 + 32) + 56LL, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
}
