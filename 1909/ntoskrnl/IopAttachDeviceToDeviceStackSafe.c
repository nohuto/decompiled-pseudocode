/*
 * XREFs of IopAttachDeviceToDeviceStackSafe @ 0x1400887D0
 * Callers:
 *     IoAttachDeviceToDeviceStackSafe @ 0x1400887B0 (IoAttachDeviceToDeviceStackSafe.c)
 *     IoAttachDeviceToDeviceStack @ 0x140177950 (IoAttachDeviceToDeviceStack.c)
 *     IoAttachDeviceByPointer @ 0x140298110 (IoAttachDeviceByPointer.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     IoGetAttachedDevice @ 0x140044170 (IoGetAttachedDevice.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140088AD0 (IopGetDeviceAttachmentBase.c)
 *     PnpRequestDeviceAction @ 0x14015D824 (PnpRequestDeviceAction.c)
 *     IoGetDiskDeviceObject @ 0x1401713D0 (IoGetDiskDeviceObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     IopIsKnownGoodLegacyFsFilter @ 0x14029918C (IopIsKnownGoodLegacyFsFilter.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQueryNameString @ 0x14062BC10 (ObQueryNameString.c)
 *     IovAttachDeviceToDeviceStack @ 0x140962C1C (IovAttachDeviceToDeviceStack.c)
 */

