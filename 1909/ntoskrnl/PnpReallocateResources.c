/*
 * XREFs of PnpReallocateResources @ 0x140875B80
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x140874740 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1401081E0 (KeReleaseSemaphore.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PipSetDevNodeFlags @ 0x140707F6C (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x140709274 (PipClearDevNodeFlags.c)
 *     PnpStartDeviceNode @ 0x140719E1C (PnpStartDeviceNode.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x140723C70 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpRequestDeviceRemoval @ 0x140733830 (PnpRequestDeviceRemoval.c)
 *     PnpReleaseResourcesInternal @ 0x140752620 (PnpReleaseResourcesInternal.c)
 *     PnpBuildCmResourceLists @ 0x14075280C (PnpBuildCmResourceLists.c)
 *     PnpFindBestConfiguration @ 0x140752A08 (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140752D64 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopCommitConfiguration @ 0x14077D8D8 (IopCommitConfiguration.c)
 *     PnpRestoreResourcesInternal @ 0x140875D60 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14087A9EC (PnpRebalance.c)
 */

_QWORD *__fastcall PnpReallocateResources(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r14d
  __int64 v4; // rax
  int ResourceRequirementsForAssignTable; // edi
  int started; // eax
  int v7; // r8d
  _QWORD *v9[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+40h] [rbp-40h] BYREF
  char vars0; // [rsp+80h] [rbp+0h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+10h] BYREF

  memset(v10, 0, sizeof(v10));
  v9[0] = 0LL;
  v9[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x400) == 0 )
    goto LABEL_17;
  v3 = *(_DWORD *)(a1 + 396) & 0x100;
  PipClearDevNodeFlags(a1, 256);
  if ( (*(_DWORD *)(a1 + 396) & 0x800) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v10[3] = 0LL;
    LODWORD(v10[1]) |= 0x280u;
    v10[0] = v4;
    HIDWORD(v10[1]) = 4;
    ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(
                                           (unsigned __int64)v10,
                                           (unsigned __int64)&vars0,
                                           (int *)&v12);
    if ( !v12 )
      goto LABEL_15;
    if ( *(_QWORD *)(a1 + 416) )
      PnpReleaseResourcesInternal((_QWORD *)a1);
    ResourceRequirementsForAssignTable = PnpFindBestConfiguration((__int64)v10, v12, (__int64)v9);
    if ( ResourceRequirementsForAssignTable < 0
      || (ResourceRequirementsForAssignTable = IopCommitConfiguration(v9), ResourceRequirementsForAssignTable < 0) )
    {
      started = PnpRestoreResourcesInternal(a1);
      if ( started < 0 )
      {
        v7 = 14;
        goto LABEL_12;
      }
    }
    else
    {
      PipClearDevNodeFlags(a1, 3072);
      PnpBuildCmResourceLists((unsigned __int64)v10, (unsigned __int64)&vars0, 1);
      started = PnpStartDeviceNode(a1, 1, 1);
      ResourceRequirementsForAssignTable = started;
      if ( started < 0 )
      {
        v7 = 12;
LABEL_12:
        PnpRequestDeviceRemoval(a1, 0, v7, started);
      }
    }
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
    goto LABEL_15;
  }
  ResourceRequirementsForAssignTable = PnpRebalance(a1, 0LL, 0LL, 0LL);
LABEL_15:
  if ( ResourceRequirementsForAssignTable < 0 )
  {
    PipClearDevNodeFlags(a1, 256);
    PipSetDevNodeFlags(a1, v3);
  }
LABEL_17:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
