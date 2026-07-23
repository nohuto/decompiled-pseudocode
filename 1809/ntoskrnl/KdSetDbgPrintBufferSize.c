/*
 * XREFs of KdSetDbgPrintBufferSize @ 0x14028CA50
 * Callers:
 *     NtSystemDebugControl @ 0x1408DBAF0 (NtSystemDebugControl.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdSetDbgPrintBufferSize(SIZE_T NumberOfBytes)
{
  unsigned int v1; // ebp
  _BYTE *PoolWithTag; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *v5; // rcx
  size_t v6; // rdi
  PVOID v7; // r14
  size_t v8; // rbx
  size_t v9; // rax
  size_t v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = NumberOfBytes;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( (unsigned int)NumberOfBytes > 0x1000000 )
    return 3221225711LL;
  if ( (unsigned int)NumberOfBytes <= 0x1000 )
  {
    v1 = 4096;
    PoolWithTag = &KdPrintDefaultCircularBuffer;
    while ( 1 )
    {
LABEL_9:
      if ( !KdpPrintSpinLock )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        if ( !_InterlockedCompareExchange64(&KdpPrintSpinLock, 1LL, 0LL) )
        {
          v6 = 0LL;
          v7 = KdPrintCircularBuffer;
          qword_1404DDB38 = (__int64)KeGetCurrentPrcb();
          if ( v1 > (unsigned __int64)(unsigned int)KdPrintBufferSize )
          {
            if ( KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer >= (unsigned __int64)(unsigned int)KdPrintBufferSize )
              KdPrintRolloverCount = 0;
            v8 = (KdPrintWritePointer - (_UNKNOWN *)KdPrintCircularBuffer) & -(__int64)(KdPrintWritePointer
                                                                                      - (_UNKNOWN *)KdPrintCircularBuffer < (unsigned __int64)(unsigned int)KdPrintBufferSize);
            if ( KdPrintRolloverCount )
            {
              v6 = (unsigned int)KdPrintBufferSize - v8;
              memmove(PoolWithTag, (char *)KdPrintCircularBuffer + v8, v6);
            }
            memmove(&PoolWithTag[v6], v7, v8);
            v6 += v8;
            if ( KdPrintRolloverCount )
            {
              v9 = 0LL;
              if ( *PoolWithTag )
              {
                do
                {
                  if ( v9 >= v6 )
                    break;
                  ++v9;
                }
                while ( PoolWithTag[v9] );
              }
              v10 = v9 + 1;
              if ( v10 < v6 )
              {
                v6 -= v10;
                memmove(PoolWithTag, &PoolWithTag[v10], v6);
              }
            }
          }
          memset(&PoolWithTag[v6], 0, v1 - v6);
          ++KdPrintBufferChanges;
          qword_1404DDB38 = 0LL;
          KdPrintCircularBuffer = PoolWithTag;
          KdPrintBufferSize = v1;
          KdPrintWritePointer = &PoolWithTag[v6];
          KdPrintRolloverCount = 0;
          _InterlockedExchange((volatile __int32 *)&KdpPrintSpinLock, 0);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(CurrentIrql);
          if ( v7 && v7 != &KdPrintDefaultCircularBuffer )
            ExFreePoolWithTag(v7, 0);
          return 0LL;
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v5 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v5->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v5);
        }
        __writecr8(CurrentIrql);
      }
      _mm_pause();
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6250644Bu);
  if ( PoolWithTag )
    goto LABEL_9;
  return 3221225495LL;
}
