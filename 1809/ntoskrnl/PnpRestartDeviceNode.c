/*
 * XREFs of PnpRestartDeviceNode @ 0x14075FE8C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessClearDeviceProblem @ 0x14075FDBC (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x140762AB4 (PiRestartDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408324D0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessQueryRemoveNoFdo @ 0x140840338 (PiProcessQueryRemoveNoFdo.c)
 *     PiRestartRemovalRelations @ 0x1408403E4 (PiRestartRemovalRelations.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     PipSetDevNodeState @ 0x140159DB8 (PipSetDevNodeState.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
 *     PipClearDevNodeFlags @ 0x1406E6500 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1406E9DBC (PipClearDevNodeUserFlags.c)
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
    *(_DWORD *)(a1 + 704) &= 0xFFFE1C03;
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
