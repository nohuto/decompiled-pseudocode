/*
 * XREFs of sub_1800AACE0 @ 0x1800AACE0
 * Callers:
 *     sub_1800AE170 @ 0x1800AE170 (sub_1800AE170.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800AACE0(char *a1, char *a2, __int64 a3)
{
  __int64 v4; // r8
  char *v5; // rax
  char *v6; // r9
  __int64 v7; // rdx
  signed __int64 v8; // r9
  unsigned __int16 v9; // r10
  int v10; // eax

  if ( a1 == a2 )
    return 1;
  v4 = a3 - (_QWORD)a1;
  while ( 1 )
  {
    v5 = &a1[v4];
    if ( *(_QWORD *)&a1[v4 + 24] >= 8uLL )
      v5 = *(char **)v5;
    v6 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v6 = *(char **)a1;
    v7 = *((_QWORD *)a1 + 2);
    if ( v7 != *(_QWORD *)&a1[v4 + 16] )
      return 0;
    if ( v7 )
    {
      v8 = v6 - v5;
      while ( 1 )
      {
        v9 = *(_WORD *)&v5[v8];
        if ( v9 != *(_WORD *)v5 )
          break;
        v5 += 2;
        if ( !--v7 )
          goto LABEL_12;
      }
      v10 = v9 < *(_WORD *)v5 ? -1 : 1;
    }
    else
    {
LABEL_12:
      v10 = 0;
    }
    if ( v10 )
      return 0;
    a1 += 32;
    if ( a1 == a2 )
      return 1;
  }
}
