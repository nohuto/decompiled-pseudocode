/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C0005CC8
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0004650 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C0005250 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0005F98 (RaidAdapterFindUnit.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C00070AC (RaidAdapterReleaseStartIoLock.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0013970 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0013C1C (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0014A5C (RaidAdapterInsertUnit.c)
 *     RaidAdapterStopAdapter @ 0x1C0015BD8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0015C60 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStartMiniport @ 0x1C001909C (RaidAdapterStartMiniport.c)
 *     StorPortSynchronizeAccess @ 0x1C001EDD0 (StorPortSynchronizeAccess.c)
 *     RaidAdapterReInitialize @ 0x1C003466C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0034774 (RaidAdapterRemoveNormalChildren.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  PKINTERRUPT *v5; // r14
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4449) )
  {
    v3 = *(_QWORD *)(a1 + 4432);
    if ( *(_DWORD *)(a1 + 4416) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 4) - 1;
      if ( *(_DWORD *)(v3 + 4) != 1 )
      {
        v5 = (PKINTERRUPT *)(48LL * v4 + v3 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v5, *(_BYTE *)v3);
          v5 -= 6;
          --v4;
        }
        while ( v4 );
      }
    }
    v6 = *(struct _KINTERRUPT **)(v3 + 24);
    goto LABEL_7;
  }
  v6 = *(struct _KINTERRUPT **)(a1 + 664);
  if ( v6 )
LABEL_7:
    KeReleaseInterruptSpinLock(v6, a2);
}
