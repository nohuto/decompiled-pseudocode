/*
 * XREFs of RtlpHpVaMgrCtxAllocatorReference @ 0x14015A5B4
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x14015A4CC (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxStart @ 0x14017A1AC (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x14015A6C8 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     RtlpHpVaMgrStart @ 0x140180C04 (RtlpHpVaMgrStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorReference(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile LONG *v3; // rbp
  unsigned int v6; // ebx
  KIRQL v8; // si
  __int64 v9; // rax
  __int64 v10; // rbx
  __int16 v12; // cx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = (volatile LONG *)(a1 + 2144);
  v6 = a3 >> 20;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2144));
  v9 = RtlpHpVaMgrCtxAllocatorFind(a1, a2, v6, &v14);
  v10 = v9;
  if ( v9 )
  {
    v12 = *(_WORD *)(v9 + 42);
    if ( v12 != -1 )
    {
      *(_WORD *)(v9 + 42) = v12 + 1;
      goto LABEL_5;
    }
    goto LABEL_10;
  }
  if ( v14 )
  {
    v10 = v14;
    if ( (int)RtlpHpVaMgrStart(v14, a1, a2, a3, ((int)v14 - (int)a1 - 2160) / 48) >= 0 )
    {
      ++*(_DWORD *)(a1 + 2152);
      goto LABEL_5;
    }
LABEL_10:
    v10 = 0LL;
  }
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v8);
  if ( v10 )
    return *(unsigned __int8 *)(v10 + 44);
  else
    return 0xFFFFFFFFLL;
}
