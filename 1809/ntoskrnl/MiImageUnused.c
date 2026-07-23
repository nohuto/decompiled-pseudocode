/*
 * XREFs of MiImageUnused @ 0x1401278F0
 * Callers:
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x140650760 (MiRelocateImageAgain.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiImageUnused(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rax
  KIRQL v6; // di
  int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)a3 = -1;
  if ( *(_QWORD *)(v5 + 32) )
  {
    if ( a2 == 1 )
      v6 = 17;
    else
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    LODWORD(v5) = *(_DWORD *)(a1 + 88);
    if ( (_DWORD)v5 != -1 )
    {
      *(_DWORD *)a3 = v5;
      LODWORD(v5) = *(_DWORD *)(a1 + 92);
      *(_DWORD *)(a3 + 4) = (unsigned __int16)v5;
      *(_DWORD *)(a3 + 8) = ((unsigned int)v5 >> 22) & 3;
      v7 = *(_DWORD *)(a1 + 56);
      if ( (v7 & 0x10000000) != 0 )
      {
        LOBYTE(v5) = (v5 & 0x40000) != 0;
        *(_DWORD *)(a1 + 56) = v7 & 0xEFFFFFFF;
        *(_BYTE *)(a3 + 13) = v5;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
    }
    *(_DWORD *)(a1 + 92) &= ~0x1000000u;
    if ( v6 != 17 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      LOBYTE(v5) = v6;
      __writecr8(v6);
    }
  }
  return v5;
}
