/*
 * XREFs of EtwpReserveWithPmcCounters @ 0x14031185C
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwpLogContextSwapEvent @ 0x14017CB50 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall EtwpReserveWithPmcCounters(
        __int64 a1,
        __int16 a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        __int16 a6)
{
  int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v11; // cl
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  struct _KPRCB *v14; // rcx
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v18; // [rsp+70h] [rbp+8h]

  v18 = *(_QWORD *)(a1 + 1000);
  v7 = *(_DWORD *)(v18 + 44);
  v8 = 8 * (unsigned __int8)v7 + 16;
  v9 = v8 + a3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v11 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  v12 = EtwpReserveTraceBuffer((unsigned int *)a1, v9, a4, a5, a6);
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)(v12 + 8) = *a5;
    *(_WORD *)(v12 + 4) = v9;
    *(_WORD *)(v12 + 6) = a2;
    *(_DWORD *)v12 = (unsigned __int8)a6 | ((unsigned __int8)v7 << 8) | 0xC0110000;
    v16 = *(_QWORD *)(v18 + 8LL * KeGetPcr()->Prcb.Number + 48);
    if ( v16 )
      ((void (__fastcall *)(__int64, unsigned __int64))off_1403FF518[0])(v16, v12 + 16);
    else
      memset((void *)(v12 + 16), 0, 8LL * (unsigned __int8)v7);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
    return v13 + v8;
  }
  else
  {
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
}
