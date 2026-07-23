/*
 * XREFs of RtlGetFullPathName_U @ 0x180080430
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_UEx @ 0x1800291D0 (RtlGetFullPathName_UEx.c)
 */

ULONG __cdecl RtlGetFullPathName_U(PCWSTR FileName, ULONG BufferLength, PWSTR Buffer, PWSTR *FilePart)
{
  NTSTATUS FullPathName_UEx; // eax
  ULONG v5; // ecx
  ULONG BytesRequired[6]; // [rsp+30h] [rbp-18h] BYREF

  FullPathName_UEx = RtlGetFullPathName_UEx(FileName, BufferLength, Buffer, FilePart, BytesRequired);
  v5 = 0;
  if ( FullPathName_UEx >= 0 )
    return BytesRequired[0];
  return v5;
}
