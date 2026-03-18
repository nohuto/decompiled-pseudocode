/*
 * XREFs of PspJobIoRateVolumeEntryRemoveAll @ 0x1400EBA88
 * Callers:
 *     PspJobIoRateControlDisable @ 0x14068A5A4 (PspJobIoRateControlDisable.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PspIoRateEntryVolumeDelete @ 0x1403078C8 (PspIoRateEntryVolumeDelete.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryRemoveAll(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // r14
  __int64 v4; // rdi
  KIRQL v5; // bp
  unsigned __int64 v6; // rcx
  char v7; // al
  int v8; // esi
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = a1 + 1448;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v6 = *(_QWORD *)v4;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v6 )
    v6 ^= v4;
  v7 = *(_BYTE *)(v4 + 8);
  v8 = v7 & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v6 )
        {
          v9 = (_QWORD *)v6;
          if ( v8 )
            v6 ^= *(_QWORD *)v6;
          else
            v6 = *(_QWORD *)v6;
          *v9 = 0LL;
        }
        v10 = *(_QWORD *)(v6 + 8);
        if ( !v10 )
          break;
        v11 = v6;
        if ( v8 )
          v6 ^= v10;
        else
          v6 = *(_QWORD *)(v6 + 8);
        *(_QWORD *)(v11 + 8) = 0LL;
      }
      v12 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v8 && v12 )
        v12 ^= v6;
      PspIoRateEntryVolumeDelete(v6, a2);
      if ( !v12 )
        break;
      v6 = v12;
    }
    v7 = *(_BYTE *)(v4 + 8);
  }
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  if ( (v7 & 1) != 0 )
    *(_BYTE *)(v4 + 8) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
