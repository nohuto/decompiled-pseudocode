/*
 * XREFs of IopOpenLinkOrRenameTarget @ 0x1406DDF24
 * Callers:
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14000A8E0 (IopGetFileObjectExtension.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     IoCreateFileEx @ 0x140616F50 (IoCreateFileEx.c)
 *     IopGetBasicInformationFile @ 0x1406DE1AC (IopGetBasicInformationFile.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140856070 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall IopOpenLinkOrRenameTarget(_QWORD *a1, __int64 a2, __int64 a3, struct _FILE_OBJECT *a4)
{
  HANDLE v8; // rsi
  __int64 v9; // rdx
  int v10; // edi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  char v14; // al
  char v15; // cl
  PVOID *FileObjectExtension; // rax
  _QWORD *v17; // r8
  NTSTATUS v18; // ebx
  ACCESS_MASK v19; // edx
  HANDLE v20; // rdi
  struct _FILE_OBJECT *v21; // r14
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  _WORD v24[2]; // [rsp+88h] [rbp-78h] BYREF
  int v25; // [rsp+8Ch] [rbp-74h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-68h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-28h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v34[40]; // [rsp+118h] [rbp+18h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v25 = 0;
  HandleInformation = 0LL;
  v8 = 0LL;
  memset(v34, 0, sizeof(v34));
  v10 = 2;
  if ( (a4->Flags & 0x800) == 0 )
  {
    result = IopGetBasicInformationFile(a4);
    if ( (int)result < 0 )
      return result;
    if ( (v34[32] & 0x10) != 0 )
      v10 = 4;
  }
  v12 = *(_QWORD *)(a3 + 8);
  if ( v12 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      LOBYTE(v9) = 1;
      result = IoConvertFileHandleToKernelHandle(v12, v9, 0LL, 0LL, &Handle);
      if ( (int)result < 0 )
        return result;
      v8 = Handle;
    }
    else
    {
      v8 = *(HANDLE *)(a3 + 8);
      Handle = v8;
    }
  }
  v13 = *(_QWORD *)(a2 + 184);
  v24[0] = *(_WORD *)(a3 + 16);
  v24[1] = v24[0];
  v26 = a3 + 20;
  v14 = ~(unsigned __int8)(a4->Flags >> 11);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v8;
  v15 = ~*(_BYTE *)(v13 - 70);
  v31 = 1LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v24;
  ObjectAttributes.Attributes = v14 & 0x40 | ((v15 & 1) << 10) | 0x200;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DriverContext.Size = 40;
  memset(&DriverContext.Size + 1, 0, 22);
  FileObjectExtension = (PVOID *)IopGetFileObjectExtension((__int64)a4, 1, 0LL);
  if ( FileObjectExtension )
    DriverContext.DeviceObjectHint = *FileObjectExtension;
  DriverContext.TxnParameters = (PTXN_PARAMETER_BLOCK)IopGetFileObjectExtension((__int64)a4, 0, v17);
  v18 = IoCreateFileEx(
          &FileHandle,
          v10 | 0x100000,
          &ObjectAttributes,
          &IoStatusBlock,
          0LL,
          0,
          3u,
          1u,
          0x4000u,
          0LL,
          0,
          CreateFileTypeNone,
          0LL,
          ((*(_BYTE *)(v13 - 70) & 1) == 0) | 0x104,
          &DriverContext);
  if ( v18 >= 0 )
  {
    v19 = v10;
    v20 = FileHandle;
    v18 = ObReferenceObjectByHandle(FileHandle, v19, (POBJECT_TYPE)IoFileObjectType, 0, &Object, &HandleInformation);
    if ( v18 < 0 )
    {
      ObCloseHandle(v20, 0);
    }
    else
    {
      v21 = (struct _FILE_OBJECT *)Object;
      ObfDereferenceObject(Object);
      RelatedDeviceObject = IoGetRelatedDeviceObject(a4);
      if ( IoGetRelatedDeviceObject(v21) == RelatedDeviceObject )
      {
        *(_QWORD *)(v13 - 48) = v21;
        v18 = 0;
        *a1 = v20;
      }
      else
      {
        ObCloseHandle(v20, 0);
        v18 = -1073741612;
      }
    }
  }
  if ( v8 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
      ObCloseHandle(Handle, 0);
  }
  return (unsigned int)v18;
}
