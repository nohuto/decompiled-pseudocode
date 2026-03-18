/*
 * XREFs of KiGenericCallDpcWorker @ 0x140114AF0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     KiInsertQueueDpc @ 0x1400BCAF0 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiGenericCallDpcWorker(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned __int8 CurrentIrql; // r15
  ULONG ActiveProcessorCount; // eax
  __int64 v7; // rbp
  __int64 *v8; // rdi
  ULONG_PTR v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG v13; // [rsp+60h] [rbp+8h] BYREF
  ULONG v14; // [rsp+68h] [rbp+10h] BYREF
  ULONG v15; // [rsp+6Ch] [rbp+14h]

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v13 = ActiveProcessorCount;
  v15 = ActiveProcessorCount;
  v14 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 1 )
  {
    v7 = ActiveProcessorCount - 1;
    v8 = &qword_140573AC8;
    do
    {
      v9 = *v8 + 22688;
      *(_QWORD *)(v9 + 24) = *a2;
      *(_QWORD *)(v9 + 32) = a2[1];
      KiInsertQueueDpc(v9, (__int64)&v13, (__int64)&v14, 0LL, 0);
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  ((void (__fastcall *)(__int64, _QWORD, ULONG *, ULONG *))*a2)(a1 + 22688, a2[1], &v13, &v14);
  while ( v13 )
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
