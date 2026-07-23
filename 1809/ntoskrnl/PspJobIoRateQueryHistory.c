/*
 * XREFs of PspJobIoRateQueryHistory @ 0x14000F310
 * Callers:
 *     PspQueryRateControlHistory @ 0x1405A8F5C (PspQueryRateControlHistory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspJobIoRateQueryHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  volatile LONG *v11; // rsi
  KIRQL v12; // al
  int v13; // ecx
  KIRQL v14; // di
  int v15; // edx
  int v16; // eax

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
  v11 = (volatile LONG *)(a1 + 1440);
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v13 = *(_DWORD *)(a1 + 1480);
  v14 = v12;
  if ( v13 )
  {
    v15 = *(_DWORD *)(a1 + 1472);
    *a2 = *(_QWORD *)(a1 + 1464);
    v16 = v15 - *(_DWORD *)(a1 + 1476);
    *(_DWORD *)(a1 + 1476) = v15;
    v10 = 0;
    *a4 = v16;
    *a3 = v13;
  }
  else
  {
    v10 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v11);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
  {
    _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick();
  }
  __writecr8(v14);
  return v10;
}