PDEVICE_OBJECT __fastcall IopAttachDeviceToDeviceStackSafe(__int64 a1, struct _DEVICE_OBJECT *a2, PDEVICE_OBJECT *a3)
{
  __int64 v3; // r12
  struct _DEVICE_OBJECT *v6; // r14
  PDEVICE_OBJECT AttachedDevice; // rbx
  char v8; // r15
  struct _DEVICE_OBJECT *DeviceAttachmentBase; // r13
  unsigned __int64 DeviceType; // rax
  __int64 v11; // rcx
  CCHAR StackSize; // al
  PVOID *DeviceNode; // rcx
  unsigned int v14; // eax
  int v15; // r8d
  __int64 v17; // rdx
  unsigned __int16 v18; // ax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  _OBJECT_NAME_INFORMATION *p_ObjectNameInfo; // rsi
  _OBJECT_NAME_INFORMATION *v23; // r14
  NTSTATUS v24; // r15d
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  bool v26; // sf
  unsigned __int16 Length; // ax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // ecx
  wchar_t *Buffer; // rax
  char v33; // [rsp+40h] [rbp-C0h]
  KIRQL OldIrql; // [rsp+41h] [rbp-BFh]
  ULONG ReturnLength; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v37; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v38; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT DiskDeviceObject; // [rsp+58h] [rbp-A8h] BYREF
  struct _DEVICE_OBJECT *v40; // [rsp+60h] [rbp-A0h]
  _QWORD v41[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+94h] [rbp-6Ch]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  int v49; // [rsp+BCh] [rbp-44h]
  __int16 *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  wchar_t *v53; // [rsp+D0h] [rbp-30h]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+E0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  v40 = a2;
  v6 = a2;
  OldIrql = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovAttachDeviceToDeviceStack(a1, v6);
  AttachedDevice = IoGetAttachedDevice(v6);
  v8 = 0;
  DeviceAttachmentBase = (struct _DEVICE_OBJECT *)IopGetDeviceAttachmentBase(v6);
  v33 = 0;
  DeviceType = DeviceAttachmentBase->DeviceType;
  if ( (unsigned int)DeviceType <= 0x35 )
  {
    v11 = 0x20000100100108LL;
    if ( _bittest64(&v11, DeviceType) )
    {
      if ( ((DeviceAttachmentBase->Flags & 0x10000000) != 0 || IopBlockLegacyFsFilters)
        && !(unsigned __int8)IopIsKnownGoodLegacyFsFilter(*(_QWORD *)(a1 + 8) + 56LL, 1LL) )
      {
        ObfReferenceObject(DeviceAttachmentBase);
        v8 = 1;
        v33 = 1;
      }
    }
  }
  if ( (AttachedDevice->Flags & 0x80u) != 0
    || (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0xF) != 0
    || (StackSize = AttachedDevice->StackSize, (unsigned __int8)StackSize >= 0x7Du)
    || v8 )
  {
    AttachedDevice = 0LL;
    if ( a3 )
      *a3 = 0LL;
  }
  else
  {
    if ( a3 )
    {
      *a3 = AttachedDevice;
      StackSize = AttachedDevice->StackSize;
    }
    *(_BYTE *)(a1 + 76) = StackSize + 1;
    *(_DWORD *)(a1 + 152) = AttachedDevice->AlignmentRequirement;
    *(_WORD *)(a1 + 304) = AttachedDevice->SectorSize;
    if ( (AttachedDevice->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) |= 0x10u;
    if ( (AttachedDevice->Flags & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 0x8000000u;
    _InterlockedExchange64((volatile __int64 *)&AttachedDevice->AttachedDevice, a1);
    ++AttachedDevice->Spare1;
    *(_QWORD *)(v3 + 48) = AttachedDevice;
    DeviceNode = (PVOID *)DeviceAttachmentBase->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && *((int *)DeviceNode + 99) < 0 )
      PnpRequestDeviceAction(DeviceNode[4], 0LL, 0LL, 0LL);
  }
  KeReleaseQueuedSpinLock(0xAuLL, OldIrql);
  if ( v8 )
  {
    if ( IopBlockLegacyFsFilters )
    {
      if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedByPolicy) )
      {
        v17 = *(_QWORD *)(a1 + 8);
        v18 = *(_WORD *)(v17 + 56);
        UserData.Reserved = 0;
        v36 = v18 >> 1;
        UserData.Ptr = (ULONGLONG)&v36;
        UserData.Size = 2;
        v19 = *(unsigned __int16 *)(v17 + 56);
        v20 = *(_QWORD *)(v17 + 64);
        v45 = 0;
        v43 = v20;
        v44 = v19;
        EtwWrite(
          IoMgrTraceHandle,
          &IoMgr_LegacyFsFilterBlockedByPolicy,
          (LPCGUID)KeGetCurrentThread()[1].WaitBlock[0].SparePtr,
          2u,
          &UserData);
      }
    }
    else if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_LegacyFsFilterBlockedOnScm) )
    {
      v21 = *(_QWORD *)(a1 + 8);
      p_ObjectNameInfo = &ObjectNameInfo;
      v41[0] = 1835034LL;
      v23 = (_OBJECT_NAME_INFORMATION *)v41;
      v37 = *(_WORD *)(v21 + 56) >> 1;
      v41[1] = L"(Unavailable)";
      ReturnLength = 64;
      if ( KeGetCurrentIrql() < 2u && IoGetDiskDeviceObject(DeviceAttachmentBase, &DiskDeviceObject) >= 0 )
      {
        v24 = ObQueryNameString(DiskDeviceObject, &ObjectNameInfo, ReturnLength, &ReturnLength);
        if ( v24 == -1073741820 )
        {
          PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x6E4F6F49u);
          p_ObjectNameInfo = PoolWithTag;
          if ( PoolWithTag )
            v24 = ObQueryNameString(DiskDeviceObject, PoolWithTag, ReturnLength, &ReturnLength);
          else
            v24 = -1073741670;
        }
        ObfDereferenceObject(DiskDeviceObject);
        v26 = v24 < 0;
        v8 = v33;
        if ( !v26 )
          v23 = p_ObjectNameInfo;
      }
      Length = v23->Name.Length;
      v46.Reserved = 0;
      v38 = Length >> 1;
      v46.Ptr = (ULONGLONG)&v37;
      v28 = *(_QWORD *)(a1 + 8);
      v46.Size = 2;
      v29 = *(unsigned __int16 *)(v28 + 56);
      v30 = *(_QWORD *)(v28 + 64);
      v49 = 0;
      v52 = 0;
      v47 = v30;
      v50 = &v38;
      v48 = v29;
      v51 = 2;
      v31 = v23->Name.Length;
      Buffer = v23->Name.Buffer;
      v55 = 0;
      v53 = Buffer;
      v54 = v31;
      EtwWrite(
        IoMgrTraceHandle,
        &IoMgr_LegacyFsFilterBlockedOnScm,
        (LPCGUID)KeGetCurrentThread()[1].WaitBlock[0].SparePtr,
        4u,
        &v46);
      if ( p_ObjectNameInfo && p_ObjectNameInfo != &ObjectNameInfo )
        ExFreePoolWithTag(p_ObjectNameInfo, 0);
      v6 = v40;
    }
    if ( v8 )
      ObfDereferenceObject(DeviceAttachmentBase);
  }
  v14 = v6->DeviceType;
  if ( v14 <= 0x14 )
  {
    v15 = 1048840;
    if ( _bittest(&v15, v14) )
    {
      if ( FltMgrCallbacks )
        (*(void (__fastcall **)(__int64, struct _DEVICE_OBJECT *))(FltMgrCallbacks + 40))(a1, v6);
    }
  }
  return AttachedDevice;
}
