/*
 * XREFs of KdLogDbgPrint @ 0x140918F20
 * Callers:
 *     KdpPrint @ 0x140919224 (KdpPrint.c)
 *     KdpPrompt @ 0x140919398 (KdpPrompt.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 */

struct _KPRCB *__fastcall KdLogDbgPrint(unsigned __int16 *a1)
{
  struct _KPRCB *result; // rax
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // eax
  unsigned int v5; // ecx
  bool v6; // cc
  __int64 v7; // rbx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  void *v11; // rcx
  unsigned int v12; // ebx
  char *v13; // rcx
  unsigned int v14; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  result = KeGetCurrentPrcb();
  if ( (struct _KPRCB *)qword_1404DDB38 == result )
  {
    _InterlockedIncrement(&KdPrintSkippedCount);
    return result;
  }
  _InterlockedIncrement((_DWORD *)&KdpPrintSpinLock + 1);
  while ( (_DWORD)KdpPrintSpinLock )
    _mm_pause();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( KdPrintCircularBuffer )
  {
    v4 = (unsigned int)KdPrintBufferSize >> 3;
    if ( (unsigned int)KdPrintBufferSize >> 3 > 0x200 )
      v4 = 512;
    v5 = *a1;
    v6 = v5 <= v4;
    if ( v5 > v4 )
    {
      _InterlockedIncrement(&KdPrintTruncatedCount);
      v6 = v5 <= v4;
    }
    if ( v6 )
      v4 = v5;
    v7 = v4;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, 0LL, 0LL);
    do
    {
      v9 = v7 + v8 - (unsigned int)KdPrintBufferSize;
      v10 = v8;
      if ( v7 + v8 < (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
        v9 = v7 + v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&KdPrintWritePointer, v9, v8);
    }
    while ( v8 != v10 );
    if ( v9 < v10 )
      _InterlockedIncrement(&KdPrintRolloverCount);
    v11 = (void *)*((_QWORD *)a1 + 1);
    if ( v7 + v10 > (unsigned __int64)KdPrintCircularBuffer + (unsigned int)KdPrintBufferSize )
    {
      v14 = KdPrintBufferSize + (_DWORD)KdPrintCircularBuffer - v10;
      KdpCopyMemoryChunks(v11, 4, (__int64)&v16);
      if ( (unsigned int)v16 < v14 )
        memset((void *)(v10 + (unsigned int)v16), 0, v14 - (unsigned int)v16);
      v12 = v7 - v14;
      if ( (_DWORD)v16 == v14 )
      {
        KdpCopyMemoryChunks((PVOID)(*((_QWORD *)a1 + 1) + v14), 4, (__int64)&v16);
        if ( (unsigned int)v16 >= v12 )
          goto LABEL_33;
        v12 -= v16;
        v13 = (char *)KdPrintCircularBuffer + (unsigned int)v16;
      }
      else
      {
        v13 = (char *)KdPrintCircularBuffer;
      }
    }
    else
    {
      KdpCopyMemoryChunks(v11, 4, (__int64)&v16);
      if ( (unsigned int)v16 >= (unsigned int)v7 )
        goto LABEL_33;
      v12 = v7 - v16;
      v13 = (char *)(v10 + (unsigned int)v16);
    }
    memset(v13, 0, v12);
  }
LABEL_33:
  _InterlockedDecrement((_DWORD *)&KdpPrintSpinLock + 1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = (struct _KPRCB *)CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
