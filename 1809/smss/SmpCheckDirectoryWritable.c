/*
 * XREFs of SmpCheckDirectoryWritable @ 0x14000D980
 * Callers:
 *     SmpShuffleMove @ 0x140015F90 (SmpShuffleMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpCheckDirectoryWritable(struct _UNICODE_STRING *a1)
{
  unsigned int v1; // ebx
  struct _IO_STATUS_BLOCK v3; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v4; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  Handle = 0LL;
  v4.RootDirectory = 0LL;
  v4.ObjectName = a1;
  v4.Length = 48;
  *(_OWORD *)&v4.SecurityDescriptor = 0LL;
  v4.Attributes = 64;
  v1 = NtOpenFile(&Handle, 2u, &v4, &v3, 3u, 0);
  if ( Handle )
    NtClose(Handle);
  return v1;
}
