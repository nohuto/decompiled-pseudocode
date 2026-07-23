/*
 * XREFs of MiCreateSectionForDriver @ 0x140683460
 * Callers:
 *     MiObtainSectionForDriver @ 0x140682AB0 (MiObtainSectionForDriver.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiCreateSystemSection @ 0x1400F599C (MiCreateSystemSection.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     MiLogFailedDriverLoad @ 0x14084FBC8 (MiLogFailedDriverLoad.c)
 *     KdPullRemoteFile @ 0x14091A67C (KdPullRemoteFile.c)
 */

NTSTATUS __fastcall MiCreateSectionForDriver(UNICODE_STRING *a1, __int64 a2, char a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  int v8; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v12; // [rsp+F8h] [rbp+7Fh] BYREF

  *a4 = 0LL;
  FileHandle = 0LL;
  byte_140439F8C = 1;
  if ( a2 )
    goto LABEL_4;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (int)KdPullRemoteFile() >= 0 )
    DbgPrintEx(0x66u, 2u, "MmLoadSystemImage: Pulled %wZ from kd\n", a1);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( result >= 0 )
  {
LABEL_4:
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    if ( (a3 & 1) != 0 )
      MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v8 = MiCreateSystemSection(&v12, a2, (int)&ObjectAttributes);
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    if ( v8 < 0 )
    {
      MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)v8);
      return v8;
    }
    else
    {
      *a4 = v12;
      return 0;
    }
  }
  return result;
}
