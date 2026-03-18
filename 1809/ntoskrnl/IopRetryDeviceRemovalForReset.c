/*
 * XREFs of IopRetryDeviceRemovalForReset @ 0x140826BD0
 * Callers:
 *     <none>
 * Callees:
 *     PipIsDevNodeEffectivelyRemoved @ 0x140288918 (PipIsDevNodeEffectivelyRemoved.c)
 *     PpDevNodeUnlockTree @ 0x14059BEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059BF10 (PpDevNodeLockTree.c)
 *     PnpSetTargetDeviceRemove @ 0x1406EECB0 (PnpSetTargetDeviceRemove.c)
 *     IopFreeResetRemovalContext @ 0x140826B50 (IopFreeResetRemovalContext.c)
 */

void __fastcall IopRetryDeviceRemovalForReset(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  BOOL IsDevNodeEffectivelyRemoved; // ebx
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 184);
  if ( v1 )
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  else
    v3 = 0LL;
  PpDevNodeLockTree(0);
  IsDevNodeEffectivelyRemoved = PipIsDevNodeEffectivelyRemoved(v3);
  PpDevNodeUnlockTree(0);
  if ( IsDevNodeEffectivelyRemoved )
    v5 = -1073741823;
  else
    v5 = PnpSetTargetDeviceRemove(
           *(_QWORD **)(a1 + 184),
           0,
           1,
           0,
           1,
           54,
           0,
           0LL,
           (__int64)IopDeviceRemovalForResetComplete,
           a1,
           (_DWORD *)(a1 + 164),
           a1 + 192,
           a1 + 200,
           (__int64 *)(a1 + 168));
  if ( v5 < 0 )
    IopFreeResetRemovalContext((char *)a1);
}
