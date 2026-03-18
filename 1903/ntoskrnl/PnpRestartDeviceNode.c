/*
 * XREFs of PnpRestartDeviceNode @ 0x1408623E8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14086CEC0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessClearDeviceProblem @ 0x140874EA0 (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x1408752E8 (PiRestartDevice.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14087BD6C (PiProcessQueryRemoveNoFdo.c)
 *     PiRestartRemovalRelations @ 0x14087BE18 (PiRestartRemovalRelations.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PipClearDevNodeUserFlags @ 0x1407017E0 (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x140707494 (PipClearDevNodeFlags.c)
 */

__int64 __fastcall PnpRestartDeviceNode(__int64 a1)
{
  unsigned int v2; // edi
  bool v3; // zf
  void *v4; // rcx

  PpDevNodeLockTree(4);
  if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
  {
    PipClearDevNodeUserFlags(a1, 5);
    PipClearDevNodeFlags(a1, 1081344);
    *(_DWORD *)(a1 + 704) &= 0xFFFFFC03;
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 300) == 769;
    *(_DWORD *)(a1 + 296) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( !v3 )
    {
      PipClearDevNodeFlags(a1, 2082475264);
      if ( *(_WORD *)(a1 + 56) )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
        *(_DWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = *(void **)(a1 + 440);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(a1 + 440) = 0LL;
        PipClearDevNodeFlags(a1, 512);
      }
      KeReleaseGuardedMutex(&PiResourceListLock);
    }
    *(_DWORD *)(a1 + 660) = -1;
    PipSetDevNodeState(a1, 769);
  }
  else
  {
    v2 = -1073741823;
  }
  PpDevNodeUnlockTree(4);
  return v2;
}
