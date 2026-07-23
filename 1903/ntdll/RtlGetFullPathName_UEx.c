/*
 * XREFs of RtlGetFullPathName_UEx @ 0x1800291D0
 * Callers:
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x180080430 (RtlGetFullPathName_U.c)
 *     RtlDosSearchPath_U @ 0x18008A1B0 (RtlDosSearchPath_U.c)
 * Callees:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UEx(
        PCWSTR FileName,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart,
        ULONG *BytesRequired)
{
  ULONG *v5; // rbx
  NTSTATUS result; // eax
  ULONG v10; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = BytesRequired;
  if ( BytesRequired )
    *BytesRequired = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, FileName);
  if ( result >= 0 )
  {
    v10 = sub_180027B70(&DestinationString.Length, BufferLength, Buffer, FilePart, 0LL, (__int64)&BytesRequired);
    if ( v10 )
    {
      if ( v5 )
        *v5 = v10;
      return 0;
    }
    else
    {
      return -1073741773;
    }
  }
  return result;
}
