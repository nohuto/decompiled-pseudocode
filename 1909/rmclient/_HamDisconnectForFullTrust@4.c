/*
 * XREFs of _HamDisconnectForFullTrust@4 @ 0x100125C0
 * Callers:
 *     <none>
 * Callees:
 *     _HampConnectionCleanup@4 @ 0x10006FC0 (_HampConnectionCleanup@4.c)
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 */

int __stdcall HamDisconnectForFullTrust(_DWORD *P)
{
  int v1; // eax
  _DWORD *v2; // ecx

  v1 = P[16];
  if ( v1 >= 0 )
  {
    if ( v1 <= 3 )
    {
      HamIpcChannelRundown((int)(P + 3));
    }
    else if ( v1 == 6 )
    {
      v2 = (_DWORD *)P[3];
      if ( v2 )
        RmpClientWnfDestroySubscription(v2);
    }
  }
  HampConnectionCleanup(P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0;
}
