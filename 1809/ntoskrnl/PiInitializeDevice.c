/*
 * XREFs of PiInitializeDevice @ 0x14083D3C4
 * Callers:
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x1401603A4 (PpDevNodeInsertIntoTree.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E6D10 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpSetPlugPlayEvent @ 0x1406EC22C (PnpSetPlugPlayEvent.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1406EC8F0 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PipAllocateDeviceNode @ 0x1406FFD7C (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14070275C (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpConcatenateUnicodeStrings @ 0x140710ADC (PnpConcatenateUnicodeStrings.c)
 *     PnpAllocateDeviceInstancePath @ 0x14073B224 (PnpAllocateDeviceInstancePath.c)
 *     PnpCopyDeviceInstancePath @ 0x14073B268 (PnpCopyDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14082E2F4 (PiDevCfgGetFailedInstallProblemStatus.c)
 */

__int64 __fastcall PiInitializeDevice(UNICODE_STRING *a1)
{
  WCHAR *PoolWithTag; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *v4; // rax
  int DeviceInstancePath; // ebx
  __int16 *v6; // rsi
  unsigned __int16 Length; // r14
  NTSTATUS v9; // eax
  PDEVICE_OBJECT v10; // r15
  int DeviceNode; // eax
  char *v12; // rdi
  __int16 v13; // ax
  int FailedInstallProblemStatus; // r8d
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+40h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v21; // [rsp+50h] [rbp-30h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h] BYREF
  PVOID P; // [rsp+68h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-10h] BYREF
  char v26; // [rsp+C8h] [rbp+48h]
  int v27; // [rsp+D0h] [rbp+50h] BYREF
  int v28; // [rsp+D8h] [rbp+58h] BYREF

  P = 0LL;
  PoolWithTag = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  PpDevNodeLockTree(1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v26 = 1;
  v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a1, 0x43706E50u);
  DeviceObject = v4;
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v4, 0x43706E50u);
    DeviceInstancePath = 0;
LABEL_3:
    v6 = v21;
LABEL_4:
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    goto LABEL_5;
  }
  DeviceInstancePath = PnpUnicodeStringToWstr(&v21, 0LL, &a1->Length);
  if ( DeviceInstancePath < 0 )
    goto LABEL_3;
  DeviceInstancePath = PiPnpRtlBeginOperation(&P);
  if ( DeviceInstancePath < 0 )
    goto LABEL_3;
  v6 = v21;
  DeviceInstancePath = CmOpenDeviceRegKey(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)v21,
                         16,
                         0,
                         983103,
                         0,
                         (__int64)&Handle,
                         0LL);
  if ( DeviceInstancePath < 0 )
    goto LABEL_4;
  *(_DWORD *)&DestinationString.Length = 0;
  v27 = 512;
  DestinationString.Buffer = 0LL;
  Length = 0;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x20207050u);
  if ( !PoolWithTag )
  {
    DeviceInstancePath = -1073741670;
    goto LABEL_4;
  }
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v6,
              (__int64)Handle,
              5,
              (__int64)&v28,
              (__int64)PoolWithTag,
              (__int64)&v27,
              0) >= 0
    && v28 == 1
    && v27 )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
    {
      Length = DestinationString.Length;
    }
    else
    {
      *(_DWORD *)&DestinationString.Length = 0;
      Length = 0;
      DestinationString.Buffer = 0LL;
    }
  }
  v9 = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
  v10 = DeviceObject;
  DeviceInstancePath = v9;
  if ( v9 < 0 )
    goto LABEL_48;
  DeviceObject->Flags |= 0x1000u;
  DeviceNode = PipAllocateDeviceNode((__int64)v10, (void **)&v23);
  v12 = (char *)v23;
  DeviceInstancePath = DeviceNode;
  if ( !v23 )
  {
    if ( DeviceNode == -1073740946 )
      DeviceInstancePath = -1073741670;
LABEL_47:
    if ( DeviceInstancePath >= 0 )
      goto LABEL_50;
    goto LABEL_48;
  }
  PipSetDevNodeFlags(v23, 17);
  PipSetDevNodeState((__int64)v12, 770);
  v19 = 0;
  v27 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v6,
              (__int64)Handle,
              11,
              (__int64)&v28,
              (__int64)&v19,
              (__int64)&v27,
              0) >= 0 )
  {
    if ( v28 == 4 && v27 == 4 )
    {
      v13 = v19;
    }
    else
    {
      v13 = 0;
      v19 = 0;
    }
    if ( (v13 & 0x20) != 0 )
    {
      FailedInstallProblemStatus = 0;
      v15 = 18;
LABEL_40:
      PipSetDevNodeProblem((__int64)v12, v15, FailedInstallProblemStatus);
      goto LABEL_41;
    }
    if ( (v13 & 0x2000) != 0 )
    {
      FailedInstallProblemStatus = 0;
      v15 = 16;
      goto LABEL_40;
    }
    if ( (v13 & 0x40) != 0 )
    {
      FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus((__int64)v6, (__int64)Handle);
      v15 = 28;
      goto LABEL_40;
    }
  }
LABEL_41:
  DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v12, (unsigned int)a1->Length + 2);
  if ( DeviceInstancePath >= 0 )
  {
    PnpCopyDeviceInstancePath((__int64)v12, a1);
    if ( !Length || (int)PnpConcatenateUnicodeStrings((PUNICODE_STRING)(v12 + 56), &DestinationString) < 0 )
    {
      *((_DWORD *)v12 + 14) = 0;
      *((_QWORD *)v12 + 8) = 0LL;
    }
    DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v12 + 4), (__int64)(v12 + 40));
    if ( DeviceInstancePath >= 0 )
    {
      PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v12);
      ObfReferenceObject(v10);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v26 = 0;
      PnpQueryAndSaveDeviceNodeCapabilities((__int64)v12);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v16, *((_QWORD *)v12 + 6), 1);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v17, *((_QWORD *)v12 + 6), 14);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v18, *(_QWORD *)(IopRootDeviceNode + 48), 15);
      PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, *((_QWORD **)v12 + 4));
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( v10 )
    IoDeleteDevice(v10);
LABEL_50:
  if ( v26 )
    goto LABEL_4;
LABEL_5:
  PpDevNodeUnlockTree(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  if ( v6 )
    PnpUnicodeStringToWstrFree(v6, (__int64)a1);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInstancePath;
}
