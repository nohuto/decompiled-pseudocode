/*
 * XREFs of MiUpdatePfnBackingStore @ 0x14014F6B8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_4;
      v12 = (v10 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
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
    LOBYTE(CurrentThread) = MiWritePteShadow(a1 + 16, v10);
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
