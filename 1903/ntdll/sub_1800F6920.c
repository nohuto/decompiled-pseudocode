/*
 * XREFs of sub_1800F6920 @ 0x1800F6920
 * Callers:
 *     sub_1800F6174 @ 0x1800F6174 (sub_1800F6174.c)
 * Callees:
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
 *     sub_1800621C4 @ 0x1800621C4 (sub_1800621C4.c)
 */

char sub_1800F6920()
{
  char v0; // al
  unsigned __int16 *v1; // r11
  char v2; // cl
  unsigned __int16 v3; // ax
  unsigned __int16 *v4; // r11
  __int64 v5; // rcx
  unsigned __int16 v6; // r10
  unsigned __int16 *v7; // r11
  __int64 v8; // r9
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9

  v0 = sub_1800621C4(1);
  if ( v0 != v2 )
  {
    v5 = *v1;
    if ( NlsMbOemCodePageTag )
    {
      v10 = *(unsigned __int16 *)(qword_180166948 + 2 * v5);
      v11 = *(unsigned __int8 *)(qword_180166948 + 2 * v5);
      v12 = v10 >> 8;
      if ( word_1801640E0[v12] )
      {
        v11 += (unsigned __int16)word_1801640E0[v12];
        v13 = qword_180166940;
      }
      else
      {
        v13 = qword_180166538;
      }
      v6 = sub_18001A234(*(_WORD *)(v13 + 2 * v11));
      v9 = *(_WORD *)(v14 + 2LL * v6);
    }
    else
    {
      v6 = sub_18001A234(*(_WORD *)(qword_180166538 + 2LL * *(unsigned __int8 *)(v5 + qword_180166548)));
      v9 = *(char *)(v6 + v8);
    }
    if ( v9 != word_180162794 )
    {
      *v7 = v6;
      return 1;
    }
    return 0;
  }
  if ( *v1 > 0x7Fu )
    return 0;
  v3 = sub_18001A234(*v1);
  *v4 = v3;
  return 1;
}
