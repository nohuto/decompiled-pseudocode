/*
 * XREFs of MmCreateKernelStack @ 0x1400C3CE0
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400C1AB0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeInitThread @ 0x1405952E0 (KeInitThread.c)
 *     KeUserModeCallback @ 0x140686D70 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x1407390E0 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x14087E80C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 * Callees:
 *     MiAllocateKernelStackPages @ 0x14002CA20 (MiAllocateKernelStackPages.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMarkPfnTradable @ 0x1400E3C18 (MiMarkPfnTradable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1402D1A70 (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // r10d
  ULONG_PTR *v5; // rbx
  unsigned __int64 v6; // r15
  unsigned int v7; // r8d
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int v9; // r14d
  __int64 v10; // rbp
  ULONG_PTR v11; // rbp
  ULONG_PTR v12; // r9
  __int64 v13; // rbp
  __int64 i; // rbp
  _SLIST_HEADER *v16; // rsi
  __int16 Alignment; // r12
  unsigned __int8 CurrentIrql; // cl
  PSLIST_ENTRY v19; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v21; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r14
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r11
  __int64 v29; // r10
  __int64 v30; // rsi
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  ULONG_PTR v33; // rax
  unsigned __int64 v34; // r14
  ULONG_PTR v35; // r13
  __int64 v36; // rax
  struct _KPRCB *v37; // rcx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // r8
  struct _KPRCB *v44; // rcx
  unsigned __int8 v45; // [rsp+30h] [rbp-68h]
  int v46; // [rsp+38h] [rbp-60h]
  unsigned __int64 v47; // [rsp+40h] [rbp-58h]
  __int64 v48; // [rsp+48h] [rbp-50h] BYREF
  __int64 v49; // [rsp+50h] [rbp-48h]
  int v51; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v6 = -32LL;
    if ( a3 )
      v5 = *(ULONG_PTR **)(qword_140466188 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1454LL));
  }
  else if ( a3 )
  {
    v6 = a3;
    v5 = *(ULONG_PTR **)(qword_140466188 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1454LL));
  }
  else
  {
    v6 = -16LL;
  }
  if ( (a1 & 1) != 0 )
  {
    v7 = 18;
    v36 = 18LL;
    v46 = 18;
    if ( (a1 & 4) == 0 )
      v36 = 6LL;
    v47 = v36;
  }
  else
  {
    v7 = (unsigned __int8)byte_1404666FC;
    v46 = (unsigned __int8)byte_1404666FC;
    v47 = (unsigned __int8)byte_1404666FC;
    if ( (a1 & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = 1;
      if ( CurrentPrcb->ParentNode->Affinity.Reserved[0] == (_DWORD)v3 )
      {
        if ( CurrentPrcb->CachedStack )
        {
          v10 = _InterlockedExchange64((volatile __int64 *)&CurrentPrcb->CachedStack, 0LL);
          if ( v10 )
          {
            v11 = v10 - 4080;
            v12 = *(_QWORD *)(v11 + 4064);
            if ( v12 != (v11 ^ qword_140466940) )
              KeBugCheckEx(0x1Au, 0x3470uLL, v11, v12, v11 ^ qword_140466940);
            v13 = (__int64)(((v11 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
            goto LABEL_11;
          }
        }
      }
    }
    else
    {
      v9 = 0;
    }
    if ( v5 == &MiSystemPartition )
    {
      for ( i = v9; ; i = 0LL )
      {
        v16 = &qword_140465A58[11 * v3 + 2 * i];
        Alignment = v16->Alignment;
        if ( LOWORD(v16->Alignment) )
        {
          if ( i == 1 )
          {
            v45 = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            v45 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          }
          v19 = RtlpInterlockedPopEntrySList(v16);
          if ( v19 )
          {
            if ( Alignment == 1 && !*((_DWORD *)&v16[1].HeaderX64 + 3) )
              *((_DWORD *)&v16[1].HeaderX64 + 3) = 1;
            Next = (ULONG_PTR)v19[-1].Next;
            v21 = (ULONG_PTR)&v19[-255];
            BugCheckParameter4 = (unsigned __int64)&v19[-255] ^ qword_140466940;
            if ( Next != BugCheckParameter4 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v21, Next, BugCheckParameter4);
            v23 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v13 = (__int64)((v23 << 25) + 0x10000000) >> 16;
            v49 = v13;
            if ( v9 != 1 )
            {
              v24 = v23 - 8LL * (unsigned __int8)byte_1404666FC + 8;
              do
              {
                v25 = *(_QWORD *)v23;
                if ( v23 >= 0xFFFFF6FB7DBED000uLL
                  && v23 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v25 & 1) != 0
                  && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
                {
                  DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                  if ( DeepFreezeStartTime )
                  {
                    v39 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v23 >> 3) & 0x1FF));
                    v40 = v25 | 0x20;
                    if ( (v39 & 0x20) == 0 )
                      v40 = *(_QWORD *)v23;
                    v25 = v40;
                    if ( (v39 & 0x42) != 0 )
                      v25 = v40 | 0x42;
                  }
                }
                v48 = v25;
                v26 = MI_READ_PTE_LOCK_FREE(&v48);
                v30 = v29 + 48 * (v28 & (v26 >> 12));
                v51 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v51);
                    while ( *(__int64 *)(v30 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
                  v27 = 0xFFFFFFFFFFELL;
                }
                v31 = *(_QWORD *)v23;
                if ( v23 >= 0xFFFFF6FB7DBED000uLL
                  && v23 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v31 & 1) != 0
                  && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
                {
                  v41 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                  if ( v41 )
                  {
                    v42 = *(_QWORD *)(v41 + 8 * ((v23 >> 3) & 0x1FF));
                    v43 = v31 | 0x20;
                    if ( (v42 & 0x20) == 0 )
                      v43 = *(_QWORD *)v23;
                    v31 = v43;
                    if ( (v42 & 0x42) != 0 )
                      v31 = v43 | 0x42;
                  }
                }
                if ( v25 == v31 )
                {
                  *(_QWORD *)v30 ^= v27 & (*(_QWORD *)v30 ^ (v6 >> 3));
                  if ( (*(_BYTE *)v30 & 1) == 0 )
                    MiMarkPfnTradable(v30, 1LL);
                  v23 -= 8LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v23 >= v24 );
              v13 = v49;
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
              {
                v44 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v44);
              }
              __writecr8(v45);
            }
            goto LABEL_11;
          }
          if ( i != 1 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
            {
              v37 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v37);
            }
            __writecr8(v45);
          }
        }
        ++*((_DWORD *)&v16[1].HeaderX64 + 1);
        if ( i != 1 )
        {
          v4 = a1;
          v7 = v46;
          break;
        }
        v9 = 0;
      }
    }
  }
  v32 = v7;
  if ( !(unsigned int)MiChargeCommit((__int64)v5, v7, (v4 >> 1) & 1) )
    return 0LL;
  v33 = MiReservePtes((__int64)&unk_140466698, (unsigned __int64 *)(unsigned int)(v46 + 1));
  v34 = v33;
  if ( !v33 )
  {
LABEL_98:
    MiReturnCommit((__int64)v5, v32);
    return 0LL;
  }
  v35 = v33;
  v13 = (__int64)((v33 << 25) + ((v32 + 1) << 28)) >> 16;
  if ( (a1 & 5) == 1 )
    v35 = v33 + 96;
  if ( !(unsigned int)MiChargeResident(v5, v47, 0LL) )
  {
LABEL_97:
    MiReleasePtes((__int64)&unk_140466698, v34, v46 + 1);
    goto LABEL_98;
  }
  if ( !(unsigned int)MiAllocateKernelStackPages((__int64)v5, v35 + 8, v47, v6, v3, a1) )
  {
    if ( v5 == &MiSystemPartition )
      MiReturnResidentAvailable(v47);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 1016, v47);
    goto LABEL_97;
  }
  if ( v5 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140466A48, v32);
LABEL_11:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (a1 & 8) != 0 )
    MiLogKernelStackEvent(v13 - (unsigned int)(v46 << 12), (unsigned int)v47, 1LL);
  return v13;
}
