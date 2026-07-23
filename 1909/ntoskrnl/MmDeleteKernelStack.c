/*
 * XREFs of MmDeleteKernelStack @ 0x1400A4B30
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400A1930 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PspDeleteKernelStack @ 0x140130670 (PspDeleteKernelStack.c)
 *     KeInitThread @ 0x1405952E0 (KeInitThread.c)
 *     PspInsertThread @ 0x1405E9524 (PspInsertThread.c)
 *     KeUserModeCallback @ 0x14064CF40 (KeUserModeCallback.c)
 *     KeFreeCalloutStack @ 0x14072F380 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x14073B370 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     MiDeleteKernelStack @ 0x140024240 (MiDeleteKernelStack.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1402D17D0 (MiLogKernelStackEvent.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, char a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // r9
  char v7; // r10
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // rsi
  char v13; // r10
  bool v14; // zf
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  struct _KPRCB *v21; // rdx
  __int64 v22; // rcx
  signed __int64 result; // rax
  __int64 v24; // rax
  int *v25; // r13
  __int64 v26; // r8
  unsigned __int8 v27; // si
  int v28; // r9d
  int v29; // edi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // r14
  __int64 v33; // rbx
  unsigned __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  struct _KPRCB *v50; // rcx
  struct _KPRCB *v51; // rcx
  unsigned __int8 v52; // [rsp+20h] [rbp-98h]
  __int64 v53; // [rsp+28h] [rbp-90h]
  __int64 v54; // [rsp+30h] [rbp-88h] BYREF
  __int64 v55; // [rsp+38h] [rbp-80h] BYREF
  __int64 v56; // [rsp+40h] [rbp-78h] BYREF
  __int64 v57; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v58; // [rsp+50h] [rbp-68h]
  int *v59; // [rsp+58h] [rbp-60h]
  __int64 v60; // [rsp+60h] [rbp-58h]
  _SLIST_ENTRY *v61; // [rsp+68h] [rbp-50h]
  int v62; // [rsp+C0h] [rbp+8h]
  int v64; // [rsp+D0h] [rbp+18h] BYREF
  int v65; // [rsp+D8h] [rbp+20h] BYREF

  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
  {
    v14 = (a2 & 1) == 0;
    v36 = 18LL;
    if ( v14 )
      v36 = (unsigned __int8)byte_1404663FC;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v36 << 12), v36, 0LL);
  }
  v3 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  v4 = v3 - 0x98000000008LL;
  v58 = v3 - 0x98000000008LL;
  v5 = *(_QWORD *)(v3 - 0x98000000008LL);
  if ( (unsigned __int64)(v3 - 0x98000000008LL) >= 0xFFFFF6FB7DBED000uLL
    && v4 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v5 & 1) != 0
    && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v5 |= 0x20uLL;
      v38 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v4 >> 3) & 0x1FF));
      if ( (v38 & 0x20) == 0 )
        v5 = *(_QWORD *)(v3 - 0x98000000008LL);
      if ( (v38 & 0x42) != 0 )
        v5 |= 0x42uLL;
    }
  }
  v55 = v5;
  if ( *(ULONG_PTR **)(qword_140465E88
                     + 8
                     * ((*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v55) >> 12) & 0xFFFFFFFFFLL)
                                   - 0x58000000000LL
                                   + 40) >> 40) & 0x3FFLL)) != &MiSystemPartition
    || (v7 & 1) != 0 )
  {
    return MiDeleteKernelStack(v4, v7);
  }
  if ( v4 >= v8
    && v4 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v39 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 8 * ((v4 >> 3) & 0x1FF));
      v41 = v6 | 0x20;
      if ( (v40 & 0x20) == 0 )
        v41 = v6;
      v6 = v41;
      if ( (v40 & 0x42) != 0 )
        v6 = v41 | 0x42;
    }
  }
  v56 = v6;
  v9 = MI_READ_PTE_LOCK_FREE(&v56);
  v11 = 0LL;
  v12 = *(_QWORD *)(48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 58;
  v14 = (v13 & 4) == 0;
  v53 = 0LL;
  v15 = 2LL;
  if ( !v14 )
  {
    while ( 1 )
    {
      v54 = MI_READ_PTE_LOCK_FREE(v4);
      v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v18);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v64 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v64);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      v19 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v54 == v19 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
    if ( (*(_QWORD *)v16 & 0xFFFFFFFFFFELL) != 0 )
      v20 = 8 * (*(_QWORD *)v16 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
    else
      v20 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v43 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v43);
      v15 = 2LL;
    }
    __writecr8(CurrentIrql);
    v11 = 0LL;
    v53 = 0LL;
    if ( v20 == -32LL )
    {
      v21 = KeGetCurrentPrcb();
      if ( v21->ParentNode->Affinity.Reserved[0] == (_DWORD)v12 && !v21->CachedStack )
      {
        v22 = (__int64)(v4 << 25) >> 16;
        *(_QWORD *)(v22 + 4064) = v22 ^ qword_140466640;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)&v21->CachedStack, v22 + 4080, 0LL);
        if ( !result )
          return result;
      }
      v11 = 1LL;
      v53 = 1LL;
    }
    v10 = 0xFFFFF6FB7DBED000uLL;
  }
  v24 = 176LL * (unsigned int)v12;
  v60 = v24;
  while ( 1 )
  {
    v25 = (int *)((char *)&qword_140465758[2 * v11] + v24);
    v59 = v25;
    if ( *(unsigned __int16 *)v25 >= v25[4] )
      goto LABEL_48;
    v26 = (__int64)(v4 << 25) >> 16;
    v61 = (_SLIST_ENTRY *)v26;
    *(_QWORD *)(v26 + 0xFE0) = v26 ^ qword_140466640;
    if ( v11 == 1 )
      return (signed __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v25, (PSLIST_ENTRY)(v26 + 4080));
    v27 = KeGetCurrentIrql();
    v52 = v27;
    __writecr8(v15);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v28 = 1;
    v29 = -1;
    v30 = v4 - 8LL * (unsigned __int8)byte_1404663FC;
    v62 = 1;
    v31 = v30 + 8LL * ((unsigned int)(unsigned __int8)byte_1404663FC + 1);
    v32 = v30 + 8;
    if ( v30 + 8 >= v31 )
      goto LABEL_44;
    do
    {
      v33 = *(_QWORD *)v32;
      if ( v32 >= v10
        && v32 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v33 & 1) != 0
        && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
      {
        v44 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v44 )
        {
          v45 = *(_QWORD *)(v44 + 8 * ((v32 >> 3) & 0x1FF));
          v46 = v33 | 0x20;
          if ( (v45 & 0x20) == 0 )
            v46 = *(_QWORD *)v32;
          v33 = v46;
          if ( (v45 & 0x42) != 0 )
            v33 = v46 | 0x42;
        }
      }
      v57 = v33;
      if ( (v33 & 1) != 0 )
      {
        v34 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v57) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v65 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v65);
            while ( *(__int64 *)(v34 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) );
          v28 = v62;
          v10 = 0xFFFFF6FB7DBED000uLL;
        }
        v35 = *(_QWORD *)v32;
        if ( v32 >= v10
          && v32 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v35 & 1) != 0
          && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
        {
          v47 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v47 )
          {
            v48 = *(_QWORD *)(v47 + 8 * ((v32 >> 3) & 0x1FF));
            v49 = v35 | 0x20;
            if ( (v48 & 0x20) == 0 )
              v49 = *(_QWORD *)v32;
            v35 = v49;
            if ( (v48 & 0x42) != 0 )
              v35 = v49 | 0x42;
          }
        }
        if ( v33 == v35 )
        {
          if ( v29 == -1 )
          {
            v29 = *(_QWORD *)(v34 + 40) >> 58;
          }
          else if ( v29 != *(_QWORD *)(v34 + 40) >> 58 )
          {
            v28 = 0;
            v62 = 0;
          }
          *(_QWORD *)v34 &= 0xFFFFF00000000001uLL;
          v32 += 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v32 += 8LL;
      }
    }
    while ( v32 < v31 );
    v4 = v58;
    v25 = v59;
    v27 = v52;
    if ( v28 == 1 )
      break;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v52 < 2u )
    {
      v50 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v50);
      v10 = 0xFFFFF6FB7DBED000uLL;
    }
    __writecr8(v52);
    v11 = v53;
    v15 = 2LL;
LABEL_48:
    if ( v11 != 1 )
    {
      v7 = a2;
      return MiDeleteKernelStack(v4, v7);
    }
    v24 = v60;
    v11 = 0LL;
    v53 = 0LL;
  }
  v26 = (__int64)v61;
LABEL_44:
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v25, (PSLIST_ENTRY)(v26 + 4080));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v27 < 2u )
  {
    v51 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v51);
  }
  result = v27;
  __writecr8(v27);
  return result;
}
