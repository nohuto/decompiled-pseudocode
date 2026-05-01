/*
 * XREFs of _HamConnectToServerEx@12 @ 0x10008300
 * Callers:
 *     _HamConnectToServer@8 @ 0x100081C0 (_HamConnectToServer@8.c)
 * Callees:
 *     _HampConnectionCleanup@4 @ 0x10006FC0 (_HampConnectionCleanup@4.c)
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 */

int __stdcall HamConnectToServerEx(int a1, int a2, _DWORD *a3)
{
  int v3; // edi
  _DWORD *v4; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // [esp+10h] [ebp-4h] BYREF

  v8 = 0;
  if ( !a1 )
    return -1073741585;
  v3 = HampConnectionCreate(a2, 0, &v8);
  if ( v3 < 0 )
  {
    v4 = v8;
  }
  else
  {
    v4 = 0;
    v3 = 0;
    *a3 = v8;
  }
  if ( v4 )
  {
    v6 = v4[16];
    if ( v6 >= 0 )
    {
      if ( v6 <= 3 )
      {
        HamIpcChannelRundown((int)(v4 + 3));
      }
      else if ( v6 == 6 )
      {
        v7 = (_DWORD *)v4[3];
        if ( v7 )
          RmpClientWnfDestroySubscription(v7);
      }
    }
    HampConnectionCleanup(v4);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v3;
}
