/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x140100A20
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x140100A00 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x14016D070 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14003D700 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x14003DD10 (PsBoostThreadIoEx.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoQoS @ 0x140101064 (PsBoostThreadIoQoS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x140331530 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

__int64 __fastcall ExpSetResourceOwnerPointerEx(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a3)
{
  char v3; // r15
  bool v6; // bp
  ULONG_PTR CurrentThread; // rsi
  volatile __int64 *v8; // rbx
  unsigned int v9; // r14d
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rbx
  unsigned __int64 v16; // rcx
  ULONG_PTR v17; // rdx
  __int64 v18; // r13
  ULONG_PTR v19; // r14
  ULONG_PTR v20; // r10
  ULONG_PTR v21; // r9
  unsigned int v22; // ecx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 *v25; // r9
  __int64 v26; // rax
  int v27; // r15d
  ULONG_PTR v28; // rax
  volatile signed __int64 *v29; // r14
  signed __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int8 v35; // bl
  __int64 result; // rax
  int v37; // ecx
  int v38; // eax
  __int64 v39; // r13
  __int64 *v40; // r11
  __int64 *v41; // r10
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  struct _KPRCB *v48; // rcx
  __int64 v49; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v50; // [rsp+38h] [rbp-40h]
  __int64 v51; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v3 = a3;
  v51 = 0LL;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v8 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v50 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v49 = 0LL;
  v9 = 65792;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LOBYTE(v51) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v44 = SchedulerAssist[5];
      SchedulerAssist[5] = v44 + 1;
      if ( v44 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v49, v8);
  }
  else
  {
    v13 = (_QWORD *)_InterlockedExchange64(v8, (__int64)&v49);
    if ( v13 )
      KxWaitForLockOwnerShip((__int64)&v49, v13);
  }
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    v14 = *(_QWORD *)(BugCheckParameter1 + 48);
    v15 = (__int64 *)(BugCheckParameter1 + 48);
    if ( v14 == BugCheckParameter4 )
    {
      v19 = BugCheckParameter1 + 48;
    }
    else
    {
      v16 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
      v17 = BugCheckParameter1 + 48;
      if ( v14 )
        v17 = 0LL;
      v18 = *(_QWORD *)(BugCheckParameter1 + 16);
      a3 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v18 && (v19 = v18 + 16, v16 < a3) )
      {
        while ( 1 )
        {
          v20 = v17;
          v21 = v17;
          if ( *(_QWORD *)v19 == BugCheckParameter4 )
            break;
          if ( *(_QWORD *)v19 )
          {
            if ( ++v16 == a3 )
              goto LABEL_16;
          }
          else
          {
            v17 = v19;
            if ( v21 )
              v17 = v20;
          }
          v19 += 16LL;
          if ( v19 == v18 + 16LL * *(unsigned int *)(v18 + 8) )
            goto LABEL_16;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v19 - v18) >> 4;
      }
      else
      {
LABEL_16:
        v19 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v22 = 0;
    else
      v22 = *(unsigned __int8 *)(CurrentThread + 649);
    v23 = *v15;
    if ( *v15 != CurrentThread )
    {
      v24 = 0LL;
      if ( v23 )
        v15 = 0LL;
      LOBYTE(v24) = v23 != 0;
      v25 = v15;
      if ( !v22
        || (v26 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v22 >= *(_DWORD *)(v26 + 8)
        || (v15 = (__int64 *)(v26 + 16LL * v22), *v15 != CurrentThread) )
      {
        v39 = *(_QWORD *)(BugCheckParameter1 + 16);
        a3 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !v39 || (v15 = (__int64 *)(v39 + 16), v24 >= a3) )
LABEL_98:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 4uLL);
        while ( 1 )
        {
          v40 = v25;
          v41 = v25;
          if ( *v15 == CurrentThread )
            break;
          if ( *v15 )
          {
            if ( ++v24 == a3 )
              goto LABEL_98;
          }
          else
          {
            v25 = v15;
            if ( v41 )
              v25 = v40;
          }
          v15 += 2;
          if ( v15 == (__int64 *)(v39 + 16LL * *(unsigned int *)(v39 + 8)) )
            goto LABEL_98;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v15 - v39) >> 4;
      }
    }
    v27 = v3 & 1;
    if ( !v19 )
    {
      if ( v27 )
      {
        v28 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v29 = (volatile signed __int64 *)(v28 - 48);
        if ( ObpTraceFlags )
          ObpPushStackInfo(v28 - 48);
        v30 = _InterlockedIncrement64(v29);
        if ( v30 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v29 + 6), 0x10uLL, v30);
        *((_DWORD *)v15 + 2) |= 2u;
      }
      else
      {
        v42 = *((_DWORD *)v15 + 2);
        if ( (v42 & 1) != 0 )
        {
          PsBoostThreadIoEx(*v15, 1, 0, 0LL);
          *((_DWORD *)v15 + 2) &= ~1u;
          v42 = *((_DWORD *)v15 + 2);
        }
        if ( (v42 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*v15, 1LL);
          *((_DWORD *)v15 + 2) &= ~4u;
        }
      }
      *v15 = BugCheckParameter4;
      v31 = 25560;
      goto LABEL_34;
    }
    if ( v27 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      v38 = *((_DWORD *)v15 + 2);
      if ( (v38 & 1) != 0 )
      {
        v45 = *(_DWORD *)(v19 + 8);
        if ( (v45 & 1) != 0 )
          PsBoostThreadIoEx(*v15, 1, 0, 0LL);
        else
          *(_DWORD *)(v19 + 8) = v45 | 1;
        *((_DWORD *)v15 + 2) &= ~1u;
        v38 = *((_DWORD *)v15 + 2);
      }
      if ( (v38 & 4) != 0 )
      {
        v46 = *(_DWORD *)(v19 + 8);
        if ( (v46 & 4) != 0 )
          PsBoostThreadIoQoS(*v15, 1LL);
        else
          *(_DWORD *)(v19 + 8) = v46 | 4;
        *((_DWORD *)v15 + 2) &= ~4u;
      }
      if ( (*(_DWORD *)(v19 + 8) & 2) == 0 )
      {
        ObfReferenceObjectWithTag((PVOID)*v15, 0x746C6644u);
        *(_DWORD *)(v19 + 8) |= 2u;
      }
    }
    else
    {
      v37 = *((_DWORD *)v15 + 2);
      if ( (v37 & 1) != 0 )
      {
        PsBoostThreadIoEx(*v15, 1, 0, 0LL);
        *((_DWORD *)v15 + 2) &= ~1u;
        v37 = *((_DWORD *)v15 + 2);
      }
      if ( (v37 & 4) == 0 )
        goto LABEL_47;
      PsBoostThreadIoQoS(*v15, 1LL);
      *((_DWORD *)v15 + 2) &= ~4u;
    }
    v37 = *((_DWORD *)v15 + 2);
LABEL_47:
    *(_DWORD *)(v19 + 8) += v37 & 0xFFFFFFF8;
    v31 = 25564;
    *((_DWORD *)v15 + 2) &= 7u;
    *v15 = 0LL;
    --*(_DWORD *)(BugCheckParameter1 + 64);
LABEL_34:
    __incgsdword(v31);
    if ( v6 )
      v9 = 65856;
    else
      v9 = 65792;
    goto LABEL_36;
  }
  if ( ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1) && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
  if ( (v3 & 1) != 0 )
  {
    if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
      KeBugCheckEx(0x132u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 16), CurrentThread, BugCheckParameter4);
    ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
    *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
  }
  else
  {
    v43 = *(_DWORD *)(BugCheckParameter1 + 56);
    if ( (v43 & 1) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0, 0LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      v43 = *(_DWORD *)(BugCheckParameter1 + 56);
    }
    if ( (v43 & 4) != 0 )
    {
      PsBoostThreadIoQoS(*(_QWORD *)(BugCheckParameter1 + 48), 1LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
  __incgsdword(0x63D4u);
  if ( v6 )
    v9 = 65824;
LABEL_36:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v49, retaddr);
    goto LABEL_39;
  }
  _m_prefetchw(&v49);
  v32 = v49;
  if ( v49 )
    goto LABEL_68;
  if ( (__int64 *)_InterlockedCompareExchange64(v50, 0LL, (signed __int64)&v49) != &v49 )
  {
    v32 = KxWaitForLockChainValid(&v49);
LABEL_68:
    v49 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v32 + 8), 1uLL);
  }
LABEL_39:
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v47 = v34[5] - 1;
      v34[5] = v47;
      if ( !v47 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  v35 = v51;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v51 < 2u )
  {
    v48 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v48->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v48);
  }
  result = v35;
  __writecr8(v35);
  if ( v6 )
    return PerfLogExecutiveResourceSetOwnerPointer(v9, BugCheckParameter1, a3);
  return result;
}
