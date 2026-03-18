/*
 * XREFs of IopEnumerateRelations @ 0x1406EE0D4
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1406ED74C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8CC (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x1406EDA48 (PiEventBuildPdoList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1406EDB8C (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x1406EDCD0 (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1406EDE38 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x1406EDF4C (PnpCompileDeviceInstancePaths.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14082800C (PnpCancelRemoveOnHungDevices.c)
 *     PnpTrackQueryRemoveDevices @ 0x140833718 (PnpTrackQueryRemoveDevices.c)
 *     IopCheckIfMergeRequired @ 0x14083AA88 (IopCheckIfMergeRequired.c)
 *     PiProcessCanceledRemoveForReset @ 0x14083FFF8 (PiProcessCanceledRemoveForReset.c)
 *     PiRestartRemovalRelations @ 0x1408403E4 (PiRestartRemovalRelations.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x140700EF4 (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(unsigned int **a1, int *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  bool v5; // r11
  int v7; // eax
  unsigned int *v8; // rdi
  unsigned int v9; // edx
  unsigned int v10; // ecx

  v5 = 0;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v7 = *a2;
  if ( !*a2 || *((_BYTE *)a1 + 8) )
  {
    v8 = *a1;
    v9 = a2[1];
    v10 = **a1;
    if ( v9 < v10 && v7 >= 0 )
    {
      if ( v7 > 1 )
      {
        if ( v7 != 2 )
          return v5;
        v9 = v10 + ~v9;
      }
      v5 = (int)PipDeviceObjectListElementAt((_DWORD)v8, v9, (_DWORD)a3, (_DWORD)a4, (__int64)a5) >= 0;
      ++a2[1];
    }
  }
  return v5;
}
