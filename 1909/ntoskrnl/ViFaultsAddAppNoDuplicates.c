/*
 * XREFs of ViFaultsAddAppNoDuplicates @ 0x14097A0F8
 * Callers:
 *     ViFaultsAddAllApps @ 0x140979F90 (ViFaultsAddAllApps.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x14066AA90 (RtlUpcaseUnicodeString.c)
 *     ViFaultsIsAppTarget @ 0x14097A5E8 (ViFaultsIsAppTarget.c)
 */

__int64 __fastcall ViFaultsAddAppNoDuplicates(void *Src, size_t a2)
{
  size_t v2; // rdi
  unsigned int v4; // ebp
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v6; // rsi
  const WCHAR *p_Length; // rbx
  KIRQL v8; // bl
  UNICODE_STRING **v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a2;
  v4 = 0;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * a2 + 34, 0x41466656u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    p_Length = &PoolWithTag[2].Length;
    memmove(&PoolWithTag[2], Src, v2 * 2);
    p_Length[v2] = 0;
    RtlInitUnicodeString(v6 + 1, p_Length);
    RtlUpcaseUnicodeString(v6 + 1, v6 + 1, 0);
    v8 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
    if ( (unsigned int)ViFaultsIsAppTarget(&v6[1]) )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      v9 = (UNICODE_STRING **)qword_1404358A8;
      if ( *(PVOID **)qword_1404358A8 != &ViFaultApplicationsList )
        __fastfail(3u);
      *(_QWORD *)&v6->Length = &ViFaultApplicationsList;
      v6->Buffer = (wchar_t *)v9;
      *v9 = v6;
      qword_1404358A8 = (__int64)v6;
    }
    KxReleaseSpinLock(&ViFaultInjectionLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
