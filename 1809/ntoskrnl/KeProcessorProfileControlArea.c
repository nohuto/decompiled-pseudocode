/*
 * XREFs of KeProcessorProfileControlArea @ 0x14028EF34
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeProcessorProfileControlArea(__int64 a1, int a2, char a3)
{
  char v5; // si
  _PROCESSOR_PROFILE_CONTROL_AREA *v6; // rbx
  _PROCESSOR_PROFILE_CONTROL_AREA *PoolWithTag; // rax
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v10; // rax
  _PROCESSOR_PROFILE_CONTROL_AREA *ProcessorProfileControlArea; // rax
  unsigned int v12; // edi
  _PROCESSOR_PROFILE_CONTROL_AREA *v13; // rax
  struct _KPRCB *v14; // rcx

  if ( a3 )
    return 3221225506LL;
  if ( a2 != 16 )
    return 3221225476LL;
  v5 = *(_BYTE *)(a1 + 8);
  v6 = 0LL;
  if ( v5 )
  {
    PoolWithTag = (_PROCESSOR_PROFILE_CONTROL_AREA *)ExAllocatePoolWithTag(
                                                       NonPagedPoolNxCacheAligned,
                                                       0x60uLL,
                                                       0x41435050u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_QWORD *)a1 = 0LL;
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, sizeof(_PROCESSOR_PROFILE_CONTROL_AREA));
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 && (v10 = __readmsr(0x1A0u), (v10 & 0x1080) == 0x80) )
  {
    if ( v5 )
    {
      ProcessorProfileControlArea = CurrentPrcb->ProcessorProfileControlArea;
      if ( ProcessorProfileControlArea )
      {
        *(_QWORD *)a1 = ProcessorProfileControlArea;
        v12 = -1073741302;
        goto LABEL_24;
      }
      CurrentPrcb->ProcessorProfileControlArea = v6;
      CurrentPrcb->ProfileEventIndexAddress = &v6->PebsDsSaveArea.PebsIndex;
      *(_QWORD *)a1 = v6;
      v6 = 0LL;
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
      v13 = CurrentPrcb->ProcessorProfileControlArea;
      if ( !v13 )
      {
        v12 = -1073741664;
        goto LABEL_24;
      }
      CurrentPrcb->ProcessorProfileControlArea = 0LL;
      v6 = v13;
      CurrentPrcb->ProfileEventIndexAddress = &CurrentPrcb->ProfileEventIndexAddress;
    }
    v12 = 0;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    v12 = -1073741637;
  }
LABEL_24:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v14);
  }
  __writecr8(CurrentIrql);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v12;
}
