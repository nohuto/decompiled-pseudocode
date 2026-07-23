/*
 * XREFs of PopPepGetComponentVetoMasks @ 0x1402DCEB4
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x1406DB5F4 (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepGetComponentVetoMasks(__int64 a1, unsigned int a2, __int64 a3)
{
  volatile LONG *v3; // rbx
  __int64 v6; // rbp
  __int64 v7; // rsi
  KIRQL v8; // al
  int v9; // edi
  KIRQL v10; // r14
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (volatile LONG *)(a1 + 64);
  v6 = a1 + 200LL * a2;
  v7 = 0LL;
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v9 = *(_DWORD *)(a1 + 172);
  v10 = v8;
  ExReleaseSpinLockSharedFromDpcLevel(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v10);
  if ( v9 == 2 )
  {
    if ( *(_DWORD *)(v6 + 372) )
    {
      do
      {
        *(_DWORD *)(a3 + 4 * v7) = *(_DWORD *)(*(_QWORD *)(v6 + 376) + 24 * v7 + 16);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *(_DWORD *)(v6 + 372) );
    }
    LOBYTE(v7) = 1;
  }
  return v7;
}
