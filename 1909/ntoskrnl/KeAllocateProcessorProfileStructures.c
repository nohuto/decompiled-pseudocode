/*
 * XREFs of KeAllocateProcessorProfileStructures @ 0x140185DD0
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     KiIsIntelPebsSupported @ 0x140185F80 (KiIsIntelPebsSupported.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmCreateShadowMapping @ 0x14074EB40 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x140892398 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KeAllocateProcessorProfileStructures(
        unsigned int a1,
        __int64 a2,
        _PROCESSOR_PROFILE_CONTROL_AREA **a3,
        char a4)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // r12
  __int64 v10; // r14
  void *IndependentPages; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  _PROCESSOR_PROFILE_CONTROL_AREA *v14; // r9
  _PROCESSOR_PROFILE_CONTROL_AREA *v15; // rax
  unsigned __int64 *PebsGpCounterReset; // rax
  unsigned int v17; // esi
  struct _KPRCB *v18; // rcx
  struct _KPRCB *v19; // rcx
  char v21; // [rsp+78h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !a4 )
  {
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentPrcb->ProcessorProfileControlArea = *a3;
    CurrentPrcb->ProfileEventIndexAddress = &(*a3)->PebsDsSaveArea.As64Bit.PebsIndex;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  *a3 = 0LL;
  v21 = 0;
  v9 = a1;
  v10 = a2 * a1 + 160LL * a1;
  if ( KiKvaShadow )
    v10 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  IndependentPages = (void *)MmAllocateIndependentPagesEx(v10, 0, 0LL, 0);
  v12 = (unsigned __int64)IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v10);
    if ( !KiKvaShadow )
      goto LABEL_11;
    if ( (unsigned int)MmCreateShadowMapping(v12, v10) )
    {
      v21 = 1;
LABEL_11:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (unsigned __int8)KiIsIntelPebsSupported(KeGetCurrentPrcb()) )
      {
        v15 = *(_PROCESSOR_PROFILE_CONTROL_AREA **)(v13 + 24984);
        if ( v15 )
        {
          *a3 = v15;
          v17 = -1073741302;
        }
        else
        {
          if ( a1 )
          {
            PebsGpCounterReset = v14->PebsDsSaveArea.As32Bit.PebsGpCounterReset;
            do
            {
              *PebsGpCounterReset = v12;
              v12 += a2;
              PebsGpCounterReset += 20;
              --v9;
            }
            while ( v9 );
          }
          v12 = 0LL;
          *a3 = v14;
          v17 = 0;
        }
      }
      else
      {
        v17 = -1073741637;
      }
      goto LABEL_18;
    }
    v17 = -1073741670;
  }
  else
  {
    v17 = -1073741801;
  }
LABEL_18:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v19);
  }
  __writecr8(CurrentIrql);
  if ( v12 )
  {
    if ( v21 )
      MmDeleteShadowMapping(v12, v10);
    MmFreeIndependentPages(v12, v10);
  }
  return v17;
}
