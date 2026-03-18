/*
 * XREFs of RtlUnicodeStringCopyString @ 0x14018DB00
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1401451A0 (RtlUnicodeStringValidateDestWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t *v2; // r9
  NTSTATUS result; // eax
  size_t v6; // r8
  __int64 v7; // rdx
  __int16 v8; // cx
  signed __int64 v9; // r10
  size_t v10; // [rsp+20h] [rbp-18h]
  ULONG v11; // [rsp+28h] [rbp-10h]
  size_t pcchDest; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *ppszDest; // [rsp+58h] [rbp+20h] BYREF

  result = RtlUnicodeStringValidateDestWorker(DestinationString, &ppszDest, &pcchDest, v2, v10, v11);
  if ( result >= 0 )
  {
    v6 = pcchDest;
    v7 = 0x7FFFLL;
    result = 0;
    v8 = 0;
    if ( !pcchDest )
      goto LABEL_16;
    v9 = (char *)ppszDest - (char *)pszSrc;
    do
    {
      if ( !v7 )
        break;
      if ( !*pszSrc )
        break;
      *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v9) = *pszSrc;
      --v7;
      ++pszSrc;
      ++v8;
      --v6;
    }
    while ( v6 );
    if ( !v6 && v7 )
    {
LABEL_16:
      if ( *pszSrc )
        result = -2147483643;
    }
    DestinationString->Length = 2 * v8;
  }
  return result;
}
