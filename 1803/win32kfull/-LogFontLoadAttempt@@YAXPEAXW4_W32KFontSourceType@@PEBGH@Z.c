/*
 * XREFs of ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C023F134
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0111E94 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     GetProcessImageFileName @ 0x1C0006B4C (GetProcessImageFileName.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

char __fastcall LogFontLoadAttempt(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  const WCHAR **ProcessImageFileName; // rax
  const WCHAR **v7; // rbx
  const WCHAR *v8; // rcx
  char result; // al
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v15; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+6Ch] [rbp+13h]
  unsigned int *v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+78h] [rbp+1Fh]
  int v20; // [rsp+7Ch] [rbp+23h]

  v12 = a4;
  ProcessImageFileName = (const WCHAR **)GetProcessImageFileName(a1);
  v7 = ProcessImageFileName;
  if ( ProcessImageFileName )
    v8 = ProcessImageFileName[1];
  else
    v8 = &pwsz;
  result = EtwFontLoadAttemptEvent(v8, a2, a3, v12);
  if ( (unsigned int)hProvider > 5 )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL);
    if ( result )
    {
      v17 = 0;
      v20 = 0;
      v15 = (int *)&v13;
      v18 = &v12;
      v13 = a2;
      v16 = 4;
      v19 = 4;
      result = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E44F7, v10, v11, 4u, &pData);
    }
  }
  if ( v7 )
    return FreeTmpBuffer(v7);
  return result;
}
