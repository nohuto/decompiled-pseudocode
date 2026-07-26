/*
 * XREFs of ndisWaitForExternalDriver @ 0x1C0103A24
 * Callers:
 *     ?WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z @ 0x1C01034B0 (-WaitSynchronously@NdisWatchdogState@@QEAAXPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ndisFindSomeoneToBlame @ 0x1C010357C (ndisFindSomeoneToBlame.c)
 *     ndisWaitForAllProcessorsIdle @ 0x1C0103838 (ndisWaitForAllProcessorsIdle.c)
 *     ndisWaitForEvent @ 0x1C0103964 (ndisWaitForEvent.c)
 */

char __fastcall ndisWaitForExternalDriver(void *a1, unsigned int a2, unsigned int a3, ULONG_PTR a4, int a5)
{
  unsigned int v5; // ebx

  v5 = a2;
  if ( a2 > 0x1388 )
  {
    if ( ndisWaitForEvent(a1, 5000LL) )
      return 1;
    v5 -= 5000;
  }
  ndisWaitForAllProcessorsIdle();
  if ( !ndisWaitForEvent(a1, v5) )
  {
    ndisWaitForAllProcessorsIdle();
    if ( !ndisWaitForEvent(a1, 0LL) )
    {
      ndisFindSomeoneToBlame(a3, a4, a5, (_LIST_ENTRY *)KeGetCurrentThread());
      return 0;
    }
  }
  return 1;
}
