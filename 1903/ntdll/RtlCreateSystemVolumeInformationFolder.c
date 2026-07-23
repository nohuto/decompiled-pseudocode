/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x180086610
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800862C4 @ 0x1800862C4 (sub_1800862C4.c)
 *     sub_1800868A8 @ 0x1800868A8 (sub_1800868A8.c)
 *     sub_180086A04 @ 0x180086A04 (sub_180086A04.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlCreateSystemVolumeInformationFolder(unsigned __int16 *a1)
{
  USHORT v2; // dx
  __int16 v3; // di
  WCHAR *Heap; // rax
  unsigned __int16 v5; // ax
  NTSTATUS v6; // ebx
  PVOID ProcessHeap; // rcx
  struct _PEB *v8; // rcx
  void *Buffer; // r8
  _UNICODE_STRING v11; // [rsp+60h] [rbp-29h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+67h] BYREF
  PVOID v16; // [rsp+F8h] [rbp+6Fh] BYREF
  PVOID v17; // [rsp+100h] [rbp+77h] BYREF

  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  v2 = DestinationString.Length + *a1;
  v11.Length = v2;
  if ( v2 < *a1 || v2 < DestinationString.Length )
    return 3221225485LL;
  v3 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2);
  if ( v3 != 92 )
  {
    v2 += 2;
    v11.Length = v2;
  }
  v11.MaximumLength = v2 + 2;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned __int16)(v2 + 2));
  v11.Buffer = Heap;
  if ( !Heap )
    return 3221225626LL;
  memmove(Heap, *((const void **)a1 + 1), *a1);
  v5 = *a1;
  v11.Length = *a1;
  if ( v3 != 92 )
  {
    v11.Buffer[(unsigned __int64)v5 >> 1] = 92;
    v5 = v11.Length + 2;
    v11.Length += 2;
  }
  memmove((char *)v11.Buffer + v5, DestinationString.Buffer, DestinationString.Length);
  v11.Length += DestinationString.Length;
  v11.Buffer[(unsigned __int64)v11.Length >> 1] = 0;
  v6 = sub_1800868A8(&v16, &v17);
  if ( v6 < 0 )
  {
    v8 = NtCurrentPeb();
    Buffer = v11.Buffer;
  }
  else
  {
    ObjectAttributes.ObjectName = &v11;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = v16;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( ZwCreateFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x201060u, 0LL, 0) >= 0 )
      ZwClose(FileHandle);
    v6 = ZwCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    if ( v6 < 0 )
    {
      sub_1800862C4(&v11);
      v6 = ZwCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11.Buffer);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v6 < 0 )
    {
      RtlFreeHeap(ProcessHeap, 0, v17);
      v8 = NtCurrentPeb();
      Buffer = v16;
    }
    else
    {
      RtlFreeHeap(ProcessHeap, 0, v16);
      v6 = sub_180086A04(FileHandle, (PACL)v17);
      ZwClose(FileHandle);
      v8 = NtCurrentPeb();
      Buffer = v17;
    }
  }
  RtlFreeHeap(v8->ProcessHeap, 0, Buffer);
  return (unsigned int)v6;
}
