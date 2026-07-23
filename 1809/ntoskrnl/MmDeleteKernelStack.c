/*
 * XREFs of MmDeleteKernelStack @ 0x1400CA580
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400C9D00 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     PspDeleteKernelStack @ 0x14012F260 (PspDeleteKernelStack.c)
 *     KeInitThread @ 0x1405666E0 (KeInitThread.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     KeUserModeCallback @ 0x140647480 (KeUserModeCallback.c)
 *     KeFreeCalloutStack @ 0x1407079C0 (KeFreeCalloutStack.c)
 *     KeAllocateCalloutStackEx @ 0x14070DF40 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiDeleteKernelStack @ 0x14007A5A0 (MiDeleteKernelStack.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1402BB954 (MiLogKernelStackEvent.c)
 */

signed __int64 __fastcall MmDeleteKernelStack(unsigned __int64 a1, char a2)
{
  char v2; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rsi
  bool v11; // zf
  unsigned __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  struct _KPRCB *v22; // rdx
  __int64 v23; // rcx
  signed __int64 result; // rax
  __int64 v25; // rax
  int *v26; // r9
  unsigned __int64 v27; // r8
  __int64 v28; // rdi
  int v29; // r10d
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rsi
  int v32; // eax
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rsi
  __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v55; // rcx
  unsigned __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  struct _KPRCB *v62; // rcx
  struct _KPRCB *v63; // rcx
  unsigned __int64 v64; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+28h] [rbp-A0h]
  __int64 v66; // [rsp+30h] [rbp-98h]
  int v67; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 v68; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v69; // [rsp+48h] [rbp-80h] BYREF
  __int64 v70; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v71; // [rsp+58h] [rbp-70h]
  __int64 v72; // [rsp+60h] [rbp-68h]
  unsigned __int64 v73; // [rsp+68h] [rbp-60h]
  int *v74; // [rsp+70h] [rbp-58h]
  int v75; // [rsp+D0h] [rbp+8h]
  int v77; // [rsp+E0h] [rbp+18h]
  int v78; // [rsp+E8h] [rbp+20h] BYREF

  v2 = a2;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a2 & 2) != 0 )
  {
    v11 = (a2 & 1) == 0;
    v41 = 18LL;
    if ( v11 )
      v41 = (unsigned __int8)byte_14043BD3C;
    MiLogKernelStackEvent(a1 - (unsigned int)((_DWORD)v41 << 12), v41, 0LL);
    v2 = a2;
  }
  v4 = 0xFFFFF6FB7DBED000uLL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
  v71 = v5;
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)v5;
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v42 )
    {
      v7 |= 0x20uLL;
      v43 = *(_QWORD *)(v42 + 8 * ((v5 >> 3) & 0x1FF));
      if ( (v43 & 0x20) == 0 )
        v7 = *(_QWORD *)v5;
      if ( (v43 & 0x42) != 0 )
        v7 |= 0x42uLL;
    }
  }
  v68 = v7;
  if ( (unsigned __int64)&v68 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v68 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v44 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v44 )
    {
      v45 = *(_QWORD *)(v44 + 8 * (((unsigned __int64)&v68 >> 3) & 0x1FF));
      v46 = v7 | 0x20;
      if ( (v45 & 0x20) == 0 )
        v46 = v7;
      v7 = v46;
      if ( (v45 & 0x42) != 0 )
        v7 = v46 | 0x42;
    }
  }
  if ( *(ULONG_PTR **)(qword_14043B808
                     + 8 * ((*(_QWORD *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 40) & 0x3FFLL)) != &MiSystemPartition )
    return MiDeleteKernelStack(v5, v2);
  v8 = v2 & 1;
  v77 = v8;
  if ( (v2 & 1) != 0 )
    return MiDeleteKernelStack(v5, v2);
  if ( v5 >= 0xFFFFF6FB7DBED000uLL
    && v5 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v47 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v47 )
    {
      v48 = *(_QWORD *)(v47 + 8 * ((v5 >> 3) & 0x1FF));
      v49 = v6 | 0x20;
      if ( (v48 & 0x20) == 0 )
        v49 = v6;
      v6 = v49;
      if ( (v48 & 0x42) != 0 )
        v6 = v49 | 0x42;
    }
  }
  v69 = v6;
  if ( (unsigned __int64)&v69 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v69 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    v50 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v50 )
    {
      v51 = *(_QWORD *)(v50 + 8 * (((unsigned __int64)&v69 >> 3) & 0x1FF));
      v52 = v6 | 0x20;
      if ( (v51 & 0x20) == 0 )
        v52 = v6;
      v6 = v52;
      if ( (v51 & 0x42) != 0 )
        v6 = v52 | 0x42;
    }
  }
  v9 = 0LL;
  v10 = *(_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 58;
  v11 = (v2 & 4) == 0;
  v66 = 0LL;
  v12 = 2LL;
  if ( !v11 )
  {
    while ( 1 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(v5);
      v64 = v15;
      if ( (unsigned __int64)&v64 >= v17
        && (unsigned __int64)&v64 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0 )
      {
        v13 = v15;
        if ( (v15 & 0x20) == 0 || (v15 & 0x42) == 0 )
        {
          v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v14 )
          {
            v53 = *(_QWORD *)(v14 + 8 * (((unsigned __int64)&v64 >> 3) & 0x1FF));
            if ( (v53 & 0x20) != 0 )
              v15 |= 0x20uLL;
            if ( (v53 & 0x42) != 0 )
              v15 |= 0x42uLL;
          }
          else
          {
            v15 = v64;
          }
        }
      }
      v18 = 48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v16);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v78 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v78, v13, v14);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      v20 = MI_READ_PTE_LOCK_FREE(v5);
      if ( v64 == v20 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
    if ( (*(_QWORD *)v18 & 0xFFFFFFFFFFELL) != 0 )
      v21 = 8 * (*(_QWORD *)v18 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
    else
      v21 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v55 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v55);
      v12 = 2LL;
      v4 = 0xFFFFF6FB7DBED000uLL;
    }
    __writecr8(CurrentIrql);
    v9 = 0LL;
    v66 = 0LL;
    if ( v21 == -32LL )
    {
      v22 = KeGetCurrentPrcb();
      if ( v22->ParentNode->Affinity.Reserved[0] == (_DWORD)v10 && !v22->CachedStack )
      {
        v23 = (__int64)(v5 << 25) >> 16;
        *(_QWORD *)(v23 + 4064) = v23 ^ qword_14043BF80;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)&v22->CachedStack, v23 + 4080, 0LL);
        if ( !result )
          return result;
      }
      v9 = 1LL;
      v66 = 1LL;
    }
  }
  v25 = 400LL * (unsigned int)v10;
  v72 = v25;
  while ( 1 )
  {
    v26 = (int *)((char *)&qword_14043B118[2 * v9 + 7] + v25);
    v74 = v26;
    if ( *(unsigned __int16 *)v26 >= v26[4] )
      goto LABEL_59;
    v27 = (__int64)(v5 << 25) >> 16;
    v73 = v27;
    *(_QWORD *)(v27 + 0xFE0) = v27 ^ qword_14043BF80;
    if ( v9 == 1 )
      return (signed __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v26, (PSLIST_ENTRY)(v27 + 4080));
    v28 = KeGetCurrentIrql();
    v65 = v28;
    __writecr8(v12);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v28 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v29 = 1;
    LODWORD(v30) = -1;
    v75 = 1;
    if ( v8 )
    {
      v31 = v5 - 144;
      v32 = 18;
    }
    else
    {
      v31 = v5 - 8LL * (unsigned __int8)byte_14043BD3C;
      v32 = (unsigned __int8)byte_14043BD3C;
    }
    v33 = v31 + 8LL * (unsigned int)(v32 + 1);
    v34 = v31 + 8;
    if ( v34 >= v33 )
      goto LABEL_47;
    do
    {
      v35 = *(_QWORD *)v34;
      if ( v34 >= v4
        && v34 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v35 & 1) != 0
        && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
      {
        v56 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v56 )
        {
          v57 = *(_QWORD *)(v56 + 8 * ((v34 >> 3) & 0x1FF));
          v58 = v35 | 0x20;
          if ( (v57 & 0x20) == 0 )
            v58 = *(_QWORD *)v34;
          v35 = v58;
          if ( (v57 & 0x42) != 0 )
            v35 = v58 | 0x42;
        }
      }
      v70 = v35;
      if ( (v35 & 1) != 0 )
      {
        v36 = v35;
        if ( (unsigned __int64)&v70 >= v4
          && (unsigned __int64)&v70 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
        {
          v59 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v59 )
          {
            v60 = *(_QWORD *)(v59 + 8 * (((unsigned __int64)&v70 >> 3) & 0x1FF));
            v36 = v35 | 0x20;
            if ( (v60 & 0x20) == 0 )
              v36 = v35;
            if ( (v60 & 0x42) != 0 )
              v36 |= 0x42uLL;
          }
          else
          {
            v36 = v35;
          }
        }
        v37 = (v36 >> 12) & 0xFFFFFFFFFLL;
        v38 = 48 * v37 - 0x58000000000LL;
        v67 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v67, v37, v27);
            while ( *(__int64 *)(v38 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) );
          v29 = v75;
          v4 = 0xFFFFF6FB7DBED000uLL;
        }
        v39 = *(_QWORD *)v34;
        if ( v34 >= v4
          && v34 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v39 & 1) != 0
          && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
        {
          v27 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v27 )
          {
            v61 = *(_QWORD *)(v27 + 8 * ((v34 >> 3) & 0x1FF));
            v27 = v39 | 0x20;
            if ( (v61 & 0x20) == 0 )
              v27 = *(_QWORD *)v34;
            v39 = v27;
            if ( (v61 & 0x42) != 0 )
              v39 = v27 | 0x42;
          }
        }
        if ( v35 == v39 )
        {
          v40 = *(_QWORD *)(v38 + 40);
          if ( (_DWORD)v30 == -1 )
          {
            v30 = v40 >> 58;
          }
          else if ( (_DWORD)v30 != v40 >> 58 )
          {
            v29 = 0;
            v75 = 0;
          }
          *(_QWORD *)v38 &= 0xFFFFF00000000001uLL;
          v34 += 8LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v34 += 8LL;
      }
    }
    while ( v34 < v33 );
    v5 = v71;
    v8 = v77;
    LOBYTE(v28) = v65;
    if ( v29 == 1 )
      break;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v65 < 2u )
    {
      v62 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v62);
      v4 = 0xFFFFF6FB7DBED000uLL;
    }
    __writecr8((unsigned __int8)v28);
    v9 = v66;
    v12 = 2LL;
LABEL_59:
    if ( v9 != 1 )
    {
      v2 = a2;
      return MiDeleteKernelStack(v5, v2);
    }
    v25 = v72;
    v9 = 0LL;
    v66 = 0LL;
  }
  v27 = v73;
  v26 = v74;
LABEL_47:
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v26, (PSLIST_ENTRY)(v27 + 4080));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v28 < 2u )
  {
    v63 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v63->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v63);
  }
  result = (unsigned __int8)v28;
  __writecr8((unsigned __int8)v28);
  return result;
}
