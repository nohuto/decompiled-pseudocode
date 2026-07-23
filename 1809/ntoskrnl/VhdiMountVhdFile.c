/*
 * XREFs of VhdiMountVhdFile @ 0x1409FA784
 * Callers:
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcscat_s @ 0x14019BD60 (wcscat_s.c)
 *     ZwCreateFile @ 0x1401B8D90 (ZwCreateFile.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetDeviceInterfaces @ 0x1405A0F10 (IoGetDeviceInterfaces.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IoGetDeviceObjectPointer @ 0x140663050 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall VhdiMountVhdFile(wchar_t *Src)
{
  NTSTATUS DeviceInterfaces; // ebx
  PZZWSTR v3; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r13d
  char *PoolWithTag; // rax
  void *v9; // rdi
  unsigned int v10; // ebx
  _DWORD *v11; // rsi
  IRP *v12; // rax
  char *v13; // rbx
  __int128 v14; // xmm0
  PZZWSTR v15; // r14
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  IRP *v17; // rax
  PZZWSTR SymbolicLinkList; // [rsp+68h] [rbp-A0h] BYREF
  __int16 Object; // [rsp+70h] [rbp-98h] BYREF
  char Object_2; // [rsp+72h] [rbp-96h]
  int Object_4; // [rsp+74h] [rbp-94h]
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v24; // [rsp+80h] [rbp-88h]
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v28; // [rsp+B0h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD v30[6]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v31[12]; // [rsp+158h] [rbp+50h] BYREF
  _OWORD EaBuffer[7]; // [rsp+188h] [rbp+80h] BYREF
  __int64 retaddr; // [rsp+230h] [rbp+128h]

  SymbolicLinkList = 0LL;
  FileObject = 0LL;
  if ( !Src )
  {
    DeviceInterfaces = -1073741811;
    goto LABEL_3;
  }
  memset(v30, 0, 0x54uLL);
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE, 0LL, 0, &SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v3 = SymbolicLinkList;
  if ( !*SymbolicLinkList )
  {
    DeviceInterfaces = -1073741275;
    goto LABEL_3;
  }
  RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
  DeviceInterfaces = IoGetDeviceObjectPointer(
                       &DestinationString,
                       0x10000000u,
                       &FileObject,
                       (PDEVICE_OBJECT *)&SymbolicLinkList);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Src[v5] );
  v6 = 2 * v5 + 2;
  v7 = 2 * v5 + 34;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x42646856u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  *((_DWORD *)PoolWithTag + 1) = 0;
  *(_OWORD *)(PoolWithTag + 8) = VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN;
  *(_DWORD *)PoolWithTag = 1;
  *((_DWORD *)PoolWithTag + 6) = 32;
  *((_DWORD *)PoolWithTag + 7) = v6;
  memmove(PoolWithTag + 32, Src, v6);
  v10 = v6 + 540;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x42646856u);
  if ( !v11 )
  {
LABEL_11:
    DeviceInterfaces = -1073741801;
    goto LABEL_3;
  }
  v24 = &v23;
  Object_4 = 0;
  v23 = (__int64)&v23;
  Object = 1;
  Object_2 = 6;
  v12 = (IRP *)IopBuildDeviceIoControlRequest(
                 2971948,
                 (__int64)SymbolicLinkList,
                 v9,
                 v7,
                 v11,
                 v10,
                 0,
                 (__int64)&Object,
                 (__int64)&IoStatusBlock,
                 retaddr);
  if ( !v12 )
    goto LABEL_14;
  DeviceInterfaces = IofCallDriver((PDEVICE_OBJECT)SymbolicLinkList, v12);
  if ( DeviceInterfaces == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    DeviceInterfaces = IoStatusBlock.Status;
  }
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v13 = (char *)v11 + (unsigned int)v11[5];
  if ( *(_WORD *)v13 == 92 && *((_WORD *)v13 + 1) == 92 && *((_WORD *)v13 + 2) == 46 && *((_WORD *)v13 + 3) == 92 )
    *(_DWORD *)(v13 + 2) = 4128831;
  do
    ++v4;
  while ( Src[v4] );
  wcscat_s((wchar_t *)v13, (unsigned int)(v4 + 257), Src);
  RtlInitUnicodeString(&v28, (PCWSTR)v13);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = &v28;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset(EaBuffer, 0, 0x68uLL);
  *(_QWORD *)&EaBuffer[0] = 0x54078000000000LL;
  *((_QWORD *)&EaBuffer[0] + 1) = 0x4B534454524956LL;
  v14 = *(_OWORD *)v11;
  LODWORD(v30[2]) = v11[4];
  *(_QWORD *)((char *)&v30[2] + 4) = 0x400000054LL;
  EaBuffer[2] = v14;
  DWORD1(v30[3]) = 2;
  LODWORD(EaBuffer[6]) = v30[5];
  EaBuffer[1] = GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE;
  EaBuffer[3] = v30[2];
  EaBuffer[4] = v30[3];
  EaBuffer[5] = v30[4];
  DeviceInterfaces = ZwCreateFile(
                       &FileHandle,
                       0x80000000,
                       &ObjectAttributes,
                       &IoStatusBlock,
                       0LL,
                       0x80u,
                       1u,
                       2u,
                       0,
                       EaBuffer,
                       0x67u);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  DeviceInterfaces = ObReferenceObjectByHandle(FileHandle, 0xC0100000, 0LL, 0, (PVOID *)&SymbolicLinkList, 0LL);
  if ( DeviceInterfaces < 0 )
    goto LABEL_3;
  v15 = SymbolicLinkList;
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)SymbolicLinkList);
  memset(v31, 0, 0x28uLL);
  v31[0] = 1;
  v24 = &v23;
  Object = 1;
  v23 = (__int64)&v23;
  Object_2 = 6;
  Object_4 = 0;
  v17 = (IRP *)IopBuildDeviceIoControlRequest(
                 2955548,
                 (__int64)RelatedDeviceObject,
                 v31,
                 0x28u,
                 0LL,
                 0,
                 0,
                 (__int64)&Object,
                 (__int64)&IoStatusBlock,
                 retaddr);
  if ( !v17 )
  {
LABEL_14:
    DeviceInterfaces = -1073741670;
    goto LABEL_3;
  }
  v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v15;
  DeviceInterfaces = IofCallDriver(RelatedDeviceObject, v17);
  if ( DeviceInterfaces == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    DeviceInterfaces = IoStatusBlock.Status;
  }
  if ( DeviceInterfaces < 0 )
LABEL_3:
    KeBugCheckEx(0x12Fu, 5uLL, DeviceInterfaces, 0LL, 0LL);
  ExFreePoolWithTag(v9, 0x42646856u);
  ExFreePoolWithTag(v11, 0x42646856u);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x746C6644u);
  if ( FileObject )
    ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
  ExFreePoolWithTag(v3, 0);
  return (unsigned int)DeviceInterfaces;
}
