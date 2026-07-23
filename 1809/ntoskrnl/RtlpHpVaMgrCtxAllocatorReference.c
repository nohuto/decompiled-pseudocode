/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x14014154C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x140141460 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x140170438 (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x140141658 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     RtlpHpVaMgrStart @ 0x140176A14 (RtlpHpVaMgrStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  KIRQL v7; // si
  __int64 v8; // rax
  __int64 v9; // rbx
  __int16 v11; // cx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3 >> 20;
  v7 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 96), 1);
  v8 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, v5, &v13);
  v9 = v8;
  if ( v8 )
  {
    v11 = *(_WORD *)(v8 + 42);
    if ( v11 != -1 )
    {
      *(_WORD *)(v8 + 42) = v11 + 1;
      goto LABEL_5;
    }
    goto LABEL_10;
  }
  if ( v13 )
  {
    v9 = v13;
    if ( (int)RtlpHpVaMgrStart(v13, a1, a2, a3, ((int)v13 - (int)a1 - 112) / 48) >= 0 )
    {
      ++*(_DWORD *)(a1 + 104);
      goto LABEL_5;
    }
LABEL_10:
    v9 = 0LL;
  }
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 96));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  if ( v9 )
    return *(unsigned __int8 *)(v9 + 44);
  else
    return 0xFFFFFFFFLL;
}
