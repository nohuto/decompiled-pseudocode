/*
 * XREFs of KeProcessorProfileControlArea @ 0x1402A5594
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     KiIsIntelPebsSupported @ 0x140185F80 (KiIsIntelPebsSupported.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeProcessorProfileControlArea(__int64 a1, int a2, char a3)
{
  char v5; // si
  char *v6; // rbx
  char *PoolWithTag; // rax
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // r8
  unsigned __int8 v10; // r9
  unsigned int v11; // edi
  __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( a3 )
    return 3221225506LL;
  if ( a2 != 16 )
    return 3221225476LL;
  v5 = *(_BYTE *)(a1 + 8);
  v6 = 0LL;
  if ( v5 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0xA0uLL, 0x41435050u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_QWORD *)a1 = 0LL;
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0xA0uLL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( !KiIsIntelPebsSupported((__int64)KeGetCurrentPrcb()) )
  {
    *(_QWORD *)a1 = 0LL;
    v11 = -1073741637;
    goto LABEL_20;
  }
  if ( v5 )
  {
    v12 = *(_QWORD *)(v9 + 24984);
    if ( v12 )
    {
      *(_QWORD *)a1 = v12;
      v11 = -1073741302;
      goto LABEL_20;
    }
    *(_QWORD *)(v9 + 24984) = v6;
    *(_QWORD *)(v9 + 24992) = v6 + 40;
    *(_QWORD *)a1 = v6;
    v6 = 0LL;
    goto LABEL_19;
  }
  *(_QWORD *)a1 = 0LL;
  if ( *(_QWORD *)(v9 + 24984) )
  {
LABEL_19:
    v11 = 0;
    goto LABEL_20;
  }
  v11 = -1073741664;
LABEL_20:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= v10 && CurrentIrql < v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v11;
}
