/*
 * XREFs of MiRemoveWsle @ 0x14004C540
 * Callers:
 *     MiTerminateWsle @ 0x14004B140 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiTerminateWsleCluster @ 0x14004E000 (MiTerminateWsleCluster.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLookupDataTableEntry @ 0x1400F78E8 (MiLookupDataTableEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x1402BF660 (MiLogRemoveWsleEvent.c)
 */

signed __int64 __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  volatile signed __int64 *v10; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // r8
  char v15; // cl
  char v16; // cl
  int v17; // r12d
  unsigned __int8 v18; // di
  int v19; // esi
  __int64 v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned __int64 *v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int8 v25; // al
  unsigned __int64 v26; // rcx
  signed __int64 result; // rax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  _QWORD *v32; // r13
  __int64 *v33; // rdi
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r10
  __int64 v36; // r9
  volatile signed __int64 *v37; // rdx
  signed __int64 v38; // rtt
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 **v42; // rax
  __int64 **v43; // r13
  __int64 **v44; // rax
  int v45; // eax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 *v49; // rax
  signed __int64 v50; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int64 *v51; // [rsp+28h] [rbp-48h]
  __int64 v52; // [rsp+30h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  __int64 v54; // [rsp+50h] [rbp-20h]
  __int64 v55; // [rsp+58h] [rbp-18h]
  __int64 v56; // [rsp+60h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v58; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v59; // [rsp+B8h] [rbp+48h]

  v52 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v10 = (volatile signed __int64 *)&unk_140467240;
  else
    v10 = (volatile signed __int64 *)(a1 + 256);
  v51 = v10;
  v50 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v45 = SchedulerAssist[5];
      SchedulerAssist[5] = v45 + 1;
      if ( v45 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v50, v10);
  }
  else
  {
    v13 = (_QWORD *)_InterlockedExchange64(v10, (__int64)&v50);
    if ( v13 )
      KxWaitForLockOwnerShip((__int64)&v50, v13);
  }
  v14 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( a6 )
  {
    *(_QWORD *)(a1 + 144) -= a3;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) -= a3;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase
      && (a2 >= (unsigned __int64)PsNtosImageBase && a2 < PsNtosImageEnd
       || a2 >= (unsigned __int64)PsHalImageBase && a2 < PsHalImageEnd) )
    {
      LODWORD(xmmword_140464940) = xmmword_140464940 - a3;
    }
    else if ( (unsigned int)MiGetSystemRegionType(a2) == 12 )
    {
      v40 = MiLookupDataTableEntry((__int64)(((v39 & (a2 >> 9)) - 0x98000000000LL) << 25) >> 16, 2LL);
      v14 = 0xFFFFF6FFFFFFFFFFuLL;
      if ( v40 )
        DWORD1(xmmword_140464940) -= a3;
    }
  }
  v15 = *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 136) -= a3;
  v16 = v15 & 7;
  v17 = 1;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > v14 )
  {
    *(_QWORD *)(a1 + 120) -= a3;
    v18 = a4 & 0xF;
    v19 = 1;
    if ( v18 == 8 )
      goto LABEL_18;
  }
  else
  {
    v19 = 0;
    if ( v16 )
      goto LABEL_18;
    v18 = a4 & 0xF;
  }
  v20 = -a3;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > v14 )
  {
    v21 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v22 = *(_QWORD *)v21;
    if ( v21 >= 0xFFFFF6FB7DBED000uLL
      && v21 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v22 & 1) != 0
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v47 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v21 >> 3) & 0x1FF));
        v48 = v22 | 0x20;
        if ( (v47 & 0x20) == 0 )
          v48 = v22;
        v22 = v48;
        if ( (v47 & 0x42) != 0 )
          v22 = v48 | 0x42;
      }
    }
    v58 = v22;
    v23 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v58) >> 12) & 0xFFFFFFFFFLL)
                             - 0x58000000000LL);
    v24 = *v23;
    v25 = (*v23 >> 14) & 7;
    if ( ((*v23 >> 4) & 0x3FF) != 0 )
    {
      if ( v18 == v25 )
      {
        v26 = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(16 * (v20 + ((*v23 >> 4) & 0x3FF)))) & 0x3FF0;
LABEL_16:
        *v23 = v26;
        goto LABEL_17;
      }
      if ( v18 > v25 )
      {
        v26 = v24 & 0xFFFFFFFFFFFE000FuLL | (16 * (v20 & 0x3FF | ((unsigned __int64)(v18 & 7) << 10)));
        goto LABEL_16;
      }
    }
  }
