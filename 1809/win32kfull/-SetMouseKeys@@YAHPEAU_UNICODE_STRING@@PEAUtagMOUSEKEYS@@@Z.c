/*
 * XREFs of ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01C6884
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00F0EE8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall SetMouseKeys(struct _UNICODE_STRING *a1, struct tagMOUSEKEYS *a2)
{
  int v4; // ebx
  int v5; // ebx
  wchar_t pszDest[40]; // [rsp+20h] [rbp-78h] BYREF

  RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a2 + 1));
  v4 = FastWriteProfileStringW(a1, 16LL, L"Flags", pszDest);
  RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a2 + 2));
  v5 = FastWriteProfileStringW(a1, 16LL, L"MaximumSpeed", pszDest) & v4;
  RtlStringCchPrintfW(pszDest, 0x28uLL, L"%d", *((unsigned int *)a2 + 3));
  return v5 & (unsigned int)FastWriteProfileStringW(a1, 16LL, L"TimeToMaximumSpeed", pszDest);
}
