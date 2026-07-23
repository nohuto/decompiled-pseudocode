/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x1800E6C9C
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x18006AC30 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18006AC90 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180066C70 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

__int64 __fastcall UpcaseUnicodeToUTF8NHelper(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  unsigned int v6; // r15d
  int v7; // edi
  _DWORD *v9; // r12
  unsigned int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // r11
  WCHAR *v15; // r9
  WCHAR v16; // r8
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-D0h]
  WCHAR UnicodeStringSource[64]; // [rsp+40h] [rbp-C8h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = 0;
  v19 = a3;
  v9 = a3;
  if ( a5 )
  {
    while ( 1 )
    {
      if ( !UTF8StringMaxByteCount )
        goto LABEL_20;
      if ( v5 < 0x40 )
        break;
      v12 = 64;
      if ( v5 != 64 && (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
      {
        v12 = 63;
LABEL_8:
        if ( !v12 )
          goto LABEL_16;
      }
      v13 = Nls844UnicodeUpcaseTable;
      v14 = v12;
      v15 = UnicodeStringSource;
      do
      {
        v16 = *(WCHAR *)((char *)v15 + a4 - (_QWORD)UnicodeStringSource);
        if ( v16 >= 0x61u )
        {
          if ( v16 > 0x7Au )
            v16 += *(_WORD *)(v13
                            + 2LL
                            * ((v16 & 0xF)
                             + (unsigned int)*(unsigned __int16 *)(v13
                                                                 + 2LL
                                                                 * (((v16 >> 4) & 0xF)
                                                                  + (unsigned int)*(unsigned __int16 *)(v13 + 2 * ((unsigned __int64)v16 >> 8))))));
          else
            v16 -= 32;
        }
        *v15++ = v16;
        --v14;
      }
      while ( v14 );
      v9 = v19;
LABEL_16:
      if ( RtlUnicodeToUTF8N(
             UTF8StringDestination,
             UTF8StringMaxByteCount,
             &UTF8StringActualByteCount,
             UnicodeStringSource,
             2 * v12) < 0 )
      {
        v7 += UTF8StringActualByteCount;
        v6 = -1073741789;
        goto LABEL_20;
      }
      UTF8StringDestination += UTF8StringActualByteCount;
      UTF8StringMaxByteCount -= UTF8StringActualByteCount;
      v7 += UTF8StringActualByteCount;
      a4 += 2LL * v12;
      v5 -= v12;
      if ( !v5 )
        goto LABEL_20;
    }
    v12 = v5;
    goto LABEL_8;
  }
LABEL_20:
  if ( v9 )
    *v9 = v7;
  return v6;
}
