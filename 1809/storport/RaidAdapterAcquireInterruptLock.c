/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C0006E60
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00049A0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0006268 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     RaidAdapterRestartAdapter @ 0x1C0012D80 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1C0016CB0 (RaidAdapterStopAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00183A0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0018630 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0019464 (RaidAdapterInsertUnit.c)
 *     StorAcquireSpinLockEx @ 0x1C001B620 (StorAcquireSpinLockEx.c)
 *     RaidAdapterStartMiniport @ 0x1C001F31C (RaidAdapterStartMiniport.c)
 *     StorPortSynchronizeAccess @ 0x1C0022AE0 (StorPortSynchronizeAccess.c)
 *     RaidAdapterReInitialize @ 0x1C0038A8C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0038B94 (RaidAdapterRemoveNormalChildren.c)
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
  if ( *(_BYTE *)(a1 + 4513) )
  {
    v3 = *(_QWORD *)(a1 + 4496);
    v1 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24));
    if ( *(_DWORD *)(a1 + 4480) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v3 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 48LL * i + 24));
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 688);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
  }
  return v1;
}
