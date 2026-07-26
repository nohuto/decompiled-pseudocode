/*
 * XREFs of ndisMWakeUpDpcX @ 0x1C0010F50
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisSetWakeUpTimer @ 0x1C001C960 (ndisSetWakeUpTimer.c)
 *     ndisTraceDpcEnd @ 0x1C007E800 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C007E8E8 (ndisTraceDpcStart.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        char *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // r15
  char v6; // di
  char v7; // r12
  char v8; // r14
  int v9; // edx
  KIRQL v10; // r13
  struct _NDIS_REFCOUNT_BLOCK *v11; // rcx
  int v12; // ecx
  char v13; // al
  WORK_QUEUE_TYPE v14; // edx
  __int64 v15; // rax
  __int64 Clock; // [rsp+78h] [rbp+10h]

  v5 = 0;
  Clock = 0LL;
  v6 = 1;
  if ( HIBYTE(dword_1C00E8058) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4LL);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  if ( *((int *)FunctionContext + 30) < 0 || (*((_DWORD *)FunctionContext + 31) & 0x20080000) != 0 )
  {
    *((_QWORD *)FunctionContext + 65) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    goto LABEL_19;
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v8 = 1;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)FunctionContext + 554);
  if ( !FunctionContext[4444] )
  {
    v11 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)FunctionContext + 611);
    if ( v11 )
      NdisReferenceWithTag(v11, 0x53u);
    v12 = *((_DWORD *)FunctionContext + 1110);
    *((_DWORD *)FunctionContext + 1110) = v12 + 1;
    if ( v12 != -1 )
      goto LABEL_9;
    *((_DWORD *)FunctionContext + 1110) = -1;
  }
  v8 = 0;
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      20,
      12,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)FunctionContext,
      *((_DWORD *)FunctionContext + 1110));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)FunctionContext + 554, v10);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)FunctionContext + 492, 1, 0) )
    {
      ndisDereferenceMiniport((__int64)FunctionContext, 0x53u);
    }
    else
    {
      v13 = FunctionContext[32];
      if ( (unsigned __int8)v13 > 6u || v13 == 6 && (unsigned __int8)FunctionContext[33] >= 0x50u )
        v14 = CustomPriorityWorkQueue|NormalWorkQueue;
      else
        v14 = CustomPriorityWorkQueue|RealTimeWorkQueue|0x8;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(FunctionContext + 1936), v14);
    }
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
LABEL_19:
  if ( v6 )
    KeSetEvent((PRKEVENT)(FunctionContext + 1912), 0, 0);
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
    if ( *((int *)FunctionContext + 30) >= 0 && (*((_DWORD *)FunctionContext + 31) & 0x20080000) == 0 )
      ndisSetWakeUpTimer(FunctionContext);
    *((_QWORD *)FunctionContext + 65) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  }
  if ( v7 )
  {
    v15 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(FunctionContext, 4LL, v15 - Clock);
  }
}
