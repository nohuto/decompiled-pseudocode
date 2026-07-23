/*
 * XREFs of PiRestartRemovalRelations @ 0x140841624
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopQueryDeviceState @ 0x1406EB078 (IopQueryDeviceState.c)
 *     IopEnumerateRelations @ 0x1406EF354 (IopEnumerateRelations.c)
 *     PipClearDevNodeProblem @ 0x1406F7F78 (PipClearDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x14076105C (PnpRestartDeviceNode.c)
 */

bool __fastcall PiRestartRemovalRelations(__int64 a1, unsigned int **a2, struct _DEVICE_OBJECT *a3)
{
  bool result; // al
  struct _DEVICE_OBJECT *v7; // rcx
  _DWORD *DeviceNode; // rbx
  int v9; // [rsp+30h] [rbp-28h] BYREF
  int v10[2]; // [rsp+38h] [rbp-20h] BYREF
  struct _DEVICE_OBJECT *v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v10[1] = 0;
  v10[0] = 1;
  while ( 1 )
  {
    result = IopEnumerateRelations(a2, v10, &v11, &v12, 0LL);
    if ( !result )
      return result;
    v7 = v11;
    if ( v11 )
      DeviceNode = v11->DeviceObjectExtension->DeviceNode;
    else
      DeviceNode = 0LL;
    if ( *(_DWORD *)(a1 + 16) != 54 || v12 == 1 )
    {
      if ( v11 == a3 )
      {
        if ( (*(_DWORD *)(a1 + 144) & 2) == 0
          && DeviceNode[75] == 786
          && (DeviceNode[99] & 0x2000) != 0
          && DeviceNode[101] == 21 )
        {
          PipClearDevNodeProblem((__int64)DeviceNode);
          goto LABEL_18;
        }
      }
      else if ( (DeviceNode[99] & 0x6000) == 0 && DeviceNode[75] == 786 )
      {
LABEL_18:
        PnpRestartDeviceNode((__int64)DeviceNode);
      }
    }
    else if ( DeviceNode[75] != 788 )
    {
      v11->Flags |= 0x4000000u;
      IopQueryDeviceState(v7, &v9);
    }
  }
}
