/*
 * XREFs of IopQueryReconfiguration @ 0x14083C3BC
 * Callers:
 *     PnpCancelStopDeviceNode @ 0x140840638 (PnpCancelStopDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x140840A64 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x140840E44 (PnpStopDeviceSubtree.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     IopSynchronousCall @ 0x1405A3CE0 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryReconfiguration(char a1, struct _DEVICE_OBJECT *a2)
{
  _DWORD *DeviceNode; // r9
  bool v6; // zf
  _BYTE v7[88]; // [rsp+30h] [rbp-58h] BYREF

  DeviceNode = a2->DeviceObjectExtension->DeviceNode;
  if ( a1 == 4 )
  {
    v6 = DeviceNode[75] == 777;
  }
  else
  {
    if ( a1 != 5 )
    {
      if ( a1 == 6 && (unsigned int)(DeviceNode[75] - 776) <= 1 )
        goto LABEL_5;
      return 3221225473LL;
    }
    v6 = DeviceNode[75] == 776;
  }
  if ( v6 )
  {
LABEL_5:
    memset(v7, 0, 0x48uLL);
    v7[0] = 27;
    v7[1] = a1;
    return IopSynchronousCall(a2, (__int64)v7, -1073741637, 0LL, 0LL);
  }
  return 3221225473LL;
}
