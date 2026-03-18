/*
 * XREFs of RtlUnicodeStringCopy @ 0x1C0062FB0
 * Callers:
 *     GetImageName @ 0x1C006227C (GetImageName.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0030310 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C003034C (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlWideCharArrayCopyWorker @ 0x1C00303CC (RtlWideCharArrayCopyWorker.c)
 */

int __fastcall RtlUnicodeStringCopy(
        _UNICODE_STRING *DestinationString,
        const _UNICODE_STRING *SourceString,
        __int64 a3,
        unsigned __int64 *a4)
{
  int result; // eax
  unsigned __int64 v7; // r9
  __int16 v8; // bx
  wchar_t *pszSrc; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 cchDest; // [rsp+38h] [rbp-20h] BYREF
  wchar_t *pszDest; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 cchNewDestLength; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 cchSrcLength; // [rsp+78h] [rbp+20h] BYREF

  result = RtlUnicodeStringValidateDestWorker(DestinationString, &pszDest, &cchDest, a4);
  v8 = 0;
  if ( result >= 0 )
  {
    cchNewDestLength = 0LL;
    result = RtlUnicodeStringValidateSrcWorker(SourceString, &pszSrc, &cchSrcLength, v7);
    if ( result >= 0 )
    {
      result = RtlWideCharArrayCopyWorker(pszDest, cchDest, &cchNewDestLength, pszSrc, cchSrcLength);
      v8 = cchNewDestLength;
    }
    DestinationString->Length = 2 * v8;
  }
  return result;
}
