/*
 * XREFs of ApiSetpLoadSchemaImage @ 0x14091B1B4
 * Callers:
 *     ApiSetLoadSchemaEx @ 0x14091ACDC (ApiSetLoadSchemaEx.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1401C1150 (ZwMapViewOfSection.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1401C1590 (ZwCreateSection.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall ApiSetpLoadSchemaImage(__int64 a1, UNICODE_STRING *a2, PVOID *a3, ULONG_PTR *a4)
{
  NTSTATUS v7; // ebx
  PVOID BaseAddress; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES v13; // [rsp+A8h] [rbp+17h] BYREF
  HANDLE SectionHandle; // [rsp+F8h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+6Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  memset(&v13, 0, sizeof(v13));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileHandle = (HANDLE)-1LL;
  SectionHandle = (HANDLE)-1LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a2;
  v7 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v7 >= 0 )
  {
    v13.RootDirectory = 0LL;
    v13.ObjectName = 0LL;
    v13.Length = 48;
    v13.Attributes = 576;
    *(_OWORD *)&v13.SecurityDescriptor = 0LL;
    v7 = ZwCreateSection(&SectionHandle, 4u, &v13, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v7 >= 0 )
    {
      BaseAddress = 0LL;
      ViewSize = 0LL;
      v7 = ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewUnmap,
             0,
             2u);
      if ( v7 >= 0 )
      {
        *a3 = BaseAddress;
        *a4 = ViewSize;
      }
    }
  }
  if ( SectionHandle != (HANDLE)-1LL )
    ZwClose(SectionHandle);
  if ( FileHandle != (HANDLE)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}
