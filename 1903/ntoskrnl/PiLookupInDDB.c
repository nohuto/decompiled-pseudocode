/*
 * XREFs of PiLookupInDDB @ 0x140709E9C
 * Callers:
 *     PpCheckInDriverDatabase @ 0x140709DAC (PpCheckInDriverDatabase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1401C05D0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401C0610 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1401C0A10 (ZwCreateSection.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SdbReleaseDatabase @ 0x140708CB4 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x140708DFC (SdbInitDatabaseInMemory.c)
 *     PiIsDriverBlocked @ 0x14070A0CC (PiIsDriverBlocked.c)
 *     PnpLogEvent @ 0x1408621D8 (PnpLogEvent.c)
 */

__int64 __fastcall PiLookupInDDB(int a1, int a2, int a3, __int64 a4)
{
  int v8; // ecx
  NTSTATUS IsDriverBlocked; // ebx
  int v11; // eax
  const WCHAR *v12; // rdx
  UNICODE_STRING v13; // [rsp+58h] [rbp-39h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-29h] BYREF
  HANDLE SectionHandle; // [rsp+70h] [rbp-21h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp-19h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+27h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp+37h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  if ( PpDDBHandle )
    goto LABEL_2;
  RtlInitUnicodeString(&DestinationString, PiDDBPath);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IsDriverBlocked = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( IsDriverBlocked < 0 )
  {
    if ( InitIsWinPEMode || (PiLoggedErrorEventsMask & 0x10) != 0 )
      goto LABEL_14;
    v11 = PiLoggedErrorEventsMask | 0x10;
    v12 = L"DATABASE OPEN FAILED";
LABEL_19:
    PiLoggedErrorEventsMask = v11;
    v13.Buffer = 0LL;
    *(_QWORD *)&v13.Length = 0LL;
    RtlInitUnicodeString(&v13, v12);
    PnpLogEvent(&v13, 0LL, 3221226349LL, 0LL, 0);
    goto LABEL_14;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IsDriverBlocked = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( IsDriverBlocked < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 0x20) != 0 )
      goto LABEL_14;
    v11 = PiLoggedErrorEventsMask | 0x20;
    v12 = L"DATABASE SECTION FAILED";
    goto LABEL_19;
  }
  ViewSize = 0LL;
  IsDriverBlocked = ZwMapViewOfSection(
                      SectionHandle,
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      &BaseAddress,
                      0LL,
                      0LL,
                      0LL,
                      &ViewSize,
                      ViewShare,
                      0,
                      2u);
  if ( IsDriverBlocked < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 0x40) != 0 )
      goto LABEL_14;
    v11 = PiLoggedErrorEventsMask | 0x40;
    v12 = L"DATABASE MAPPING FAILED";
    goto LABEL_19;
  }
  PpDDBHandle = (PVOID)SdbInitDatabaseInMemory((__int64)BaseAddress, ViewSize);
  if ( !PpDDBHandle )
  {
    IsDriverBlocked = -1073741823;
    if ( (PiLoggedErrorEventsMask & 0x80u) != 0 )
      goto LABEL_14;
    v11 = PiLoggedErrorEventsMask | 0x80;
    v12 = L"INIT DATABASE FAILED";
    goto LABEL_19;
  }
LABEL_2:
  IsDriverBlocked = PiIsDriverBlocked(v8, a1, a2, a3, a4);
  if ( !BaseAddress )
    goto LABEL_3;
  SdbReleaseDatabase((__int64)PpDDBHandle);
  PpDDBHandle = 0LL;
LABEL_14:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_3:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)IsDriverBlocked;
}
