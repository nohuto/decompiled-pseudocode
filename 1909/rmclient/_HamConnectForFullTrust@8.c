/*
 * XREFs of _HamConnectForFullTrust@8 @ 0x10012220
 * Callers:
 *     <none>
 * Callees:
 *     _HampConnectionCleanup@4 @ 0x10006FC0 (_HampConnectionCleanup@4.c)
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _RmpClientWnfDestroySubscription@4 @ 0x10007170 (_RmpClientWnfDestroySubscription@4.c)
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 */

int __stdcall HamConnectForFullTrust(int a1, _DWORD *a2)
{
  int v2; // edi
  _DWORD *v3; // esi
  int v4; // eax
  _DWORD *v5; // ecx
  _DWORD v7[2]; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+10h] [ebp-4h] BYREF

  v8 = 0;
  if ( !a1 )
    return -1073741585;
  v7[0] = a1;
  v7[1] = 0;
  v2 = HampConnectionCreate((int)v7, (int)dword_10003658, 0, 0, &v8);
  if ( v2 < 0 )
  {
    v3 = v8;
  }
  else
  {
    v3 = 0;
    v2 = 0;
    *a2 = v8;
  }
  if ( v3 )
  {
    v4 = v3[16];
    if ( v4 >= 0 )
    {
      if ( v4 <= 3 )
      {
        HamIpcChannelRundown((int)(v3 + 3));
      }
      else if ( v4 == 6 )
      {
        v5 = (_DWORD *)v3[3];
        if ( v5 )
          RmpClientWnfDestroySubscription(v5);
      }
    }
    HampConnectionCleanup(v3);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v2;
}
