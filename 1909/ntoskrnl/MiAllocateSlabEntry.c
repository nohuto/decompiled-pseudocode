/*
 * XREFs of MiAllocateSlabEntry @ 0x1402DB1F8
 * Callers:
 *     MiReplenishSlabAllocator @ 0x1402DCC24 (MiReplenishSlabAllocator.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     RtlInterlockedSetClearRunEx @ 0x14002FC60 (RtlInterlockedSetClearRunEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     MiSetPfnTbFlushStamp @ 0x140096DC4 (MiSetPfnTbFlushStamp.c)
 *     MiAbortCombineScan @ 0x140098898 (MiAbortCombineScan.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402DCB60 (MiReInitializeFreeSlabPfn.c)
 *     MiSlabAllocatorRecentFailure @ 0x1402DCC74 (MiSlabAllocatorRecentFailure.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402DCD08 (MiUpdateSlabPagePlaceholderState.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateSlabEntry(__int64 a1, __int64 a2, int a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  int v8; // r14d
  _QWORD *v9; // r12
  unsigned int v10; // ebp
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v16; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-88h] BYREF
  int v19; // [rsp+A8h] [rbp+20h] BYREF

  if ( !(unsigned int)MiSlabAllocatorRecentFailure() )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6553694Du);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x90uLL);
      v7[5] = a1;
      v8 = a3 & 0x40;
      v7[7] = v7 + 8;
      v9 = v7 + 3;
      *((_DWORD *)v7 + 12) = 512;
      v10 = v8 != 0;
      *((_DWORD *)v7 + 33) = 512;
      if ( (a3 & 0x40) == 0 )
        a3 |= 0x40u;
      do
      {
        if ( (int)MiFindContiguousPages(
                    a2,
                    512LL,
                    0xFFFFFFFFFuLL,
                    512LL,
                    0x200uLL,
                    1,
                    0x80000000,
                    0x80000000,
                    a3 | 0x40000001u,
                    0LL,
                    v7 + 3) >= 0 )
        {
          v12 = *v9 >> 9;
          v7[4] = *v9 + 511LL;
          RtlInterlockedSetClearRunEx((__int64)&unk_140469D78, v12, 1uLL);
          v13 = 48LL * *v9 - 0x58000000000LL;
          v14 = 48LL * v7[4] - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          if ( v13 <= v14 )
          {
            v16 = v13 + 24;
            do
            {
              v19 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v19);
                while ( *(__int64 *)v16 < 0 );
              }
              _InterlockedOr(v18, 0);
              MiSetPfnTbFlushStamp(v16 - 24, KiTbFlushTimeStamp, 1);
              *(_WORD *)(v16 + 8) = 0;
              MiReInitializeFreeSlabPfn(v16 - 24, a1);
              if ( !*(_DWORD *)(a1 + 48) )
              {
                *(_QWORD *)(v16 + 16) = *(_QWORD *)(v16 + 16) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
                MiAbortCombineScan(v16 - 24);
              }
              _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
              v16 += 48LL;
            }
            while ( v16 - 24 <= v14 );
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
    *(_QWORD *)(a1 + 112) = KiQueryUnbiasedInterruptTime();
  }
  return 0LL;
}
