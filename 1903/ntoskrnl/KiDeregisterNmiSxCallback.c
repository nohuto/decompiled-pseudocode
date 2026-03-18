/*
 * XREFs of KiDeregisterNmiSxCallback @ 0x1402A5C20
 * Callers:
 *     KeDeregisterNmiCallback @ 0x1402A5820 (KeDeregisterNmiCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14018AE14 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiDeregisterNmiSxCallback(PVOID a1)
{
  int v2; // esi
  KIRQL v3; // al
  PVOID *v4; // rbx
  PVOID *v5; // rcx
  KIRQL v6; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v8; // edi
  struct _KPRCB *v10; // rcx
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
  v4 = (PVOID *)KiNmiCallbackListHead;
  v5 = &KiNmiCallbackListHead;
  v6 = v3;
  if ( !KiNmiCallbackListHead )
    goto LABEL_18;
  do
  {
    if ( v4[3] == a1 )
      break;
    v5 = v4;
    v4 = (PVOID *)*v4;
  }
  while ( v4 );
  if ( v4 && v4[3] == a1 )
  {
    *v5 = *v4;
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
    v8 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        if ( v2 )
        {
          KiSetSystemAffinityThreadToProcessor(v8, 0LL);
        }
        else
        {
          KiSetSystemAffinityThreadToProcessor(v8, &PreviousAffinity);
          v2 = 1;
        }
        ++v8;
      }
      while ( v8 < (unsigned int)KeNumberProcessors_0 );
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    ExFreePoolWithTag(v4, 0x494D4E4Bu);
    return 0LL;
  }
  else
  {
LABEL_18:
    KxReleaseSpinLock(&KiNmiCallbackListLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      v10 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v10);
    }
    __writecr8(v6);
    return 3221225480LL;
  }
}
