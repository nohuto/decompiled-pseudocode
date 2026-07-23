/*
 * XREFs of MiGetEnclavePage @ 0x1402BDF38
 * Callers:
 *     MiAllocateMdlPagesByLists @ 0x140029924 (MiAllocateMdlPagesByLists.c)
 *     MiGetPageForEnclave @ 0x1402BE1BC (MiGetPageForEnclave.c)
 *     MiReserveEnclavePages @ 0x1402BE9C8 (MiReserveEnclavePages.c)
 *     MiCreateHardwareEnclave @ 0x14085ADF0 (MiCreateHardwareEnclave.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F82B8 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetEnclavePage(__int64 a1, int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KPRCB *v10; // rcx
  __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]
  int v17; // [rsp+78h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v15 = 0LL;
  v16 = a1 + 4128;
  KxAcquireQueuedSpinLock((__int64)&v15, (volatile __int64 *)(a1 + 4128), a3);
  while ( a2 || *(_QWORD *)(a1 + 4096) )
  {
    v6 = *(_QWORD *)(a1 + 4112);
    v7 = 48 * v6 - 0x58000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      goto LABEL_20;
    KxReleaseQueuedSpinLock(&v15);
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17, v8, v9);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v16 = a1 + 4128;
    v15 = 0LL;
    KxAcquireQueuedSpinLock((__int64)&v15, (volatile __int64 *)(a1 + 4128), v9);
    if ( (*(_BYTE *)(v7 + 35) & 0x10) != 0 )
    {
LABEL_20:
      v12 = *(_QWORD *)v7 & 0xFFFFFFFFFLL;
      v13 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL;
      if ( v12 == 0xFFFFFFFFFLL )
        *(_QWORD *)(a1 + 4120) = v13;
      else
        MiSetPfnBlink(48 * v12 - 0x58000000000LL, *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFLL, 0);
      if ( v13 == 0xFFFFFFFFFLL )
        *(_QWORD *)(a1 + 4112) = v12;
      else
        *(_QWORD *)(48 * v13 - 0x58000000000LL) = v12 | *(_QWORD *)(48 * v13 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
      if ( !a2 )
        --*(_QWORD *)(a1 + 4096);
      KxReleaseQueuedSpinLock(&v15);
      *(_BYTE *)(v7 + 35) &= ~0x10u;
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      result = v6;
      goto LABEL_34;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  KxReleaseQueuedSpinLock(&v15);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  result = -1LL;
LABEL_34:
  __writecr8(CurrentIrql);
  return result;
}
