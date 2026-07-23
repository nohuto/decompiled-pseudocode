/*
 * XREFs of PspJobIoRateVolumeEntryRemoveAll @ 0x140090090
 * Callers:
 *     PspJobIoRateControlDisable @ 0x140607764 (PspJobIoRateControlDisable.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PspIoRateEntryVolumeDelete @ 0x1402EA520 (PspIoRateEntryVolumeDelete.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryRemoveAll(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // r14
  unsigned __int64 *v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // r8
  KIRQL v7; // bp
  unsigned __int64 v8; // rcx
  char v9; // al
  int v10; // esi
  _QWORD *v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = (unsigned __int64 *)(a1 + 1448);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v6 = v4[1];
  v7 = v5;
  v8 = *v4;
  if ( (v6 & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)v4;
  v9 = v4[1];
  v10 = v6 & 1;
  if ( v8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v8 )
        {
          v11 = (_QWORD *)v8;
          if ( v10 )
            v8 ^= *(_QWORD *)v8;
          else
            v8 = *(_QWORD *)v8;
          *v11 = 0LL;
        }
        v12 = *(_QWORD *)(v8 + 8);
        if ( !v12 )
          break;
        v13 = v8;
        if ( v10 )
          v8 ^= v12;
        else
          v8 = *(_QWORD *)(v8 + 8);
        *(_QWORD *)(v13 + 8) = 0LL;
      }
      v14 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v10 && v14 )
        v14 ^= v8;
      PspIoRateEntryVolumeDelete(v8, a2);
      if ( !v14 )
        break;
      v8 = v14;
    }
    v9 = *((_BYTE *)v4 + 8);
  }
  *v4 = 0LL;
  v4[1] = 0LL;
  if ( (v9 & 1) != 0 )
    *((_BYTE *)v4 + 8) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
