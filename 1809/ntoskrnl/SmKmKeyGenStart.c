/*
 * XREFs of SmKmKeyGenStart @ 0x1408AE54C
 * Callers:
 *     SmcCacheManagerStart @ 0x1408AFD60 (SmcCacheManagerStart.c)
 * Callees:
 *     SmAlloc @ 0x1400E4BD4 (SmAlloc.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140306EB0 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall SmKmKeyGenStart(__int64 a1, const struct _UNICODE_STRING *a2)
{
  unsigned int v2; // ebx
  __int64 Length; // rbp
  char *v6; // rax
  char *v7; // rsi
  char *v8; // r8
  __int64 v9; // rcx
  __int16 v10; // ax
  __int16 v11; // ax

  v2 = 0;
  if ( a2 )
  {
    Length = a2->Length;
    v6 = (char *)SmAlloc(Length + 2, 0x474B6D73u);
    v7 = v6;
    if ( v6 )
    {
      RtlStringCbCopyUnicodeString(v6, Length + 2, a2);
      *(_QWORD *)(a1 + 24) = 0LL;
      v8 = v7;
      *(_QWORD *)(a1 + 32) = 0LL;
      v9 = 0x7FFFLL;
      do
      {
        if ( !*(_WORD *)v8 )
          break;
        v8 += 2;
        --v9;
      }
      while ( v9 );
      if ( v9 )
        v10 = 0x7FFF - v9;
      else
        v10 = 0;
      if ( v9 && a1 != -24 )
      {
        v11 = 2 * v10;
        *(_QWORD *)(a1 + 32) = v7;
        *(_WORD *)(a1 + 24) = v11;
        *(_WORD *)(a1 + 26) = v11 + 2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
