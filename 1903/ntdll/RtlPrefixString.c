/*
 * XREFs of RtlPrefixString @ 0x1800619B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800621B0 (RtlUpperChar.c)
 */

char __fastcall RtlPrefixString(unsigned __int16 *a1, __int64 a2, char a3)
{
  _BYTE *v3; // rdi
  _BYTE *v4; // rsi
  __int64 v5; // r14
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rdx

  v3 = (_BYTE *)*((_QWORD *)a1 + 1);
  if ( *(_WORD *)a2 >= *a1 )
  {
    v4 = &v3[*a1];
    if ( v3 >= v4 )
      return 1;
    if ( a3 )
    {
      v5 = *(_QWORD *)(a2 + 8) - (_QWORD)v3;
      while ( 1 )
      {
        if ( *v3 != v3[v5] )
        {
          v7 = ((__int64 (*)(void))RtlUpperChar)();
          LOBYTE(v8) = *v3;
          if ( (unsigned __int8)RtlUpperChar(v8) != v7 )
            break;
        }
        if ( ++v3 >= v4 )
          return 1;
      }
    }
    else
    {
      v9 = *(_QWORD *)(a2 + 8) - (_QWORD)v3;
      while ( *v3 == v3[v9] )
      {
        if ( ++v3 >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
