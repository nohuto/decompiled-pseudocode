/*
 * XREFs of PnpGetSystemPdoList @ 0x1406A3AC8
 * Callers:
 *     sub_1406A3BA4 @ 0x1406A3BA4 (sub_1406A3BA4.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x1406A38F8 (PipForDeviceNodeSubtree.c)
 *     PiPnpFreePdoDeviceList @ 0x1406A3B5C (PiPnpFreePdoDeviceList.c)
 */

__int64 __fastcall PnpGetSystemPdoList(__int64 a1, _QWORD *a2)
{
  void *v2; // rbx
  PVOID v4; // rcx
  int v5; // esi
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  void *v8; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v7[1] = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a1 )
    v4 = *(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v4 = IopRootDeviceNode;
  v8 = 0LL;
  v7[0] = 0;
  v5 = PipForDeviceNodeSubtree((__int64)v4, (__int64)PiPnpPdoDeviceListEnumCallback, (__int64)v7);
  if ( v5 < 0 )
  {
    v2 = v8;
  }
  else
  {
    *a2 = v8;
    v8 = 0LL;
  }
  PiPnpFreePdoDeviceList(v2);
  return (unsigned int)v5;
}
