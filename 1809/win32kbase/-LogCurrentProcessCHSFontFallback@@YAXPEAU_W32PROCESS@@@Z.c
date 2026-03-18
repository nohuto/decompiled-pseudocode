/*
 * XREFs of ?LogCurrentProcessCHSFontFallback@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00ACA7C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall LogCurrentProcessCHSFontFallback(struct _W32PROCESS *a1)
{
  __int64 v1; // rdx
  _DWORD *i; // rax
  __int64 v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  v1 = 0LL;
  for ( i = (_DWORD *)((char *)a1 + 300); !*i; ++i )
  {
    if ( ++v1 >= 6 )
      return;
  }
  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
    {
      v7 = 0;
      v5 = v3;
      v6 = 24;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019E0C1, 0LL, 0LL, 3u, &pData);
    }
  }
}
