/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x180001B80
 * Callers:
 *     <none>
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x180071EA0 (RtlPrefixUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x180075A40 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

NTSTATUS __cdecl RtlNtPathNameToDosPathName(
        ULONG Flags,
        PRTL_UNICODE_STRING_BUFFER Path,
        PULONG Disposition,
        PWSTR *FilePart)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v8; // rbp
  const _UNICODE_STRING *v9; // r14
  unsigned __int16 *v10; // r15
  unsigned __int16 v11; // si
  SIZE_T v12; // r8
  wchar_t *Buffer; // rcx
  __int64 Length; // r8
  unsigned __int16 v15; // si
  int v17; // eax

  v4 = 0;
  v8 = 0LL;
  if ( Disposition )
    *Disposition = 0;
  if ( !Path )
    return -1073741811;
  if ( Flags )
    return -1073741811;
  if ( FilePart )
  {
    if ( *FilePart )
    {
      v8 = *FilePart - Path->String.Buffer;
      if ( v8 >= (unsigned __int64)Path->String.Length >> 1 )
        return -1073741811;
    }
  }
  v9 = &RtlpDosDevicesUncPrefix;
  if ( RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesUncPrefix, &Path->String, 1u) )
  {
    v10 = (unsigned __int16 *)&unk_1801192D0;
    if ( Disposition )
      *Disposition = 2;
    goto LABEL_10;
  }
  v9 = &RtlpDosDevicesPrefix;
  if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpDosDevicesPrefix, &Path->String, 1u) )
  {
    if ( !Disposition )
      return v4;
    v17 = RtlDetermineDosPathNameType_Ustr(Path);
    if ( v17 )
    {
      if ( v17 <= 0 )
        return v4;
      if ( v17 <= 2 )
      {
LABEL_32:
        *Disposition = 4;
        return v4;
      }
      if ( v17 != 3 && v17 != 4 && v17 != 5 )
      {
        if ( v17 > 7 )
          return v4;
        goto LABEL_32;
      }
    }
    *Disposition = 1;
    return v4;
  }
  v10 = (unsigned __int16 *)&RtlpEmptyString;
  if ( Disposition )
    *Disposition = 3;
LABEL_10:
  v11 = (*v10 >> 1) + (Path->String.Length >> 1) - (v9->Length >> 1);
  v12 = 2LL * v11 + 2;
  if ( v12 > 0xFFFE )
    return -1073741562;
  if ( (Path == (PRTL_UNICODE_STRING_BUFFER)-16LL || v12 > Path->ByteBuffer.Size)
    && (int)RtlpEnsureBufferSize(0LL, &Path->ByteBuffer) < 0 )
  {
    return -1073741801;
  }
  Buffer = (wchar_t *)Path->ByteBuffer.Buffer;
  Length = Path->String.Length;
  Path->String.MaximumLength = Path->ByteBuffer.Size;
  Path->String.Buffer = Buffer;
  memmove(&Buffer[(unsigned __int64)*v10 >> 1], &Buffer[(unsigned __int64)v9->Length >> 1], Length - v9->Length);
  memmove(Path->String.Buffer, *((const void **)v10 + 1), *v10);
  v15 = 2 * v11;
  Path->String.Length = v15;
  Path->String.Buffer[(unsigned __int64)v15 >> 1] = 0;
  if ( v8 )
    *FilePart = &Path->String.Buffer[v8 + ((unsigned __int64)*v10 >> 1) - ((unsigned __int64)v9->Length >> 1)];
  return v4;
}
