/*
 * XREFs of ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C0256870
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C01350F8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     GetProcessImageFileName @ 0x1C0006598 (GetProcessImageFileName.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

char __fastcall LogFontLoadAttempt(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  const WCHAR **ProcessImageFileName; // rax
  const WCHAR **v7; // rbx
  const WCHAR *v8; // rcx
  char result; // al
  unsigned int v10; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  unsigned int *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]

  v10 = a4;
  ProcessImageFileName = (const WCHAR **)GetProcessImageFileName(a1);
  v7 = ProcessImageFileName;
  if ( ProcessImageFileName )
    v8 = ProcessImageFileName[1];
  else
    v8 = &pwsz;
  result = EtwFontLoadAttemptEvent(v8, a2, a3, v10);
  if ( hProvider > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL);
    if ( result )
    {
      v15 = 0;
      v18 = 0;
      v13 = (int *)&v11;
      v16 = &v10;
      v11 = a2;
      v14 = 4;
      v17 = 4;
      result = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D704A, 0LL, 0LL, 4u, &pData);
    }
  }
  if ( v7 )
    return FreeTmpBuffer(v7);
  return result;
}
