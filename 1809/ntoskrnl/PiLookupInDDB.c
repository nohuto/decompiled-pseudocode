/*
 * XREFs of PiLookupInDDB @ 0x14067FFCC
 * Callers:
 *     PpCheckInDriverDatabase @ 0x14068029C (PpCheckInDriverDatabase.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1401B87F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401B8830 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1401B8C30 (ZwCreateSection.c)
 *     SdbInitDatabaseInMemory @ 0x1405A31DC (SdbInitDatabaseInMemory.c)
 *     PiIsDriverBlocked @ 0x14067FCB0 (PiIsDriverBlocked.c)
 *     SdbReleaseDatabase @ 0x140681C9C (SdbReleaseDatabase.c)
 *     PnpLogEvent @ 0x140828FEC (PnpLogEvent.c)
 */

__int64 __fastcall PiLookupInDDB(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  int IsDriverBlocked; // ebx
  int v10; // eax
  const WCHAR *v11; // rdx
  PVOID BaseAddress; // [rsp+58h] [rbp-39h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-31h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING v15; // [rsp+70h] [rbp-21h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp+27h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp+37h] BYREF

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
    v10 = PiLoggedErrorEventsMask | 0x10;
    v11 = L"DATABASE OPEN FAILED";
LABEL_19:
    PiLoggedErrorEventsMask = v10;
    RtlInitUnicodeString(&v15, v11);
    PnpLogEvent(&v15, 0LL, 3221226349LL, 0LL, 0);
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
    v10 = PiLoggedErrorEventsMask | 0x20;
    v11 = L"DATABASE SECTION FAILED";
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
    v10 = PiLoggedErrorEventsMask | 0x40;
    v11 = L"DATABASE MAPPING FAILED";
    goto LABEL_19;
  }
  PpDDBHandle = (PVOID)SdbInitDatabaseInMemory((__int64)BaseAddress, ViewSize);
  if ( !PpDDBHandle )
  {
    IsDriverBlocked = -1073741823;
    if ( (PiLoggedErrorEventsMask & 0x80u) != 0 )
      goto LABEL_14;
    v10 = PiLoggedErrorEventsMask | 0x80;
    v11 = L"INIT DATABASE FAILED";
    goto LABEL_19;
  }
LABEL_2:
  IsDriverBlocked = PiIsDriverBlocked(a1, a1, a2, a3, a4);
  if ( !BaseAddress )
    goto LABEL_3;
  SdbReleaseDatabase(PpDDBHandle);
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
