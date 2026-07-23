/*
 * XREFs of KiPreprocessFlushTb @ 0x1400EDBB0
 * Callers:
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1400EDC44 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsFlushEntire @ 0x140293FF0 (KiIsFlushEntire.c)
 */

char __fastcall KiPreprocessFlushTb(char a1, unsigned int a2, int a3, _BYTE *a4, unsigned __int8 *a5)
{
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // di
  struct _KPRCB *v11; // rcx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_2;
  if ( (HvlEnlightenments & 2) != 0 )
    goto LABEL_8;
  if ( a1 )
  {
    if ( (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire(a2) )
      goto LABEL_8;
  }
  else if ( (KiFlushPcid & 3) == 1 )
  {
    goto LABEL_8;
  }
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
LABEL_2:
    *a4 = 0;
    return 0;
  }
  if ( a3 )
  {
LABEL_8:
    *a4 = 1;
    return 0;
  }
  _InterlockedOr(v12, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  *a5 = CurrentIrql;
  if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                       CurrentPrcb,
                       &CurrentThread->ApcState.Process->ActiveProcessors) )
  {
    v10 = *a5;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v11);
    }
    __writecr8(v10);
    *a4 = 1;
    return 0;
  }
  *a4 = 0;
  return 1;
}
