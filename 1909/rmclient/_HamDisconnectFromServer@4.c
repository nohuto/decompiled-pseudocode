/*
 * XREFs of _HamDisconnectFromServer@4 @ 0x10006F70
 * Callers:
 *     <none>
 * Callees:
 *     _HampConnectionCleanup@4 @ 0x10006FC0 (_HampConnectionCleanup@4.c)
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 */

int __stdcall HamDisconnectFromServer(_DWORD *P)
{
  int v1; // eax
  void *v3; // ecx

  v1 = P[16];
  if ( v1 >= 0 )
  {
    if ( v1 > 3 )
    {
      if ( v1 == 6 )
      {
        v3 = (void *)P[3];
        if ( v3 )
          RmpClientWnfDestroySubscription(v3);
      }
    }
    else
    {
      HamIpcChannelRundown(P + 3);
    }
  }
  HampConnectionCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0;
}
