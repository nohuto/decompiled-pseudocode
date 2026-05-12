/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C0005B34
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0004650 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C0005250 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0005F98 (RaidAdapterFindUnit.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C00070DC (RaidAdapterAcquireStartIoLock.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0013970 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0013C1C (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0014A5C (RaidAdapterInsertUnit.c)
 *     RaidAdapterStopAdapter @ 0x1C0015BD8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0015C60 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStartMiniport @ 0x1C001909C (RaidAdapterStartMiniport.c)
 *     StorAcquireSpinLockEx @ 0x1C001E080 (StorAcquireSpinLockEx.c)
 *     StorPortSynchronizeAccess @ 0x1C001EDD0 (StorPortSynchronizeAccess.c)
 *     RaidAdapterReInitialize @ 0x1C003466C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0034774 (RaidAdapterRemoveNormalChildren.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  KIRQL v1; // bl
  __int64 v3; // rsi
  unsigned int i; // edi
  struct _KINTERRUPT *v6; // rcx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4449) )
  {
    v3 = *(_QWORD *)(a1 + 4432);
    v1 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24));
    if ( *(_DWORD *)(a1 + 4416) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v3 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 48LL * i + 24));
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 664);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
  }
  return v1;
}
