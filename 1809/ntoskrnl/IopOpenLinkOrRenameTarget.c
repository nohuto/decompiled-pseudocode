/*
 * XREFs of IopOpenLinkOrRenameTarget @ 0x14068CBE8
 * Callers:
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     IoCreateFileEx @ 0x14060C870 (IoCreateFileEx.c)
 *     IopGetBasicInformationFile @ 0x14068CE30 (IopGetBasicInformationFile.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14081D200 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall IopOpenLinkOrRenameTarget(_QWORD *a1, __int64 a2, __int64 a3, struct _FILE_OBJECT *a4)
{
  HANDLE v4; // rdi
  bool v6; // zf
  __int64 v8; // r13
  int v10; // esi
  __int64 result; // rax
  __int64 v12; // rcx
  char v13; // al
  _QWORD *FileObjectExtension; // rax
  _QWORD *v15; // r8
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // r8
  NTSTATUS v19; // ebx
  ACCESS_MASK v20; // edx
  HANDLE v21; // rsi
  struct _FILE_OBJECT *v22; // r14
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  int HandleInformation; // [rsp+28h] [rbp-D8h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  PVOID v32; // [rsp+90h] [rbp-70h] BYREF
  _WORD v33[4]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  _BYTE DriverContext[40]; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v36; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  char v39; // [rsp+138h] [rbp+38h]

  v4 = 0LL;
  v6 = (a4->Flags & 0x800) == 0;
  v8 = a2;
  Handle = 0LL;
  v10 = 2;
  if ( v6 )
  {
    result = IopGetBasicInformationFile(a4);
    if ( (int)result < 0 )
      return result;
    if ( (v39 & 0x10) != 0 )
      v10 = 4;
  }
  v12 = *(_QWORD *)(a3 + 8);
  if ( v12 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      LOBYTE(a2) = 1;
      result = IoConvertFileHandleToKernelHandle(v12, a2, 0LL, 0LL, &Handle);
      if ( (int)result < 0 )
        return result;
      v4 = Handle;
    }
    else
    {
      v4 = *(HANDLE *)(a3 + 8);
      Handle = v4;
    }
  }
  v33[0] = *(_WORD *)(a3 + 16);
  v33[1] = v33[0];
  ObjectAttributes.Length = 48;
  v34 = a3 + 20;
  v13 = ~(unsigned __int8)(a4->Flags >> 11);
  ObjectAttributes.RootDirectory = v4;
  ObjectAttributes.Attributes = v13 & 0x40 | 0x200;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v33;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  memset(DriverContext, 0, sizeof(DriverContext));
  strcpy(DriverContext, "(");
  *(_QWORD *)&DriverContext[32] = 1LL;
  FileObjectExtension = (_QWORD *)IopGetFileObjectExtension((__int64)a4, 1, 0LL);
  if ( FileObjectExtension )
    *(_QWORD *)&DriverContext[16] = *FileObjectExtension;
  v16 = IopGetFileObjectExtension((__int64)a4, 0, v15);
  v17 = *(_QWORD *)(v8 + 184);
  *(_QWORD *)&DriverContext[24] = v16;
  v19 = IoCreateFileEx(
          &FileHandle,
          v10 | 0x100000,
          &ObjectAttributes,
          &IoStatusBlock,
          (PLARGE_INTEGER)(v18 & (unsigned __int64)Object),
          v18 & HandleInformation,
          3u,
          1u,
          0x4000u,
          (PVOID)(v18 & v26),
          v18 & v27,
          (CREATE_FILE_TYPE)(v18 & v28),
          (PVOID)(v18 & v29),
          ((*(_BYTE *)(v17 - 70) & 1) == 0) | 0x104,
          (PIO_DRIVER_CREATE_CONTEXT)DriverContext);
  if ( v19 >= 0 )
  {
    v20 = v10;
    v21 = FileHandle;
    v19 = ObReferenceObjectByHandle(FileHandle, v20, (POBJECT_TYPE)IoFileObjectType, 0, &v32, &v36);
    if ( v19 < 0 )
    {
      ObCloseHandle(v21, 0);
    }
    else
    {
      v22 = (struct _FILE_OBJECT *)v32;
      ObfDereferenceObject(v32);
      RelatedDeviceObject = IoGetRelatedDeviceObject(a4);
      if ( IoGetRelatedDeviceObject(v22) == RelatedDeviceObject )
      {
        *(_QWORD *)(v17 - 48) = v22;
        v19 = 0;
        *a1 = v21;
      }
      else
      {
        ObCloseHandle(v21, 0);
        v19 = -1073741612;
      }
    }
  }
  if ( v4 )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
      ObCloseHandle(Handle, 0);
  }
  return (unsigned int)v19;
}
