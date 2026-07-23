/*
 * XREFs of RtlQueryActivationContextApplicationSettings @ 0x180077860
 * Callers:
 *     sub_1800D4FE0 @ 0x1800D4FE0 (sub_1800D4FE0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_180026FF4 @ 0x180026FF4 (sub_180026FF4.c)
 *     sub_18002715C @ 0x18002715C (sub_18002715C.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_180077A00 @ 0x180077A00 (sub_180077A00.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __cdecl RtlQueryActivationContextApplicationSettings(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PWSTR SettingsNameSpace,
        PWSTR SettingName,
        PWSTR Buffer,
        SIZE_T BufferLength,
        PSIZE_T RequiredLength)
{
  PWSTR v7; // rsi
  NTSTATUS v9; // ebx
  ULONG v11; // edi
  _DWORD *v12; // rbx
  __int64 v13; // rdi
  char *v14; // rax
  signed __int64 v15; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // [rsp+40h] [rbp-61h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-59h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v21[14]; // [rsp+60h] [rbp-41h] BYREF
  ULONG v22; // [rsp+100h] [rbp+5Fh] BYREF

  v19 = 0LL;
  v7 = L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  v22 = 0;
  v18 = -1;
  if ( SettingsNameSpace )
    v7 = SettingsNameSpace;
  if ( !Buffer && BufferLength )
    return -1073741811;
  v9 = sub_180077A00(1LL, ActivationContext, 0LL, &v19);
  if ( v9 >= 0 )
  {
    v9 = sub_180026FF4(v19, 0LL, 0xAu, &DestinationString, &v22);
    if ( v9 >= 0 )
    {
      v11 = v22;
      v12 = *(_DWORD **)&DestinationString.Length;
      if ( v22 >= 0x2C && **(_DWORD **)&DestinationString.Length == 1682469715 )
      {
        RtlInitUnicodeString(&DestinationString, SettingName);
        memset((char *)v21 + 4, 0, 0x6CuLL);
        LODWORD(v21[0]) = 112;
        v9 = sub_18002715C(v12, v11, &DestinationString, (unsigned int *)v21, &v18, &v22);
        if ( v9 >= 0 )
        {
          if ( HIDWORD(v21[0]) != 1 )
            return -1072365565;
          v13 = v21[1];
          v14 = (char *)(v21[1] + *(unsigned int *)(v21[1] + 12LL));
          v15 = (char *)v7 - v14;
          do
          {
            v16 = *(unsigned __int16 *)&v14[v15];
            v17 = *(unsigned __int16 *)v14 - v16;
            if ( v17 )
              break;
            v14 += 2;
          }
          while ( v16 );
          if ( v17 )
            return -1072365560;
          if ( BufferLength < (unsigned __int64)*(unsigned int *)(v21[1] + 24LL) >> 1 )
            v9 = -1073741789;
          else
            memmove(
              Buffer,
              (const void *)(v21[1] + *(unsigned int *)(v21[1] + 28LL)),
              *(unsigned int *)(v21[1] + 24LL) + 2LL);
          if ( RequiredLength )
            *RequiredLength = ((unsigned __int64)*(unsigned int *)(v13 + 24) >> 1) + 1;
        }
      }
      else
      {
        DbgPrintEx(
          0x33u,
          0,
          "RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
          *(const void **)&DestinationString.Length,
          v22);
        v9 = -1072365565;
      }
    }
  }
  if ( v9 == -1072365567 )
    return -1072365560;
  return v9;
}
