/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x1C001174C
 * Callers:
 *     ACPIThermalStartDevice @ 0x1C00972D0 (ACPIThermalStartDevice.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E374 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  struct _DEVICE_OBJECT *v8; // r14
  WCHAR *v9; // r15
  IRP *Irp; // r12
  PDEVICE_OBJECT AttachedDeviceReference; // r13
  unsigned __int64 *v12; // rax
  int DeviceProperty; // ebx
  __int64 v15; // rcx
  _BYTE *v16; // rax
  int v17; // eax
  KIRQL v18; // r8
  WCHAR *PoolWithTag; // rax
  const WCHAR *SourceString; // [rsp+60h] [rbp-A0h]
  ULONG BufferLength; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  void *FileHandle; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  PVOID Context; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v27; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v32[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v33[48]; // [rsp+128h] [rbp+28h] BYREF

  v4 = a1[25];
  Context = a1;
  v6 = a1[89];
  P = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  FileHandle = 0LL;
  v9 = 0LL;
  v22 = 0LL;
  Irp = 0LL;
  AttachedDeviceReference = 0LL;
  v12 = (unsigned __int64 *)AMLIGetNamedChild(v6, 1314083935LL, a3, a4);
  v27 = v12;
  if ( v12 )
  {
    DeviceProperty = AMLIEvalNameSpaceObject(v12, v32, 0, 0LL);
    v16 = v32;
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 128) & 4) == 0 )
    {
      DeviceProperty = 0;
      *(_QWORD *)(v4 + 208) = *(_QWORD *)(v4 + 192);
      *(_QWORD *)(v4 + 216) = *(_QWORD *)(v4 + 200);
      goto LABEL_4;
    }
    memset(v33, 0, sizeof(v33));
    v15 = a1[89];
    v28 = THRM_EXTENSIONS_DSM_UUID;
    DeviceProperty = ACPIAmliEvaluateDsm(v15, (unsigned int)&v28, 0, 2, (__int64)v33, (__int64)&P);
    v16 = P;
  }
  Object = v16;
  if ( DeviceProperty < 0 )
    goto LABEL_38;
  if ( *((_WORD *)v16 + 1) != 2 )
  {
    dword_1C0080868 = 0;
    pszDest = 0;
    DeviceProperty = -1072431095;
    FreeDataBuffs((__int64)v16, 1u);
LABEL_37:
    v9 = 0LL;
    goto LABEL_38;
  }
  v17 = AMLIGetNameSpaceObject(*((_BYTE **)v16 + 4), *((__int64 **)Context + 89), (unsigned __int64 *)&v22, 0);
  dword_1C0080868 = 0;
  DeviceProperty = v17;
  pszDest = 0;
  FreeDataBuffs((__int64)Object, 1u);
  if ( DeviceProperty < 0 )
    goto LABEL_37;
  if ( !v22 )
  {
LABEL_36:
    DeviceProperty = -1073741810;
    goto LABEL_37;
  }
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(*(_QWORD *)v22 + 104LL);
  if ( !v7 || (*(_BYTE *)(v7 + 8) & 4) != 0 )
  {
    v7 = 0LL;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
    goto LABEL_36;
  }
  _InterlockedAdd((volatile signed __int32 *)(v7 + 680), 1u);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
  v8 = *(struct _DEVICE_OBJECT **)(v7 + 736);
  if ( v8 )
  {
    ObfReferenceObject(*(PVOID *)(v7 + 736));
    ACPIInternalDecrementIrpReferenceCount(v7);
    v7 = 0LL;
    if ( IoGetDeviceProperty(v8, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) == -1073741789 )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferLength, 0x54706341u);
      SourceString = PoolWithTag;
      if ( PoolWithTag )
      {
        DeviceProperty = IoGetDeviceProperty(
                           v8,
                           DevicePropertyPhysicalDeviceObjectName,
                           BufferLength,
                           PoolWithTag,
                           &BufferLength);
        if ( DeviceProperty >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          DeviceProperty = ZwCreateFile(
                             &FileHandle,
                             0x1F01FFu,
                             &ObjectAttributes,
                             &IoStatusBlock,
                             0LL,
                             0,
                             3u,
                             1u,
                             0,
                             0LL,
                             0);
          if ( DeviceProperty >= 0 )
          {
            DeviceProperty = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
            if ( DeviceProperty >= 0 )
            {
              AttachedDeviceReference = IoGetAttachedDeviceReference(v8);
              Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
              if ( Irp )
              {
                DeviceProperty = IoRegisterPlugPlayNotification(
                                   EventCategoryTargetDeviceChange,
                                   0,
                                   Object,
                                   v8->DriverObject,
                                   AcpiThermalDeviceTargetChange,
                                   Context,
                                   (PVOID *)(v4 + 240));
                if ( DeviceProperty >= 0 )
                {
                  *(_QWORD *)(v4 + 208) = Irp;
                  DeviceProperty = 0;
                  *(_QWORD *)(v4 + 216) = AttachedDeviceReference;
                  Irp = 0LL;
                  AttachedDeviceReference = 0LL;
                }
              }
              else
              {
                DeviceProperty = -1073741670;
              }
            }
          }
          else
          {
            FileHandle = 0LL;
          }
        }
        v9 = (WCHAR *)SourceString;
      }
      else
      {
        DeviceProperty = -1073741670;
        v9 = 0LL;
      }
      goto LABEL_38;
    }
    DeviceProperty = -1073741823;
    goto LABEL_37;
  }
  DeviceProperty = -1073741810;
  v9 = 0LL;
LABEL_38:
  if ( v27 )
    AMLIDereferenceHandleEx((__int64)v27);
  if ( v22 )
    AMLIDereferenceHandleEx(v22);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( v7 )
    ACPIInternalDecrementIrpReferenceCount(v7);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x54706341u);
LABEL_4:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Irp )
    IoFreeIrp(Irp);
  if ( P )
    ExFreePoolWithTag(P, 0x52706341u);
  return (unsigned int)DeviceProperty;
}
