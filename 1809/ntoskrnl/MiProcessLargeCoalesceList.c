/*
 * XREFs of MiProcessLargeCoalesceList @ 0x1400905DC
 * Callers:
 *     MiRebuildLargeZeroPage @ 0x140090410 (MiRebuildLargeZeroPage.c)
 * Callees:
 *     MiCoalesceFreeLargePages @ 0x140090750 (MiCoalesceFreeLargePages.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiProcessLargeCoalesceList(__int64 a1, unsigned __int16 *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // ebx
  _QWORD *v9; // rdi
  __int64 result; // rax
  bool v11; // zf
  volatile LONG *v12; // r15
  KIRQL v13; // al
  unsigned __int16 v14; // cx
  __int64 v15; // r8
  KIRQL v16; // r14
  __int64 v17; // r9
  unsigned int v18; // edx
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = a4;
  v5 = 0;
  while ( 1 )
  {
    v9 = (_QWORD *)(a3 + 8 * (v5 + 1LL));
    if ( *v9 )
      break;
LABEL_3:
    ++v5;
    result = 64LL;
    if ( v5 >= 0x40 )
      return result;
  }
  result = MiCoalesceFreeLargePages(a1, *v9, v4);
  *v9 = 0LL;
  v11 = (*(_WORD *)(a3 + 2))-- == 1;
  if ( !v11 )
  {
    if ( a2[1] )
    {
      v12 = (volatile LONG *)(a1 + 6116);
      v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 6116));
      v14 = a2[1];
      v15 = *a2;
      v16 = v13;
      if ( v14 )
      {
        do
        {
          v17 = *(_QWORD *)&a2[4 * v15 + 4];
          if ( v17 )
          {
            if ( *v9 )
            {
              do
              {
                v19 = 0LL;
                if ( v5 != 63 )
                  v19 = v5 + 1;
                v5 = v19;
              }
              while ( *(_QWORD *)(a3 + 8 * v19 + 8) );
            }
            *(_QWORD *)&a2[4 * v15 + 4] = 0LL;
            v14 = --a2[1];
            v9 = (_QWORD *)(a3 + 8 * (v5 + 1LL));
            *v9 = v17;
            if ( ++*(_WORD *)(a3 + 2) == 64 )
              break;
          }
          v18 = v15 + 1;
          v11 = (_DWORD)v15 == 63;
          v15 = 0LL;
          if ( !v11 )
            v15 = v18;
        }
        while ( v14 );
        v4 = a4;
        v12 = (volatile LONG *)(a1 + 6116);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v12);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v16);
      v5 = -1;
    }
    goto LABEL_3;
  }
  return result;
}
