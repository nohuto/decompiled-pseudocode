/*
 * XREFs of ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01D9720
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007F150 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall SetFilterKeys(struct _UNICODE_STRING *a1, struct tagFILTERKEYS *a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  wchar_t Dest[40]; // [rsp+20h] [rbp-88h] BYREF

  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 1));
  v4 = FastWriteProfileStringW(a1, 15LL, L"Flags", Dest);
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 2));
  v5 = FastWriteProfileStringW(a1, 15LL, L"DelayBeforeAcceptance", Dest) & v4;
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 3));
  v6 = FastWriteProfileStringW(a1, 15LL, L"AutoRepeatDelay", Dest) & v5;
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 4));
  v7 = FastWriteProfileStringW(a1, 15LL, L"AutoRepeatRate", Dest) & v6;
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 5));
  return v7 & (unsigned int)FastWriteProfileStringW(a1, 15LL, L"BounceTime", Dest);
}
