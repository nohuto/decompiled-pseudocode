/*
 * XREFs of PspJobIoRateQueryHistory @ 0x140083CE8
 * Callers:
 *     PspQueryRateControlHistory @ 0x140616FFC (PspQueryRateControlHistory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspJobIoRateQueryHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  volatile LONG *v12; // rsi
  KIRQL v13; // al
  int v14; // ecx
  KIRQL v15; // di
  int v16; // edx
  int v17; // eax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !*(_QWORD *)(a1 + 1424) )
  {
    v8 = a1 + 1448;
    v9 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    {
      if ( !v9 )
        return (unsigned int)-1073741275;
      v9 ^= v8;
    }
    if ( !v9 )
      return (unsigned int)-1073741275;
  }
  v12 = (volatile LONG *)(a1 + 1440);
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v14 = *(_DWORD *)(a1 + 1480);
  v15 = v13;
  if ( v14 )
  {
    v16 = *(_DWORD *)(a1 + 1472);
    *a2 = *(_QWORD *)(a1 + 1464);
    v17 = v16 - *(_DWORD *)(a1 + 1476);
    *(_DWORD *)(a1 + 1476) = v16;
    v10 = 0;
    *a4 = v17;
    *a3 = v14;
  }
  else
  {
    v10 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v15);
  return v10;
}
