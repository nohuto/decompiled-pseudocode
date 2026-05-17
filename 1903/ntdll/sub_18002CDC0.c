/*
 * XREFs of sub_18002CDC0 @ 0x18002CDC0
 * Callers:
 *     sub_18002C750 @ 0x18002C750 (sub_18002C750.c)
 *     sub_18002CB3C @ 0x18002CB3C (sub_18002CB3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002CDC0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rcx

  result = 0LL;
  if ( a2 && a1 )
  {
    *a2 = 0LL;
    v4 = 0;
    while ( 1 )
    {
      v5 = 32LL * v4;
      v6 = *a1 - *(_QWORD *)((char *)&unk_180118270 + v5 + 4);
      if ( *a1 == *(_QWORD *)((char *)&unk_180118270 + v5 + 4) )
        v6 = a1[1] - *(_QWORD *)((char *)&unk_180118270 + v5 + 12);
      if ( !v6 )
        break;
      if ( ++v4 >= 5 )
        return result;
    }
    result = 1LL;
    *a2 = (char *)&unk_180118270 + v5;
  }
  return result;
}
