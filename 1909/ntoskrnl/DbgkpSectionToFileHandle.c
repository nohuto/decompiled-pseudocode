/*
 * XREFs of DbgkpSectionToFileHandle @ 0x14084A6C8
 * Callers:
 *     DbgkCreateThread @ 0x1405E765C (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x14067E638 (DbgkMapViewOfSection.c)
 *     DbgkpPostFakeThreadMessages @ 0x140847D84 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmGetFileNameForSection @ 0x140886A90 (MmGetFileNameForSection.c)
 */

HANDLE __fastcall DbgkpSectionToFileHandle(__int64 a1)
{
  PVOID v1; // rdi
  NTSTATUS v2; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+18h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+20h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( (int)MmGetFileNameForSection(a1, &P) < 0 )
    return 0LL;
  v1 = P;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 1600;
  v2 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  ExFreePoolWithTag(v1, 0);
  if ( v2 < 0 )
    return 0LL;
  else
    return FileHandle;
}
