/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C0005B84
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C00052A0 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000712C (RaidAdapterAcquireStartIoLock.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0013A00 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0013CAC (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0014AEC (RaidAdapterInsertUnit.c)
 *     RaidAdapterStopAdapter @ 0x1C0015BA4 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0015C2C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStartMiniport @ 0x1C001C5B8 (RaidAdapterStartMiniport.c)
 *     StorAcquireSpinLockEx @ 0x1C001EED0 (StorAcquireSpinLockEx.c)
 *     StorPortSynchronizeAccess @ 0x1C001FC20 (StorPortSynchronizeAccess.c)
 *     RaidAdapterReInitialize @ 0x1C0035A5C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0035B64 (RaidAdapterRemoveNormalChildren.c)
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
