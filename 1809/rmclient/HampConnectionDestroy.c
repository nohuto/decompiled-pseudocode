/*
 * XREFs of HampConnectionDestroy @ 0x180005B58
 * Callers:
 *     HamDisconnectForFullTrust @ 0x180005B40 (HamDisconnectForFullTrust.c)
 *     HamConnectToServer @ 0x180007000 (HamConnectToServer.c)
 *     HampConnectionCreate @ 0x180007080 (HampConnectionCreate.c)
 *     HamConnectForExtendedExecution @ 0x1800073B0 (HamConnectForExtendedExecution.c)
 *     HamConnectForStateChangeNotifications @ 0x180007FF0 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForServicing @ 0x180008070 (HamConnectForServicing.c)
 *     HamConnectForDebugging @ 0x1800080D0 (HamConnectForDebugging.c)
 *     HamConnectForSessionState @ 0x180008150 (HamConnectForSessionState.c)
 *     HamConnectForFullTrust @ 0x18000EA10 (HamConnectForFullTrust.c)
 * Callees:
 *     HamIpcChannelRundown @ 0x180005BA8 (HamIpcChannelRundown.c)
 *     RmpClientWnfDestroySubscription @ 0x180005C6C (RmpClientWnfDestroySubscription.c)
 *     HampConnectionCleanup @ 0x180005F70 (HampConnectionCleanup.c)
 */

BOOLEAN __fastcall HampConnectionDestroy(__int64 a1)
{
  int v1; // eax
  void *v4; // rcx

  v1 = *(_DWORD *)(a1 + 112);
  if ( v1 >= 0 )
  {
    if ( v1 > 3 )
    {
      if ( v1 == 6 )
      {
        v4 = *(void **)(a1 + 16);
        if ( v4 )
          RmpClientWnfDestroySubscription(v4);
      }
    }
    else
    {
      HamIpcChannelRundown(a1 + 16);
    }
  }
  HampConnectionCleanup(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)a1);
}
