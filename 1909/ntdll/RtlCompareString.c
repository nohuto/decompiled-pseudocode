/*
 * XREFs of RtlCompareString @ 0x18008A060
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180062250 (RtlUpperChar.c)
 */

__int64 __fastcall RtlCompareString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r12d
  __int64 v5; // rbp
  char *v6; // rbx
  char *v7; // rbp
  __int64 v8; // rsi
  char v9; // r14
  unsigned __int8 v11; // r15
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  unsigned __int8 v15; // dl

  v3 = *a1;
  v4 = *a2;
  v5 = *a1;
  v6 = (char *)*((_QWORD *)a1 + 1);
  if ( v3 > v4 )
    v5 = *a2;
  v7 = &v6[v5];
  if ( v6 >= v7 )
    return v3 - v4;
  if ( a3 )
  {
    v8 = *((_QWORD *)a2 + 1) - (_QWORD)v6;
    while ( 1 )
    {
      v9 = v6[v8];
      if ( *v6 != v9 )
      {
        v11 = RtlUpperChar(*v6);
        LOBYTE(v12) = RtlUpperChar(v9);
        if ( v11 != (_BYTE)v12 )
          break;
      }
      if ( ++v6 >= v7 )
        return v3 - v4;
    }
    v12 = (unsigned __int8)v12;
    v13 = v11;
  }
  else
  {
    v14 = *((_QWORD *)a2 + 1) - (_QWORD)v6;
    while ( 1 )
    {
      LOBYTE(v13) = *v6;
      v15 = v6[v14];
      if ( *v6 != v15 )
        break;
      if ( ++v6 >= v7 )
        return v3 - v4;
    }
    v12 = v15;
    v13 = (unsigned __int8)v13;
  }
  return (unsigned int)(v13 - v12);
}
