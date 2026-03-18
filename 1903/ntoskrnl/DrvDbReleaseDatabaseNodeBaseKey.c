/*
 * XREFs of DrvDbReleaseDatabaseNodeBaseKey @ 0x1406F2010
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1406F1E44 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x14093F0F4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x1409403AC (DrvDbGetObjectList.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406F25DC (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbReleaseDatabaseNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 144), 1u);
  if ( (*(_DWORD *)(a2 + 56) & 2) == 0 )
  {
    v5 = ZwClose(a4);
    if ( v5 >= 0 )
      v5 = DrvDbUnloadDatabaseNode(a1, a2);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 144));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
