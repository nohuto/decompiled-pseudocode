/*
 * XREFs of MiLockControlAreaSectionExtend @ 0x1400EAD68
 * Callers:
 *     MmExtendSection @ 0x14069C8C0 (MmExtendSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14009CBA0 (KeAbPreWait.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockControlAreaSectionExtend(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile LONG *v5; // r12
  _KLOCK_ENTRY *v6; // rbp
  KIRQL v7; // al
  __int64 **v8; // rbx
  KIRQL v9; // si
  PRTL_BALANCED_NODE v10; // rax
  __int64 result; // rax
  PRTL_BALANCED_NODE v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v14; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a2 + 8) == 16 )
    --CurrentThread->SpecialApcDisable;
  else
    --CurrentThread->KernelApcDisable;
  v5 = (volatile LONG *)(BugCheckParameter2 + 72);
  while ( 1 )
  {
    v6 = 0LL;
    v7 = ExAcquireSpinLockExclusive(v5);
    v8 = *(__int64 ***)(BugCheckParameter2 + 80);
    v9 = v7;
    if ( v8 )
    {
      do
      {
        if ( (*(_DWORD *)(a2 + 8) & (_DWORD)v8[1]) != 0 )
          break;
        v8 = (__int64 **)*v8;
      }
      while ( v8 );
      if ( v8 )
      {
        v12 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
        v6 = (_KLOCK_ENTRY *)v12;
        if ( v12 )
          KeAbPreWait((__int64)v12);
      }
    }
    *(_DWORD *)(a2 + 20) = 0;
    *(_WORD *)(a2 + 16) = 263;
    *(_BYTE *)(a2 + 18) = 6;
    *(_QWORD *)(a2 + 32) = a2 + 24;
    *(_QWORD *)(a2 + 24) = a2 + 24;
    *(_QWORD *)a2 = *(_QWORD *)(BugCheckParameter2 + 80);
    *(_QWORD *)(BugCheckParameter2 + 80) = a2;
    if ( !v8 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
    KeWaitForGate(a2 + 16, 18LL);
    if ( v6 )
    {
      KeAbPreAcquire(BugCheckParameter2, &v6->TreeNode, 0);
      KeAbPostReleaseEx(BugCheckParameter2, v6);
    }
  }
  v10 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  if ( v10 )
    BYTE2(v10[1].Left) |= 1u;
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v14);
  }
  result = v9;
  __writecr8(v9);
  return result;
}
