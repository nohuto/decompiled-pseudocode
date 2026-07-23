/*
 * XREFs of MiAllocateSlabEntry @ 0x1402C1E8C
 * Callers:
 *     MiReplenishSlabAllocator @ 0x1402C2EA4 (MiReplenishSlabAllocator.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x1400296A4 (MiSetPfnTbFlushStamp.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     RtlInterlockedSetClearRunEx @ 0x140100D60 (RtlInterlockedSetClearRunEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402C2DF0 (MiReInitializeFreeSlabPfn.c)
 *     MiSlabAllocatorRecentFailure @ 0x1402C2EEC (MiSlabAllocatorRecentFailure.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402C2F2C (MiUpdateSlabPagePlaceholderState.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateSlabEntry(__int64 a1, __int64 a2, int a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rsi
  int v8; // r14d
  _QWORD *v9; // r12
  unsigned int v10; // edi
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-88h] BYREF
  int v21; // [rsp+A8h] [rbp+20h] BYREF

  if ( !(unsigned int)MiSlabAllocatorRecentFailure() )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x6553694Du);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x80uLL);
      v8 = a3 & 0x40;
      v7[6] = v7 + 7;
      v9 = v7 + 3;
      v10 = v8 != 0;
      *((_DWORD *)v7 + 10) = 512;
      *((_DWORD *)v7 + 30) = 512;
      if ( (a3 & 0x40) == 0 )
        a3 |= 0x40u;
      do
      {
        if ( (int)MiFindContiguousPages(
                    a2,
                    0x200uLL,
                    0xFFFFFFFFFuLL,
                    512LL,
                    0x200uLL,
                    1u,
                    0x80000000,
                    0x80000000,
                    a3 | 0x40000001u,
                    0LL,
                    v7 + 3) >= 0 )
        {
          v12 = *v9 >> 9;
          v7[4] = *v9 + 511LL;
          RtlInterlockedSetClearRunEx((__int64)&unk_14043F2D0, v12, 1uLL);
          v14 = 48LL * *v9 - 0x58000000000LL;
          v15 = 48LL * v7[4] - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          v17 = 2LL;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          if ( v14 <= v15 )
          {
            v18 = v14 + 24;
            do
            {
              v21 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v21, v17, v13);
                while ( *(__int64 *)v18 < 0 );
              }
              _InterlockedOr(v20, 0);
              MiSetPfnTbFlushStamp(v18 - 24, KiTbFlushTimeStamp, 1);
              *(_WORD *)(v18 + 8) = 0;
              MiReInitializeFreeSlabPfn(v18 - 24, a1);
              *(_QWORD *)(v18 + 16) = *(_QWORD *)(v18 + 16) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
              MiAbortCombineScan(v18 - 24);
              _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
              v18 += 48LL;
            }
            while ( v18 - 24 <= v15 );
          }
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(CurrentIrql);
          MiUpdateSlabPagePlaceholderState(a1, *v9, 512LL, 1LL);
          return v7;
        }
        a3 &= ~0x40u;
        ++v10;
      }
      while ( v10 < 2 );
      ExFreePoolWithTag(v7, 0);
      if ( v8 )
        return 0LL;
    }
    *(_QWORD *)(a1 + 64) = KiQueryUnbiasedInterruptTime();
  }
  return 0LL;
}
