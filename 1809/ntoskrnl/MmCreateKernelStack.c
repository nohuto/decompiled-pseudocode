/*
 * XREFs of MmCreateKernelStack @ 0x1400C9FF0
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400C9D00 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeInitThread @ 0x1405666E0 (KeInitThread.c)
 *     KeUserModeCallback @ 0x140647480 (KeUserModeCallback.c)
 *     KeAllocateCalloutStackEx @ 0x14070DF40 (KeAllocateCalloutStackEx.c)
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     MiMarkPfnTradable @ 0x14013DA44 (MiMarkPfnTradable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     MiLogKernelStackEvent @ 0x1402BB954 (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MmCreateKernelStack(unsigned int a1, unsigned __int16 a2, unsigned __int64 a3)
{
  unsigned int v4; // r10d
  ULONG_PTR *v5; // rbx
  unsigned __int64 v6; // r12
  unsigned int v7; // edx
  unsigned int v8; // r13d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rbp
  ULONG_PTR v12; // rbp
  ULONG_PTR v13; // r9
  __int64 v14; // rbp
  __int64 i; // r15
  _SLIST_HEADER *v17; // rsi
  __int16 Alignment; // bp
  unsigned __int8 CurrentIrql; // cl
  PSLIST_ENTRY v20; // rax
  ULONG_PTR Next; // r9
  ULONG_PTR v22; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  ULONG_PTR v33; // rax
  unsigned __int64 v34; // r14
  ULONG_PTR v35; // r13
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  struct _KPRCB *v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r8
  struct _KPRCB *v47; // rcx
  unsigned __int8 v48; // [rsp+30h] [rbp-68h]
  int v49; // [rsp+38h] [rbp-60h]
  unsigned __int64 v50; // [rsp+40h] [rbp-58h]
  __int64 v51; // [rsp+48h] [rbp-50h] BYREF
  __int64 v52; // [rsp+50h] [rbp-48h]
  int v54; // [rsp+B8h] [rbp+20h] BYREF

  v4 = a1;
  v5 = &MiSystemPartition;
  if ( (a1 & 0x10) != 0 )
  {
    v6 = -32LL;
    if ( a3 )
      v5 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1454LL));
  }
  else if ( a3 )
  {
    v6 = a3;
    v5 = *(ULONG_PTR **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a3 + 544) + 1454LL));
  }
  else
  {
    v6 = -16LL;
  }
  if ( (a1 & 1) != 0 )
  {
    v7 = 18;
    v37 = 18LL;
    v49 = 18;
    if ( (a1 & 4) == 0 )
      v37 = 6LL;
    v50 = v37;
  }
  else
  {
    v7 = (unsigned __int8)byte_14043BD3C;
    v49 = (unsigned __int8)byte_14043BD3C;
    v8 = (unsigned __int8)byte_14043BD3C;
    v50 = (unsigned __int8)byte_14043BD3C;
    if ( (a1 & 0x10) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = 1;
      if ( CurrentPrcb->ParentNode->Affinity.Reserved[0] == a2 )
      {
        if ( CurrentPrcb->CachedStack )
        {
          v11 = _InterlockedExchange64((volatile __int64 *)&CurrentPrcb->CachedStack, 0LL);
          if ( v11 )
          {
            v12 = v11 - 4080;
            v13 = *(_QWORD *)(v12 + 4064);
            if ( v13 != (v12 ^ qword_14043BF80) )
              KeBugCheckEx(0x1Au, 0x3470uLL, v12, v13, v12 ^ qword_14043BF80);
            v14 = (__int64)(((v12 & 0xFFFFFFFFFFFFF000uLL) << 16) + 0x10000000) >> 16;
            goto LABEL_11;
          }
        }
      }
    }
    else
    {
      v10 = 0;
    }
    if ( v5 == &MiSystemPartition )
    {
      for ( i = v10; ; i = 0LL )
      {
        v17 = &qword_14043B118[25 * a2 + 2 * i];
        Alignment = v17[7].Alignment;
        if ( Alignment )
        {
          if ( i == 1 )
          {
            v48 = 17;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            v48 = CurrentIrql;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          }
          v20 = RtlpInterlockedPopEntrySList(v17 + 7);
          if ( v20 )
          {
            if ( Alignment == 1 && !*((_DWORD *)&v17[8].HeaderX64 + 3) )
              *((_DWORD *)&v17[8].HeaderX64 + 3) = 1;
            Next = (ULONG_PTR)v20[-1].Next;
            v22 = (ULONG_PTR)&v20[-255];
            BugCheckParameter4 = (unsigned __int64)&v20[-255] ^ qword_14043BF80;
            if ( Next != BugCheckParameter4 )
              KeBugCheckEx(0x1Au, 0x3470uLL, v22, Next, BugCheckParameter4);
            v24 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v14 = (__int64)((v24 << 25) + 0x10000000) >> 16;
            v52 = v14;
            if ( v10 != 1 )
            {
              v25 = v24 - 8LL * (unsigned __int8)byte_14043BD3C + 8;
              v26 = 0x7FFFFFFFFFFFFFFFLL;
              do
              {
                v27 = *(_QWORD *)v24;
                if ( v24 >= 0xFFFFF6FB7DBED000uLL
                  && v24 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v27 & 1) != 0
                  && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
                {
                  v39 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v39 )
                  {
                    v40 = *(_QWORD *)(v39 + 8 * ((v24 >> 3) & 0x1FF));
                    v41 = v27 | 0x20;
                    if ( (v40 & 0x20) == 0 )
                      v41 = *(_QWORD *)v24;
                    v27 = v41;
                    if ( (v40 & 0x42) != 0 )
                      v27 = v41 | 0x42;
                  }
                }
                v51 = v27;
                v28 = v27;
                if ( (unsigned __int64)&v51 >= 0xFFFFF6FB7DBED000uLL
                  && (unsigned __int64)&v51 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v27 & 1) != 0
                  && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
                {
                  v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v42 )
                  {
                    v43 = *(_QWORD *)(v42 + 8 * (((unsigned __int64)&v51 >> 3) & 0x1FF));
                    v28 = v27 | 0x20;
                    if ( (v43 & 0x20) == 0 )
                      v28 = v27;
                    if ( (v43 & 0x42) != 0 )
                      v28 |= 0x42uLL;
                  }
                  else
                  {
                    v28 = v27;
                  }
                }
                v29 = (v28 >> 12) & 0xFFFFFFFFFLL;
                v30 = 48 * v29 - 0x58000000000LL;
                v54 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
                {
                  do
                  {
                    do
                      KeYieldProcessorEx(&v54, v29, v26);
                    while ( *(__int64 *)(v30 + 24) < 0 );
                  }
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
                  v26 = 0x7FFFFFFFFFFFFFFFLL;
                }
                v31 = *(_QWORD *)v24;
                if ( v24 >= 0xFFFFF6FB7DBED000uLL
                  && v24 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v31 & 1) != 0
                  && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
                {
                  v44 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v44 )
                  {
                    v45 = *(_QWORD *)(v44 + 8 * ((v24 >> 3) & 0x1FF));
                    v46 = v31 | 0x20;
                    if ( (v45 & 0x20) == 0 )
                      v46 = *(_QWORD *)v24;
                    v31 = v46;
                    if ( (v45 & 0x42) != 0 )
                      v31 = v46 | 0x42;
                  }
                  v26 = 0x7FFFFFFFFFFFFFFFLL;
                }
                if ( v27 == v31 )
                {
                  *(_QWORD *)v30 ^= (*(_QWORD *)v30 ^ (v6 >> 3)) & 0xFFFFFFFFFFELL;
                  if ( (*(_BYTE *)v30 & 1) == 0 )
                  {
                    MiMarkPfnTradable(v30, 1LL, 0x7FFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFELL);
                    v26 = 0x7FFFFFFFFFFFFFFFLL;
                  }
                  v24 -= 8LL;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              while ( v24 >= v25 );
              v14 = v52;
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v48 < 2u )
              {
                v47 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v47);
              }
              __writecr8(v48);
            }
            v8 = v50;
LABEL_36:
            LOBYTE(v4) = a1;
            v7 = v49;
            goto LABEL_11;
          }
          if ( i != 1 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v48 < 2u )
            {
              v38 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v38);
            }
            __writecr8(v48);
          }
        }
        ++*((_DWORD *)&v17[8].HeaderX64 + 1);
        if ( i != 1 )
        {
          v4 = a1;
          v7 = v49;
          break;
        }
        v10 = 0;
      }
    }
  }
  v32 = v7;
  if ( !(unsigned int)MiChargeCommit((__int64)v5, v7, (v4 >> 1) & 1) )
    return 0LL;
  v33 = MiReservePtes((__int64)&unk_14043BCD8, (unsigned __int64 *)(unsigned int)(v49 + 1));
  v34 = v33;
  if ( !v33 )
  {
LABEL_118:
    MiReturnCommit((__int64)v5, v32);
    return 0LL;
  }
  v35 = v33;
  v14 = (__int64)((v33 << 25) + ((v32 + 1) << 28)) >> 16;
  if ( (a1 & 5) == 1 )
    v35 = v33 + 96;
  if ( !(unsigned int)MiChargeResident(v5, v50, 0LL) )
  {
LABEL_117:
    MiReleasePtes((__int64)&unk_14043BCD8, v34, v49 + 1);
    goto LABEL_118;
  }
  v36 = v35 + 8;
  v8 = v50;
  if ( !(unsigned int)MiAllocateKernelStackPages((__int64)v5, v36, v50, v6, a2, a1) )
  {
    if ( v5 == &MiSystemPartition )
      MiReturnResidentAvailable(v50);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 920, v50);
    goto LABEL_117;
  }
  if ( v5 != &MiSystemPartition )
    goto LABEL_36;
  _InterlockedExchangeAdd64(&qword_14043C0F0, v32);
  LOBYTE(v4) = a1;
  v7 = v49;
LABEL_11:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && (v4 & 8) != 0 )
    MiLogKernelStackEvent(v14 - (v7 << 12), v8, 1LL);
  return v14;
}
