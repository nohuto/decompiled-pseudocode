/*
 * XREFs of ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D9BC8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007F150 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall SetSoundSentry(struct _UNICODE_STRING *a1, struct tagSOUNDSENTRYW *a2)
{
  int v4; // ebx
  int v5; // ebx
  wchar_t Dest[40]; // [rsp+20h] [rbp-78h] BYREF

  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 1));
  v4 = FastWriteProfileStringW(a1, 19LL, L"Flags", Dest);
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 2));
  v5 = FastWriteProfileStringW(a1, 19LL, L"TextEffect", Dest) & v4;
  RtlStringCchPrintfW(Dest, 40LL, L"%d", *((unsigned int *)a2 + 8));
  return v5 & (unsigned int)FastWriteProfileStringW(a1, 19LL, L"WindowsEffect", Dest);
}
