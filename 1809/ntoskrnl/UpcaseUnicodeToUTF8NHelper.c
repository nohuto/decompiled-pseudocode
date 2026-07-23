/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x1402ED070
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x14067D420 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14067D480 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlUnicodeToUTF8N @ 0x1406C08F0 (RtlUnicodeToUTF8N.c)
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
  CHAR *v11; // r13
  unsigned int v12; // ebx
  __int64 v13; // r13
  WCHAR *v14; // r10
  WCHAR v15; // r9
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-D8h] BYREF
  PCHAR v18; // [rsp+38h] [rbp-D0h]
  WCHAR UnicodeStringSource[64]; // [rsp+40h] [rbp-C8h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = 0;
  v18 = UTF8StringDestination;
  v11 = UTF8StringDestination;
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
      v13 = v12;
      v14 = UnicodeStringSource;
      do
      {
        v15 = *(WCHAR *)((char *)v14 + a4 - (_QWORD)UnicodeStringSource);
        if ( v15 >= 0x61u )
        {
          if ( v15 > 0x7Au )
            v15 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v15 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v15 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v15 >> 8)]]];
          else
            v15 -= 32;
        }
        *v14++ = v15;
        --v13;
      }
      while ( v13 );
      v11 = v18;
LABEL_16:
      if ( RtlUnicodeToUTF8N(v11, UTF8StringMaxByteCount, &UTF8StringActualByteCount, UnicodeStringSource, 2 * v12) < 0 )
      {
        v7 += UTF8StringActualByteCount;
        v6 = -1073741789;
        goto LABEL_20;
      }
      v11 += UTF8StringActualByteCount;
      UTF8StringMaxByteCount -= UTF8StringActualByteCount;
      v18 = v11;
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
  if ( a3 )
    *a3 = v7;
  return v6;
}
