/*
 * XREFs of RtlQueryActivationContextApplicationSettings @ 0x180077CE0
 * Callers:
 *     LdrpIsNlsUtf8Process @ 0x1800D50A0 (LdrpIsNlsUtf8Process.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlpLocateActivationContextSection @ 0x180026FF4 (RtlpLocateActivationContextSection.c)
 *     RtlpFindUnicodeStringInSection @ 0x18002715C (RtlpFindUnicodeStringInSection.c)
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     RtlpGetActivationContextData @ 0x180077E80 (RtlpGetActivationContextData.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall RtlQueryActivationContextApplicationSettings(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        const WCHAR *a4,
        void *a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  const wchar_t *v7; // rsi
  int ActivationContextData; // ebx
  unsigned int v11; // edi
  _DWORD *v12; // rbx
  __int64 v13; // rdi
  char *v14; // rax
  signed __int64 v15; // rsi
  int v16; // edx
  int v17; // ecx
  int v18; // [rsp+40h] [rbp-61h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v21[14]; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v22; // [rsp+100h] [rbp+5Fh] BYREF

  v19 = 0LL;
  v7 = L"http://schemas.microsoft.com/SMI/2005/WindowsSettings";
  v22 = 0;
  v18 = -1;
  if ( a3 )
    v7 = a3;
  if ( !a5 && a6 )
    return 3221225485LL;
  ActivationContextData = RtlpGetActivationContextData(1LL, a2, 0LL, &v19);
  if ( ActivationContextData >= 0 )
  {
    ActivationContextData = RtlpLocateActivationContextSection(v19, 0LL, 0xAu, &DestinationString, &v22);
    if ( ActivationContextData >= 0 )
    {
      v11 = v22;
      v12 = *(_DWORD **)&DestinationString.Length;
      if ( v22 >= 0x2C && **(_DWORD **)&DestinationString.Length == 1682469715 )
      {
        RtlInitUnicodeString(&DestinationString, a4);
        memset((char *)v21 + 4, 0, 0x6CuLL);
        LODWORD(v21[0]) = 112;
        ActivationContextData = RtlpFindUnicodeStringInSection(
                                  v12,
                                  v11,
                                  &DestinationString.Length,
                                  (unsigned int *)v21,
                                  &v18,
                                  &v22);
        if ( ActivationContextData >= 0 )
        {
          if ( HIDWORD(v21[0]) != 1 )
            return 3222601731LL;
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
            return 3222601736LL;
          if ( a6 < (unsigned __int64)*(unsigned int *)(v21[1] + 24LL) >> 1 )
            ActivationContextData = -1073741789;
          else
            memmove(
              a5,
              (const void *)(v21[1] + *(unsigned int *)(v21[1] + 28LL)),
              *(unsigned int *)(v21[1] + 24LL) + 2LL);
          if ( a7 )
            *a7 = ((unsigned __int64)*(unsigned int *)(v13 + 24) >> 1) + 1;
        }
      }
      else
      {
        DbgPrintEx(
          51,
          0,
          "RtlpLocateActivationContextSection() found section at %p (length %lu) which is not a string section\n",
          *(const void **)&DestinationString.Length,
          v22);
        ActivationContextData = -1072365565;
      }
    }
  }
  if ( ActivationContextData == -1072365567 )
    return (unsigned int)-1072365560;
  return (unsigned int)ActivationContextData;
}
