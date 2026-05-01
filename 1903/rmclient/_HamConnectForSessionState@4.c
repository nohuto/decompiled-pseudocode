/*
 * XREFs of _HamConnectForSessionState@4 @ 0x1000BF00
 * Callers:
 *     <none>
 * Callees:
 *     _HampConnectionCleanup@4 @ 0x10006FC0 (_HampConnectionCleanup@4.c)
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 */

int __stdcall HamConnectForSessionState(_DWORD *a1)
{
  int v1; // edi
  _DWORD *v2; // esi
  int v4; // eax
  _DWORD *v5; // ecx
  _DWORD *v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = 0;
  v1 = HampConnectionCreate(0, (int)dword_100036A0, 0, 0, &v6);
  if ( v1 < 0 )
  {
    v2 = v6;
  }
  else
  {
    v2 = 0;
    v1 = 0;
    *a1 = v6;
  }
  if ( v2 )
  {
    v4 = v2[16];
    if ( v4 >= 0 )
    {
      if ( v4 <= 3 )
      {
        HamIpcChannelRundown((int)(v2 + 3));
      }
      else if ( v4 == 6 )
      {
        v5 = (_DWORD *)v2[3];
        if ( v5 )
          RmpClientWnfDestroySubscription(v5);
      }
    }
    HampConnectionCleanup(v2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  return v1;
}
