/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x140121820
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14011D3E8 (FsRtlAcquireFileForModWriteEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406173EC (PspAllocateAndQueryNotificationChannel.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     CmpReplicateKeyToVirtual @ 0x14082C7C4 (CmpReplicateKeyToVirtual.c)
 *     NtMapCMFModule @ 0x140916960 (NtMapCMFModule.c)
 * Callees:
 *     ExpConvertExclusiveToSharedLite @ 0x1401218A8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x14016C20C (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // r8
  __int16 v2; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v2 = Flag & 1;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v2 )
    ExpFastResourceLegacyConvertExclusiveToShared((ULONG_PTR)Resource);
  else
    ExpConvertExclusiveToSharedLite(Resource, 0LL);
}
