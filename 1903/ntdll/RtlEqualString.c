/*
 * XREFs of RtlEqualString @ 0x180062110
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800621B0 (RtlUpperChar.c)
 */

char __fastcall RtlEqualString(unsigned __int16 *a1, __int64 a2, char a3)
{
  _BYTE *v4; // rdi
  _BYTE *v5; // rsi
  __int64 v6; // r14
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rdx

  if ( *a1 != *(_WORD *)a2 )
    return 0;
  v4 = (_BYTE *)*((_QWORD *)a1 + 1);
  v5 = &v4[*a1];
  if ( v4 < v5 )
  {
    if ( a3 )
    {
      v6 = *(_QWORD *)(a2 + 8) - (_QWORD)v4;
      while ( 1 )
      {
        LOBYTE(a1) = v4[v6];
        if ( *v4 != (_BYTE)a1 )
        {
          v7 = RtlUpperChar(a1);
          LOBYTE(v8) = *v4;
          if ( (unsigned __int8)RtlUpperChar(v8) != v7 )
            break;
        }
        if ( ++v4 >= v5 )
          return 1;
      }
    }
    else
    {
      v9 = *(_QWORD *)(a2 + 8) - (_QWORD)v4;
      while ( *v4 == v4[v9] )
      {
        if ( ++v4 >= v5 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
