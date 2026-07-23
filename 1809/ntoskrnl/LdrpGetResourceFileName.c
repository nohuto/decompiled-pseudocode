/*
 * XREFs of LdrpGetResourceFileName @ 0x140177AC0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F40EC (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     __report_rangecheckfailure @ 0x140268FBC (__report_rangecheckfailure.c)
 */

int __fastcall LdrpGetResourceFileName(__int64 a1, __int64 a2, const WCHAR *a3, UNICODE_STRING *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  int result; // eax
  WCHAR Source[264]; // [rsp+20h] [rbp-248h] BYREF

  if ( !a1 || !a4 || !a3 )
    return -1073741811;
  v7 = *(unsigned __int16 *)(a1 + 88);
  v8 = *(unsigned __int16 *)(a1 + 72);
  v9 = v8 - v7;
  if ( v9 >= 0x208 || (unsigned __int16)v8 <= (unsigned __int16)v7 )
    return -1073020927;
  v10 = (unsigned int)v9;
  memmove(Source, *(const void **)(a1 + 80), (unsigned int)v9);
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v11 >= 0x208 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v11) = 0;
  result = RtlAppendUnicodeToString(a4, Source);
  if ( result >= 0 )
  {
    RtlAppendUnicodeToString(a4, a3);
    RtlAppendUnicodeToString(a4, L"\\");
    result = RtlAppendUnicodeToString(a4, *(PCWSTR *)(a1 + 96));
    if ( result >= 0 )
      return RtlAppendUnicodeToString(a4, L".mui");
  }
  return result;
}
