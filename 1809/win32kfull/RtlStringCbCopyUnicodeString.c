/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x1C01DA0F0
 * Callers:
 *     UserGetHipDeviceInfo @ 0x1C01DA560 (UserGetHipDeviceInfo.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C01DACDC (_GetPointerDeviceInfoProperties.c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C01DA1A4 (RtlUnicodeStringValidateSrcWorker.c)
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  size_t v3; // rbx
  signed int v5; // edx
  size_t v6; // rcx
  signed __int64 v7; // rdx
  NTSTRSAFE_PWSTR v8; // rax
  ULONG v10; // [rsp+20h] [rbp-18h]
  size_t v11; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v5 = RtlUnicodeStringValidateSrcWorker(SourceString, &v12, &v11, (const size_t)SourceString, v10);
    if ( v5 < 0 )
    {
      *pszDest = 0;
    }
    else
    {
      if ( v3 )
      {
        v6 = v11 - v3;
        v7 = (char *)v12 - (char *)pszDest;
        do
        {
          if ( !(v6 + v3) )
            break;
          *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
          ++pszDest;
          --v3;
        }
        while ( v3 );
      }
      v8 = pszDest - 1;
      if ( v3 )
        v8 = pszDest;
      v5 = v3 == 0 ? 0x80000005 : 0;
      *v8 = 0;
    }
  }
  return v5;
}
