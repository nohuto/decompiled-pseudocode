/*
 * XREFs of WheapWriteTriageDump @ 0x14091AA7C
 * Callers:
 *     WheapCreateTriageDumpFromPreviousSession @ 0x1405AF0DC (WheapCreateTriageDumpFromPreviousSession.c)
 *     WheaCrashDumpInitializationComplete @ 0x14078A48C (WheaCrashDumpInitializationComplete.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x1401A4BD0 (swprintf_s.c)
 *     ZwWriteFile @ 0x1401C01D0 (ZwWriteFile.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwCreateFile @ 0x1401C0B70 (ZwCreateFile.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGetNtSystemRoot @ 0x1406E8730 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall WheapWriteTriageDump(__int64 a1, int a2)
{
  ULONG v2; // esi
  PVOID v3; // r14
  NTSTATUS v4; // ebx
  wchar_t *PoolWithTag; // rax
  WCHAR *v6; // rdi
  int v7; // r15d
  PWSTR NtSystemRoot; // rax
  __int64 v9; // rax
  PLARGE_INTEGER AllocationSize; // [rsp+20h] [rbp-69h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp+67h] BYREF
  int Data; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+77h] BYREF

  Data = a2;
  v2 = WheapTriageDumpLength;
  v3 = WheapTriageDump;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  FileHandle = 0LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v4 < 0 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x61656857u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = MEMORY[0xFFFFF78000000014];
      swprintf_s(PoolWithTag, 0x100uLL, L"\\SystemRoot\\DUMP%04x.DMP", MEMORY[0xFFFFF78000000014]);
      RtlInitUnicodeString(&DestinationString, v6);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 0LL, 2u, 0, 0, 0x22u, 0LL, 0);
      if ( v4 >= 0 )
      {
        v4 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v3, v2, 0LL, 0LL);
        if ( v4 >= 0 )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash");
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v4 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
          if ( v4 >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"DumpFile");
            NtSystemRoot = RtlGetNtSystemRoot();
            LODWORD(AllocationSize) = v7;
            swprintf_s(v6, 0x100uLL, L"%s\\DUMP%04x.DMP", NtSystemRoot, AllocationSize);
            v9 = -1LL;
            do
              ++v9;
            while ( v6[v9] );
            v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, v6, 2 * v9 + 2);
            if ( v4 >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"TempDestination");
              Data = 1;
              v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
            }
          }
        }
      }
      ExFreePoolWithTag(v6, 0x61656857u);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
