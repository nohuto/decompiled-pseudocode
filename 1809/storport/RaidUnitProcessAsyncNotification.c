/*
 * XREFs of RaidUnitProcessAsyncNotification @ 0x1C004A404
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001FA0 (RaidAdapterDeferredRoutine.c)
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 */

__int64 __fastcall RaidUnitProcessAsyncNotification(__int64 a1, int a2, PIO_WORKITEM *a3)
{
  unsigned int v4; // ebx
  __int64 Unit; // rax

  v4 = 0;
  Unit = RaidAdapterFindUnit(a1, a2);
  if ( Unit && (*(_BYTE *)(Unit + 448) & 4) != 0 && (*(_DWORD *)(Unit + 1824) & 4) != 0 )
  {
    if ( a3 && *a3 )
      IoQueueWorkItem(*a3, (PIO_WORKITEM_ROUTINE)RaUnitAsyncNotificationWorkItemRoutine, CriticalWorkQueue, a3);
    else
      return (unsigned int)-1056964602;
  }
  else
  {
    return (unsigned int)-1056964601;
  }
  return v4;
}
