/*
 * XREFs of RtlStringCchCopyUnicodeString @ 0x1C00E125C
 * Callers:
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C00E100C (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C00E12E0 (RtlUnicodeStringValidateSrcWorker.c)
 */

NTSTATUS __stdcall RtlStringCchCopyUnicodeString(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        PCUNICODE_STRING SourceString)
{
  size_t v3; // r9
  NTSTATUS result; // eax
  __int64 v6; // rcx
  size_t v7; // r8
  signed __int64 v8; // rdx
  NTSTRSAFE_PWSTR v9; // rax
  ULONG v10; // [rsp+20h] [rbp-18h]
  size_t pcchSrcLength; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *ppszSrc; // [rsp+58h] [rbp+20h] BYREF

  pcchSrcLength = cchDest;
  result = RtlUnicodeStringValidateSrcWorker(SourceString, &ppszSrc, &pcchSrcLength, v3, v10);
  if ( result < 0 )
  {
    *pszDest = 0;
  }
  else
  {
    v6 = 32LL;
    v7 = pcchSrcLength;
    v8 = (char *)ppszSrc - (char *)pszDest;
    do
    {
      if ( !(v6 + v7 - 32) )
        break;
      *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
      ++pszDest;
      --v6;
    }
    while ( v6 );
    v9 = pszDest - 1;
    if ( v6 )
      v9 = pszDest;
    *v9 = 0;
    return v6 == 0 ? 0x80000005 : 0;
  }
  return result;
}
