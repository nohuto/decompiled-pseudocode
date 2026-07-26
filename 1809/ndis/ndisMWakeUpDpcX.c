/*
 * XREFs of ndisMWakeUpDpcX @ 0x1C000F720
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ndisSetWakeUpTimer @ 0x1C00153E8 (ndisSetWakeUpTimer.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C0050E24 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F0C (ndisTraceDpcStart.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        unsigned int *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // r15
  char v6; // di
  char v7; // r13
  char v8; // r14
  KIRQL v9; // r12
  struct _NDIS_REFCOUNT_BLOCK *v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned __int8 v13; // al
  WORK_QUEUE_TYPE v14; // edx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 Clock; // [rsp+58h] [rbp+10h]

  v5 = 0;
  Clock = 0LL;
  v6 = 1;
  if ( HIBYTE(dword_1C00A2098) )
  {
    v7 = 1;
    ndisTraceDpcStart(FunctionContext, 4LL);
    Clock = WmiGetClock(0LL, 0LL, v15);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
  FunctionContext[466] = 656250;
  if ( (FunctionContext[30] & 0x80000000) != 0 || (FunctionContext[31] & 0x20080000) != 0 )
  {
    *((_QWORD *)FunctionContext + 65) = 0LL;
    FunctionContext[466] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    goto LABEL_19;
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  FunctionContext[466] = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v8 = 1;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)FunctionContext + 559);
  if ( !*((_BYTE *)FunctionContext + 4484) )
  {
    v10 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)FunctionContext + 616);
    if ( v10 )
      NdisReferenceWithTag(v10, 0x53u);
    v11 = FunctionContext[1120];
    FunctionContext[1120] = v11 + 1;
    if ( v11 != -1 )
      goto LABEL_9;
    FunctionContext[1120] = -1;
  }
  v8 = 0;
LABEL_9:
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(12LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, FunctionContext, FunctionContext[1120]);
  KeReleaseSpinLock((PKSPIN_LOCK)FunctionContext + 559, v9);
  if ( v8 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)FunctionContext + 494, 1, 0) )
    {
      ndisDereferenceMiniport((__int64)FunctionContext, 0x53u);
    }
    else
    {
      v13 = *((_BYTE *)FunctionContext + 32);
      if ( v13 > 6u || v13 == 6 && *((_BYTE *)FunctionContext + 33) >= 0x50u )
        v14 = CustomPriorityWorkQueue|NormalWorkQueue;
      else
        v14 = CustomPriorityWorkQueue|RealTimeWorkQueue|0x8;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(FunctionContext + 486), v14);
    }
  }
  else
  {
    v5 = 1;
  }
  v6 = v5;
LABEL_19:
  if ( v6 )
    KeSetEvent((PRKEVENT)FunctionContext + 80, 0, 0);
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
    FunctionContext[466] = 656316;
    if ( (FunctionContext[30] & 0x80000000) == 0 && (FunctionContext[31] & 0x20080000) == 0 )
      ndisSetWakeUpTimer(FunctionContext);
    *((_QWORD *)FunctionContext + 65) = 0LL;
    FunctionContext[466] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  }
  if ( v7 )
  {
    v16 = WmiGetClock(0LL, 0LL, v12);
    ndisTraceDpcEnd(FunctionContext, 4LL, v16 - Clock);
  }
}
