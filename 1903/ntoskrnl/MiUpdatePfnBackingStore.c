/*
 * XREFs of MiUpdatePfnBackingStore @ 0x14014AF94
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiTransferSoftwarePte @ 0x1400DBA04 (MiTransferSoftwarePte.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 v4; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  int v11; // r8d
  bool v12; // zf
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = 0;
  if ( !a4 )
    v4 = MiLockPageInline(a1);
  MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), a2, a3);
  LODWORD(CurrentThread) = MiPteInShadowRange(a1 + 16);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v11 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_4;
      v12 = (v10 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_4;
      v12 = (v10 & 1) == 0;
    }
    if ( !v12 )
    {
      LOBYTE(CurrentThread) = 0;
      v10 |= 0x8000000000000000uLL;
    }
  }
LABEL_4:
  *(_QWORD *)(a1 + 16) = v10;
  if ( v11 )
    LOBYTE(CurrentThread) = MiWritePteShadow(a1 + 16);
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    LOBYTE(CurrentThread) = v4;
    __writecr8(v4);
  }
  return (char)CurrentThread;
}