LABEL_17:
  *(_QWORD *)(a1 + 8LL * v18 + 40) += v20;
  if ( v18 != 7 )
    goto LABEL_18;
  v30 = *(unsigned __int16 *)(a1 + 174);
  v31 = *(_QWORD *)(a1 + 96);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v32 = *(_QWORD **)(qword_140466188 + 8 * v30);
  v59 = v32[975];
  if ( v31 < *(_QWORD *)(v59 + 64) )
  {
    if ( v20 > 0 )
      goto LABEL_18;
    v33 = (__int64 *)(a1 + 24);
    if ( !*(_QWORD *)(a1 + 24) || (__int64 *)v32[977] == v33 )
      goto LABEL_18;
    v17 = 2;
LABEL_56:
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &SpinLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
    if ( *(_BYTE *)(v59 + 53) || (v41 = *v33) == 0 )
    {
      *(_BYTE *)(v59 + 54) = 1;
    }
    else
    {
      v42 = (__int64 **)v33[1];
      if ( *(__int64 **)(v41 + 8) != v33 || *v42 != v33 )
        goto LABEL_97;
      v43 = (__int64 **)(v32 + 976);
      *v42 = (__int64 *)v41;
      *(_QWORD *)(v41 + 8) = v42;
      if ( v17 != 1 )
      {
        v44 = (__int64 **)v43[1];
        if ( *v44 == (__int64 *)v43 )
        {
          *v33 = (__int64)v43;
          v33[1] = (__int64)v44;
          *v44 = v33;
          v43[1] = v33;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          goto LABEL_18;
        }
LABEL_97:
        __fastfail(3u);
      }
      v49 = *v43;
      if ( (__int64 **)(*v43)[1] != v43 )
        goto LABEL_97;
      *v33 = (__int64)v49;
      v33[1] = (__int64)v43;
      v49[1] = (__int64)v33;
      *v43 = v33;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_18;
  }
  if ( v20 >= 0 )
  {
    v33 = (__int64 *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( (__int64 *)v32[976] != v33 )
        goto LABEL_56;
    }
  }
LABEL_18:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_140467288 -= a3;
    if ( v19 == 1 )
      qword_140467290 -= a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v50, retaddr);
    goto LABEL_22;
  }
  _m_prefetchw(&v50);
  result = v50;
  if ( v50 )
    goto LABEL_76;
  result = _InterlockedCompareExchange64(v51, 0LL, (signed __int64)&v50);
  if ( (signed __int64 *)result != &v50 )
  {
    result = KxWaitForLockChainValid(&v50);
LABEL_76:
    v50 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_22:
  v28 = KeGetCurrentPrcb();
  v29 = v28->SchedulerAssist;
  if ( v29 )
  {
    if ( v28->NestingLevel <= 1u )
    {
      result = (unsigned int)(v29[5] - 1);
      v29[5] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v28);
    }
  }
  if ( v19 == 1 )
  {
    if ( a5 == 9
      || a5 == 10
      && (result = 0xFFFFF68000000000uLL, (*(_BYTE *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0) )
    {
      if ( a3 )
      {
        v34 = a2;
        v35 = (unsigned __int64)(unsigned __int8)a5 << 56;
        v36 = a3;
        do
        {
          v37 = (volatile signed __int64 *)(((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          result = *v37;
          do
          {
            v38 = result;
            result = _InterlockedCompareExchange64(v37, v35 | result & 0x80FFFFFFFFFFFFFFuLL, result);
          }
          while ( v38 != result );
          v34 += 4096LL;
          --v36;
        }
        while ( v36 );
      }
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 && a3 )
  {
    do
    {
      result = MiLogRemoveWsleEvent(a2, *(_BYTE *)(a1 + 184) & 7);
      a2 += 4096LL;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
