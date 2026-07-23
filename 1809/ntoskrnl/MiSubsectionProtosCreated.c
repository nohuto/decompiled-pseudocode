/*
 * XREFs of MiSubsectionProtosCreated @ 0x1402B723C
 * Callers:
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B6B98 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSubsectionProtosCreated(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  KIRQL v9; // si
  __int64 v10; // r8
  __int64 *v11; // rcx
  int v12; // edx
  unsigned int v13; // edx
  __int64 *v14; // rbx
  int v15; // eax
  int v16; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)a1;
  KeAbPostRelease(a1);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v11 = *(__int64 **)(v4 + 80);
    *(_QWORD *)(v4 + 80) = 0LL;
    goto LABEL_9;
  }
  v12 = *(_DWORD *)(a1 + 52);
  if ( a4 )
  {
    v13 = v12 | 0x40000000;
LABEL_7:
    *(_DWORD *)(a1 + 52) = v13;
    goto LABEL_8;
  }
  if ( a3 == *(_DWORD *)(a1 + 44) - (v12 & 0x3FFFFFFF) )
  {
    v13 = v12 & 0xBFFFFFFF;
    goto LABEL_7;
  }
LABEL_8:
  v11 = *(__int64 **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
LABEL_9:
  if ( v11 )
  {
    do
    {
      v14 = (__int64 *)*v11;
      if ( v11 != (__int64 *)a2 )
      {
        v15 = *((_DWORD *)v11 + 2);
        *((_DWORD *)v11 + 3) = 1;
        if ( (v15 & 0x40) == 0 )
        {
          v16 = 1;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            v16 = 2;
          *((_DWORD *)v11 + 3) = v16;
          KeSignalGate((__int64)(v11 + 2), 1LL, v10);
        }
      }
      v11 = v14;
    }
    while ( v14 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v9;
  __writecr8(v9);
  return result;
}
