/*
 * XREFs of IopEnumerateRelations @ 0x140730274
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14072F8C4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14072FA4C (PnpQueuePendingSurpriseRemoval.c)
 *     PiEventBuildPdoList @ 0x14072FBB4 (PiEventBuildPdoList.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x14072FCF8 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x14072FE3C (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x14072FFA4 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x1407300EC (PnpCompileDeviceInstancePaths.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408624E8 (PnpCancelRemoveOnHungDevices.c)
 *     PnpTrackQueryRemoveDevices @ 0x14086E040 (PnpTrackQueryRemoveDevices.c)
 *     IopCheckIfMergeRequired @ 0x1408757FC (IopCheckIfMergeRequired.c)
 *     PiProcessCanceledRemoveForReset @ 0x14087BA2C (PiProcessCanceledRemoveForReset.c)
 *     PiRestartRemovalRelations @ 0x14087BE18 (PiRestartRemovalRelations.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x140739564 (PipDeviceObjectListElementAt.c)
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
