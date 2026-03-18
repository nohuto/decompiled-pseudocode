/*
 * XREFs of MiMarkMdlComplete @ 0x1402C7278
 * Callers:
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiLocateLockedVadEvent @ 0x1400ACF18 (MiLocateLockedVadEvent.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  __int64 **LockedVadEvent; // rax
  __int64 v3; // r8
  _QWORD *v4; // r14
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 *i; // rdi
  __int64 v8; // rbx
  unsigned __int8 v9; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  bool v11; // cc

  LockedVadEvent = MiLocateLockedVadEvent(a2, 8);
  v4 = (_QWORD *)(v3 + 48);
  v5 = (unsigned __int64)*(unsigned int *)(v3 + 40) >> 12;
  v6 = 0;
  for ( i = LockedVadEvent[1]; v6 < v5; LODWORD(LockedVadEvent) = v6 )
  {
    v8 = 48LL * *v4 - 0x58000000000LL;
    v9 = MiLockPageInline(v8);
    *(_BYTE *)(v8 + 34) |= 0x10u;
    *(_BYTE *)(v8 + 34) &= ~0x20u;
    *(_QWORD *)v8 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v9);
    ++v6;
    ++v4;
  }
  i[11] = 0LL;
  v11 = *((_DWORD *)i + 44) <= 1;
  *((_DWORD *)i + 20) = -1073741670;
  if ( !v11 )
    LODWORD(LockedVadEvent) = KeSetEvent((PRKEVENT)(i + 7), 0, 0);
  return (int)LockedVadEvent;
}
