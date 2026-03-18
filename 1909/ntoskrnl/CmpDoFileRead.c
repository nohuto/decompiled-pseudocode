/*
 * XREFs of CmpDoFileRead @ 0x140134B54
 * Callers:
 *     CmpFileRead @ 0x1406E4180 (CmpFileRead.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ZwReadFile @ 0x1401C0D10 (ZwReadFile.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     SetFailureLocation @ 0x14027F4C0 (SetFailureLocation.c)
 *     CmpCreateEvent @ 0x14063A3D0 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileRead(HANDLE FileHandle, __int64 a2, ULONG a3, char *a4, ULONG a5, int a6, __int64 a7)
{
  ULONG v7; // edi
  unsigned int v9; // r15d
  int v10; // eax
  NTSTATUS Status; // ebx
  ULONG v12; // r14d
  char *Buffer; // rcx
  ULONG Length; // edi
  __int64 result; // rax
  int Information; // ecx
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h]
  HANDLE Event; // [rsp+60h] [rbp-20h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-18h] BYREF
  ULONG v21; // [rsp+C0h] [rbp+40h]

  v21 = a3;
  ByteOffset.QuadPart = 0LL;
  v7 = a3;
  Event = 0LL;
  Object = 0LL;
  IoStatusBlock.Pointer = 0LL;
  v9 = 0x10000000;
  IoStatusBlock.Information = 0LL;
  v10 = CmpCreateEvent(SynchronizationEvent);
  Status = v10;
  if ( v10 < 0 )
  {
    SetFailureLocation(a7, 1, 12, v10, 16);
    return (unsigned int)Status;
  }
  v12 = a5;
  if ( !a5 )
  {
LABEL_12:
    Status = 0;
    goto LABEL_13;
  }
  Buffer = a4;
  while ( 1 )
  {
    ByteOffset.QuadPart = v7;
    Length = v9;
    if ( v12 <= v9 )
      Length = v12;
    Status = ZwReadFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 && v9 > 0x10000 )
    {
      Buffer = a4;
      v9 >>= 1;
      goto LABEL_11;
    }
    v12 -= Length;
    v21 = Length + ByteOffset.LowPart;
    Buffer = &a4[Length];
    a4 = Buffer;
    if ( Status < 0 )
      break;
    if ( IoStatusBlock.Information != Length )
    {
      ObfDereferenceObject(Object);
      ZwClose(Event);
      Information = IoStatusBlock.Information;
      if ( a7 )
      {
        *(_DWORD *)(a7 + 208) = 1;
        *(_QWORD *)(a7 + 216) = FileHandle;
        *(_DWORD *)(a7 + 224) = Information - Length;
      }
      CmRegistryIODebug = 1;
      dword_1409AEA08 = Information - Length;
      result = 3221225489LL;
      qword_1409AEA00 = (__int64)FileHandle;
      return result;
    }
LABEL_11:
    v7 = v21;
    if ( !v12 )
      goto LABEL_12;
  }
  if ( a7 )
  {
    *(_DWORD *)(a7 + 208) = 1;
    *(_QWORD *)(a7 + 216) = FileHandle;
    *(_DWORD *)(a7 + 224) = Status;
  }
  CmRegistryIODebug = 1;
  qword_1409AEA00 = (__int64)FileHandle;
  dword_1409AEA08 = Status;
LABEL_13:
  ObfDereferenceObject(Object);
  ZwClose(Event);
  return (unsigned int)Status;
}
