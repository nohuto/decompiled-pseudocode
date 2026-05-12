/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C0006FF4
 * Callers:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0005000 (RaidAdapterReleaseStartIoLock.c)
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     RaidAdapterRestartAdapter @ 0x1C0012D80 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1C0016CB0 (RaidAdapterStopAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00183A0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0018630 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0019464 (RaidAdapterInsertUnit.c)
 *     RaidAdapterStartMiniport @ 0x1C001F31C (RaidAdapterStartMiniport.c)
 *     StorPortSynchronizeAccess @ 0x1C0022AE0 (StorPortSynchronizeAccess.c)
 *     RaidAdapterReInitialize @ 0x1C0038A8C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0038B94 (RaidAdapterRemoveNormalChildren.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  PKINTERRUPT *v5; // r14
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4513) )
  {
    v3 = *(_QWORD *)(a1 + 4496);
    if ( *(_DWORD *)(a1 + 4480) == 2 )
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
  v6 = *(struct _KINTERRUPT **)(a1 + 688);
  if ( v6 )
LABEL_7:
    KeReleaseInterruptSpinLock(v6, a2);
}
