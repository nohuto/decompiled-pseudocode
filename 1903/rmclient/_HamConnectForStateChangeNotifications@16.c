/*
 * XREFs of _HamConnectForStateChangeNotifications@16 @ 0x1000C010
 * Callers:
 *     <none>
 * Callees:
 *     _HampConnectionCleanup@4 @ 0x10006FC0 (_HampConnectionCleanup@4.c)
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 */

int __stdcall HamConnectForStateChangeNotifications(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  _DWORD *v5; // esi
  int v7; // eax
  _DWORD *v8; // ecx
  _DWORD v9[2]; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v10; // [esp+Ch] [ebp-4h] BYREF

  v10 = 0;
  if ( !a1 )
    return -1073741585;
  v9[0] = a1;
  v9[1] = a2;
  v4 = HampConnectionCreate((int)v9, (int)dword_10003580, 0, a3, &v10);
  if ( v4 < 0 )
  {
    v5 = v10;
  }
  else
  {
    v5 = 0;
    v4 = 0;
    *a4 = v10;
  }
  if ( v5 )
  {
    v7 = v5[16];
    if ( v7 >= 0 )
    {
      if ( v7 <= 3 )
      {
        HamIpcChannelRundown((int)(v5 + 3));
      }
      else if ( v7 == 6 )
      {
        v8 = (_DWORD *)v5[3];
        if ( v8 )
          RmpClientWnfDestroySubscription(v8);
      }
    }
    HampConnectionCleanup(v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  return v4;
}
