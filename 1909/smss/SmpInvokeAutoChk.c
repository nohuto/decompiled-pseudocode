/*
 * XREFs of SmpInvokeAutoChk @ 0x140001158
 * Callers:
 *     SmpExecuteCommand @ 0x1400017F4 (SmpExecuteCommand.c)
 * Callees:
 *     SmpExecuteImage @ 0x140001F14 (SmpExecuteImage.c)
 *     RtlStringCbPrintfW @ 0x140004FB0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 */

__int64 __fastcall SmpInvokeAutoChk(const UNICODE_STRING *a1, int a2, PCUNICODE_STRING Source, int a4)
{
  int v7; // edi
  int v8; // r9d
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t pszDest[512]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = (int)a1;
  if ( (a4 & 0x10) != 0 )
  {
    if ( RtlStringCbPrintfW(pszDest, 0x400uLL, L"%wZ program not found - skipping AUTOCHECK\n", a1) >= 0 )
    {
      RtlInitUnicodeStringEx(&Destination, pszDest);
      NtDisplayString(&Destination);
    }
  }
  else
  {
    *(_QWORD *)&Destination.Length = 0x4000000LL;
    Destination.Buffer = pszDest;
    if ( RtlAppendUnicodeStringToString(&Destination, a1) >= 0
      && RtlAppendUnicodeToString(&Destination, L" ") >= 0
      && RtlAppendUnicodeStringToString(&Destination, Source) >= 0 )
    {
      SmpExecuteImage(v7, a2, (int)&Destination, v8, 0LL, a4 & 0xFFFFFFFB, 0LL);
    }
  }
  return 0LL;
}
