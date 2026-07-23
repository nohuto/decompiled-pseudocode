/*
 * XREFs of CmpDoFileRead @ 0x1401343E4
 * Callers:
 *     CmpFileRead @ 0x1406C3B40 (CmpFileRead.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ZwReadFile @ 0x1401B83B0 (ZwReadFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     CmpCreateEvent @ 0x1405B587C (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileRead(HANDLE FileHandle, __int64 a2, ULONG a3, char *a4, ULONG a5, int a6, __int64 a7)
{
  ULONG v7; // edi
  unsigned int v9; // r15d
  int Event; // eax
  NTSTATUS Status; // ebx
  ULONG v12; // r14d
  char *Buffer; // rcx
  ULONG Length; // edi
  __int64 result; // rax
  int Information; // ecx
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-18h] BYREF
  ULONG v19; // [rsp+C0h] [rbp+40h]

  v19 = a3;
  v7 = a3;
  v9 = 0x10000000;
  Event = CmpCreateEvent(SynchronizationEvent);
  Status = Event;
  if ( Event < 0 )
  {
    SetFailureLocation(a7, 1, 12, Event, 16);
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
    Status = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(0LL, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 && v9 > 0x10000 )
    {
      Buffer = a4;
      v9 >>= 1;
      goto LABEL_11;
    }
    v12 -= Length;
    v19 = Length + ByteOffset.LowPart;
    Buffer = &a4[Length];
    a4 = Buffer;
    if ( Status < 0 )
      break;
    if ( IoStatusBlock.Information != Length )
    {
      ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
      ZwClose(0LL);
      Information = IoStatusBlock.Information;
      if ( a7 )
      {
        *(_DWORD *)(a7 + 208) = 1;
        *(_QWORD *)(a7 + 216) = FileHandle;
        *(_DWORD *)(a7 + 224) = Information - Length;
      }
      CmRegistryIODebug = 1;
      dword_14096F960 = Information - Length;
      result = 3221225489LL;
      qword_14096F958 = (__int64)FileHandle;
      return result;
    }
LABEL_11:
    v7 = v19;
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
  qword_14096F958 = (__int64)FileHandle;
  dword_14096F960 = Status;
LABEL_13:
  ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
  ZwClose(0LL);
  return (unsigned int)Status;
}
