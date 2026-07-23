/*
 * XREFs of PopPepGetDevicePlatformStateDependents @ 0x14014184C
 * Callers:
 *     PopDiagTraceDeviceVerboseRundown @ 0x1406DB41C (PopDiagTraceDeviceVerboseRundown.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepGetDevicePlatformStateDependents(__int64 a1, _DWORD *a2)
{
  KIRQL v4; // si
  int *v6; // r8
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int i; // r8d
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  *a2 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v6 = (int *)(a1 + 144);
    v7 = 3LL;
    do
    {
      v8 = *v6++;
      *a2 |= v8;
      --v7;
    }
    while ( v7 );
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v10 = 0LL;
      v11 = 200LL * i;
      if ( *(_DWORD *)(v11 + a1 + 372) )
      {
        do
        {
          v12 = 3 * v10;
          v10 = (unsigned int)(v10 + 1);
          *a2 |= *(_DWORD *)(*(_QWORD *)(v11 + a1 + 376) + 8 * v12 + 16);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v11 + a1 + 372) );
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v4);
  return 0;
}
