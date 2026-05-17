/*
 * XREFs of LdrpCheckKnownDllFullPath @ 0x180075338
 * Callers:
 *     LdrpLoadKnownDll @ 0x1800223F4 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18000A720 (RtlEqualUnicodeString.c)
 */

char __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, __int64 a2)
{
  char result; // al
  _WORD *i; // r9
  unsigned __int64 v4; // rax
  unsigned __int16 v5; // r9
  __int16 v6; // ax
  unsigned __int16 v7[4]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  result = 0;
  if ( LdrpKnownDllPath )
  {
    for ( i = (_WORD *)(*a1 + *((_QWORD *)a1 + 1) - 2LL); ; --i )
    {
      *(_QWORD *)(a2 + 8) = i;
      v4 = *((_QWORD *)a1 + 1);
      if ( (unsigned __int64)i <= v4 )
        break;
      if ( *i == 92 || *i == 47 )
      {
        *(_QWORD *)(a2 + 8) = i + 1;
        LOWORD(i) = (_WORD)i + 2;
        LOWORD(v4) = a1[4];
        break;
      }
    }
    v5 = (_WORD)i - v4;
    v6 = *a1 - v5;
    v7[1] = v5;
    *(_WORD *)a2 = v6;
    *(_WORD *)(a2 + 2) = a1[1] - v5;
    v8 = *((_QWORD *)a1 + 1);
    v7[0] = v5 - 2;
    return RtlEqualUnicodeString(v7, (__int64)&LdrpKnownDllPath, 1);
  }
  return result;
}
