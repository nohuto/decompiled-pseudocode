/*
 * XREFs of KiGenericCallDpcWorker @ 0x1401120F0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiGenericCallDpcWorker(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  unsigned __int8 CurrentIrql; // r15
  ULONG ActiveProcessorCount; // eax
  __int64 v7; // rbp
  __int64 *v8; // rdi
  ULONG_PTR v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG v15; // [rsp+60h] [rbp+8h] BYREF
  ULONG v16; // [rsp+68h] [rbp+10h] BYREF
  ULONG v17; // [rsp+6Ch] [rbp+14h]

  v2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v15 = ActiveProcessorCount;
  v17 = ActiveProcessorCount;
  v16 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 1 )
  {
    v7 = ActiveProcessorCount - 1;
    v8 = &qword_140543D48;
    do
    {
      v9 = *v8 + 22688;
      *(_QWORD *)(v9 + 24) = *a2;
      *(_QWORD *)(v9 + 32) = a2[1];
      KiInsertQueueDpc(v9, (__int64)&v15, (__int64)&v16, 0LL, 0);
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  ((void (__fastcall *)(__int64, _QWORD, ULONG *, ULONG *))*a2)(a1 + 22688, a2[1], &v15, &v16);
  while ( v15 )
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11, v10, v12) )
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
