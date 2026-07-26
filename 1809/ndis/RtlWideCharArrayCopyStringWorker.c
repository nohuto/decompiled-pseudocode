/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x1C0012C14
 * Callers:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x1C0012BB8 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  const wchar_t *v6; // r9
  __int64 v7; // r10
  size_t v8; // r11

  result = 0;
  v6 = L"Total, ";
  v7 = 0x7FFFLL;
  v8 = 0LL;
  if ( !cchDest )
    goto LABEL_7;
  do
  {
    if ( !v7 )
      break;
    if ( !*v6 )
      break;
    *(const wchar_t *)((char *)v6 + (char *)pszDest - (char *)L"Total, ") = *v6;
    --v7;
    ++v6;
    ++v8;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest && v7 && *v6 )
LABEL_7:
    result = -2147483643;
  *pcchNewDestLength = v8;
  return result;
}
