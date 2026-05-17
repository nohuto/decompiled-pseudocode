/*
 * XREFs of LdrpCheckKnownDllFullPath @ 0x18002A8BC
 * Callers:
 *     LdrpLoadKnownDll @ 0x180029560 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 */

char __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, __int64 a2)
{
  char result; // al
  _WORD *i; // rax
  __int16 v5; // cx
  __int16 v6; // ax
  unsigned __int16 v7[4]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  result = 0;
  if ( LdrpKnownDllPath )
  {
    for ( i = (_WORD *)(*a1 + *((_QWORD *)a1 + 1) - 2LL); ; --i )
    {
      *(_QWORD *)(a2 + 8) = i;
      if ( (unsigned __int64)i <= *((_QWORD *)a1 + 1) )
        break;
      if ( *i == 92 || *i == 47 )
      {
        *(_QWORD *)(a2 + 8) = i + 1;
        break;
      }
    }
    v5 = *(_WORD *)(a2 + 8) - a1[4];
    v6 = *a1 - v5;
    v7[1] = *(_WORD *)(a2 + 8) - a1[4];
    *(_WORD *)a2 = v6;
    *(_WORD *)(a2 + 2) = a1[1] - v5;
    v8 = *((_QWORD *)a1 + 1);
    v7[0] = v5 - 2;
    return RtlEqualUnicodeString(v7, (__int64)&LdrpKnownDllPath, 1);
  }
  return result;
}
