/*
 * XREFs of MiDeleteExtentPfns @ 0x1402B5AC0
 * Callers:
 *     MiAddPhysicalMemory @ 0x14084C894 (MiAddPhysicalMemory.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6620 (MiPurgeBadFileOnlyPages.c)
 *     MiRemovePhysicalMemory @ 0x14084D54C (MiRemovePhysicalMemory.c)
 */

NTSTATUS __fastcall MiDeleteExtentPfns(__int64 a1)
{
  struct _KEVENT *v2; // rbx
  __int64 v3; // rbp
  struct _KEVENT *v4; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  NTSTATUS result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  do
  {
    MiPurgeBadFileOnlyPages();
    while ( qword_140438D28 )
      MiRemovePhysicalMemory(0LL, 0LL, 50LL);
    KeAcquireInStackQueuedSpinLock(&qword_14043D920, &LockHandle);
    v3 = qword_140438D28;
    if ( !qword_140438D28 )
    {
      if ( a1 )
      {
        byte_140438D68 = qword_140438D28;
        v2 = &stru_140438D50;
        KeSetEvent(&stru_140438D50, 0, 0);
      }
      else
      {
        v4 = &stru_140438D50;
        if ( byte_140438D68 != 1 )
          v4 = v2;
        v2 = v4;
      }
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  while ( v3 );
  if ( !a1 )
  {
    if ( v2 )
      return KeWaitForSingleObject(v2, WrPageIn, 0, 0, 0LL);
  }
  return result;
}
